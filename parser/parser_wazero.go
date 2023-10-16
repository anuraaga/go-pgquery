//go:build !tinygo.wasm && !pgquery_cgo

package parser

import (
	"context"
	"encoding/binary"
	"errors"
	"github.com/tetratelabs/wazero"
	"github.com/tetratelabs/wazero/api"
	"github.com/tetratelabs/wazero/experimental"
	"github.com/tetratelabs/wazero/imports/wasi_snapshot_preview1"
	"github.com/wasilibs/go-pgquery/internal/wasix_32v1"
	"github.com/wasilibs/go-pgquery/internal/wasm"
	"os"
	"runtime"
	"sync/atomic"
)

var (
	errFailedWrite = errors.New("failed to read from wasm memory")
	errFailedRead  = errors.New("failed to read from wasm memory")
)

var (
	wasmRT       wazero.Runtime
	wasmCompiled wazero.CompiledModule

	root api.Module
)

func init() {
	ctx := context.Background()
	rt := wazero.NewRuntimeWithConfig(ctx, wazero.NewRuntimeConfig().WithCoreFeatures(api.CoreFeaturesV2|experimental.CoreFeaturesThreads))

	wasi_snapshot_preview1.MustInstantiate(ctx, rt)
	wasix_32v1.MustInstantiate(ctx, rt)

	if _, err := rt.InstantiateWithConfig(ctx, wasm.Memory, wazero.NewModuleConfig().WithName("env")); err != nil {
		panic(err)
	}

	code, err := rt.CompileModule(ctx, wasm.LibPGQuery)
	if err != nil {
		panic(err)
	}
	mod, err := rt.InstantiateModule(ctx, code, wazero.NewModuleConfig().WithSysNanotime().WithStdout(os.Stdout).WithStderr(os.Stderr).WithName("").WithStartFunctions("_initialize"))
	if err != nil {
		panic(err)
	}

	wasmCompiled = code
	wasmRT = rt
	root = mod
}

var prevTID uint32

type childModule struct {
	mod        api.Module
	tlsBasePtr uint32
	stackTop   uint32
	functions  map[string]api.Function
}

func createChildModule(rt wazero.Runtime, root api.Module) *childModule {
	ctx := context.Background()

	// Not executing function so is at end of stack
	stackPointer := root.ExportedGlobal("__stack_pointer").Get()
	tlsBase := root.ExportedGlobal("__tls_base").Get()

	// Thread-local-storage for the main thread is from __tls_base to __stack_pointer
	// For now, let's preserve the size but in the future we can probably use less.
	size := stackPointer - tlsBase

	malloc := root.ExportedFunction("malloc")

	// Allocate memory for the child thread stack
	res, err := malloc.Call(ctx, size)
	if err != nil {
		panic(err)
	}
	ptr := uint32(res[0])

	child, err := rt.InstantiateModule(ctx, wasmCompiled, wazero.NewModuleConfig().WithSysNanotime().WithStdout(os.Stdout).WithStderr(os.Stderr).
		// Don't need to execute start functions again in child, it crashes anyways.
		WithStartFunctions())
	if err != nil {
		panic(err)
	}
	initTLS := child.ExportedFunction("__wasm_init_tls")
	if _, err := initTLS.Call(ctx, uint64(ptr)); err != nil {
		panic(err)
	}

	tid := atomic.AddUint32(&prevTID, 1)
	root.Memory().WriteUint32Le(ptr, ptr)
	root.Memory().WriteUint32Le(ptr+20, tid)
	child.ExportedGlobal("__stack_pointer").(api.MutableGlobal).Set(uint64(ptr) + size)

	ret := &childModule{
		mod:        child,
		tlsBasePtr: ptr,
		stackTop:   ptr + uint32(size),
		functions:  map[string]api.Function{},
	}
	runtime.SetFinalizer(ret, func(obj interface{}) {
		cm := obj.(*childModule)
		free := cm.mod.ExportedFunction("free")
		if _, err := free.Call(ctx, uint64(cm.tlsBasePtr)); err != nil {
			panic(err)
		}
		_ = cm.mod.Close(context.Background())
	})
	return ret
}

func newABI() *abi {
	modH := createChildModule(wasmRT, root)
	mod := modH.mod
	abi := &abi{
		fPgQueryInit:                    newLazyFunction(wasmRT, mod, "pg_query_init"),
		fPgQueryParse:                   newLazyFunction(wasmRT, mod, "pg_query_parse"),
		fPgQueryFreeParseResult:         newLazyFunction(wasmRT, mod, "pg_query_free_parse_result"),
		fPgQueryParseProtobuf:           newLazyFunction(wasmRT, mod, "pg_query_parse_protobuf"),
		fPgQueryFreeProtobufParseResult: newLazyFunction(wasmRT, mod, "pg_query_free_protobuf_parse_result"),

		malloc: newLazyFunction(wasmRT, mod, "malloc"),
		free:   newLazyFunction(wasmRT, mod, "free"),

		mod:        mod,
		child:      modH,
		wasmMemory: mod.Memory(),
	}

	abi.pgQueryInit()

	return abi
}

type abi struct {
	fPgQueryInit                    lazyFunction
	fPgQueryParse                   lazyFunction
	fPgQueryFreeParseResult         lazyFunction
	fPgQueryParseProtobuf           lazyFunction
	fPgQueryFreeProtobufParseResult lazyFunction

	malloc lazyFunction
	free   lazyFunction

	wasmMemory api.Memory

	mod   api.Module
	child *childModule
}

func (abi *abi) pgQueryInit() {
	abi.fPgQueryInit.Call0(context.Background())
}

func (abi *abi) pgQueryParse(input cString) (result string, err error) {
	ctx := wasix_32v1.BackgroundContext(abi.child.stackTop)

	resPtr := abi.malloc.Call1(ctx, 12)
	defer abi.free.Call1(ctx, resPtr)

	abi.fPgQueryParse.Call2(ctx, resPtr, uint64(input.ptr))
	defer abi.fPgQueryFreeParseResult.Call1(ctx, resPtr)

	resBuf, ok := abi.wasmMemory.Read(uint32(resPtr), 12)
	if !ok {
		panic(errFailedRead)
	}
	parseTreePtr := binary.LittleEndian.Uint32(resBuf)
	parseTreeEndPtr := parseTreePtr
	for {
		if b, ok := abi.wasmMemory.ReadByte(parseTreeEndPtr); !ok {
			panic(errFailedRead)
		} else if b == 0 {
			break
		}
		parseTreeEndPtr++
	}

	buf, ok := abi.wasmMemory.Read(parseTreePtr, parseTreeEndPtr-parseTreePtr)
	if !ok {
		panic(errFailedRead)
	}

	return string(buf), nil
}

func (abi *abi) pgQueryParseProtobuf(input cString) (result []byte, err error) {
	ctx := wasix_32v1.BackgroundContext(abi.child.stackTop)

	resPtr := abi.malloc.Call1(ctx, 16)
	defer abi.free.Call1(ctx, resPtr)

	abi.fPgQueryParseProtobuf.Call2(ctx, resPtr, uint64(input.ptr))
	defer abi.fPgQueryFreeProtobufParseResult.Call1(ctx, resPtr)

	resBuf, ok := abi.wasmMemory.Read(uint32(resPtr), 16)
	if !ok {
		panic(errFailedRead)
	}

	errPtr := binary.LittleEndian.Uint32(resBuf[12:])
	if errPtr != 0 {
		return nil, newPgQueryError(abi.mod, errPtr)
	}

	pgQueryProtobufLen := binary.LittleEndian.Uint32(resBuf)
	pgQueryProtobufData := binary.LittleEndian.Uint32(resBuf[4:])

	buf, ok := abi.wasmMemory.Read(pgQueryProtobufData, pgQueryProtobufLen)
	if !ok {
		panic(errFailedRead)
	}

	return buf, nil
}

func newPgQueryError(mod api.Module, errPtr uint32) error {
	message := readCStringPtr(mod.Memory(), errPtr)
	funcname := readCStringPtr(mod.Memory(), errPtr+4)
	filename := readCStringPtr(mod.Memory(), errPtr+8)
	lineno, ok := mod.Memory().ReadUint32Le(errPtr + 12)
	if !ok {
		panic(errFailedRead)
	}
	cursorpos, ok := mod.Memory().ReadUint32Le(errPtr + 16)
	if !ok {
		panic(errFailedRead)
	}
	context := readCStringPtr(mod.Memory(), errPtr+20)

	return &Error{
		Message:   message,
		Funcname:  funcname,
		Filename:  filename,
		Lineno:    int(lineno),
		Cursorpos: int(cursorpos),
		Context:   context,
	}
}

func readCStringPtr(mem api.Memory, ptrptr uint32) string {
	ptr, ok := mem.ReadUint32Le(ptrptr)
	if !ok {
		panic(errFailedRead)
	}
	s := ""
	if ptr == 0 {
		return s
	}
	endPtr := ptr
	for {
		if b, ok := mem.ReadByte(endPtr); !ok {
			panic(errFailedRead)
		} else if b == 0 {
			break
		}
		endPtr++
	}
	buf, ok := mem.Read(ptr, endPtr-ptr)
	if !ok {
		panic(errFailedRead)
	}
	return string(buf)
}

type lazyFunction struct {
	f    api.Function
	rt   wazero.Runtime
	name string
	mod  api.Module
}

func newLazyFunction(rt wazero.Runtime, mod api.Module, name string) lazyFunction {
	return lazyFunction{rt: rt, mod: mod, name: name}
}

func (f *lazyFunction) Call0(ctx context.Context) uint64 {
	var callStack [1]uint64
	return f.callWithStack(ctx, callStack[:])
}

func (f *lazyFunction) Call1(ctx context.Context, arg1 uint64) uint64 {
	var callStack [1]uint64
	callStack[0] = arg1
	return f.callWithStack(ctx, callStack[:])
}

func (f *lazyFunction) Call2(ctx context.Context, arg1 uint64, arg2 uint64) uint64 {
	var callStack [2]uint64
	callStack[0] = arg1
	callStack[1] = arg2
	return f.callWithStack(ctx, callStack[:])
}

func (f *lazyFunction) Call3(ctx context.Context, arg1 uint64, arg2 uint64, arg3 uint64) uint64 {
	var callStack [3]uint64
	callStack[0] = arg1
	callStack[1] = arg2
	callStack[2] = arg3
	return f.callWithStack(ctx, callStack[:])
}

func (f *lazyFunction) Call8(ctx context.Context, arg1 uint64, arg2 uint64, arg3 uint64, arg4 uint64, arg5 uint64, arg6 uint64, arg7 uint64, arg8 uint64) uint64 {
	var callStack [8]uint64
	callStack[0] = arg1
	callStack[1] = arg2
	callStack[2] = arg3
	callStack[3] = arg4
	callStack[4] = arg5
	callStack[5] = arg6
	callStack[6] = arg7
	callStack[7] = arg8
	return f.callWithStack(ctx, callStack[:])
}

func (f *lazyFunction) callWithStack(ctx context.Context, callStack []uint64) uint64 {
	if f.f == nil {
		f.f = f.mod.ExportedFunction(f.name)
	}
	if err := f.f.CallWithStack(ctx, callStack); err != nil {
		panic(err)
	}
	return callStack[0]
}

type cString struct {
	ptr    uint32
	length int
	abi    *abi
}

func (abi *abi) newCString(s string) cString {
	ptr := uint32(abi.malloc.Call1(context.Background(), uint64(len(s)+1)))
	abi.wasmMemory.WriteString(ptr, s)
	abi.wasmMemory.WriteByte(ptr+uint32(len(s)), 0)
	return cString{
		ptr:    ptr,
		length: len(s),
		abi:    abi,
	}
}

func (s cString) Close() error {
	s.abi.free.Call1(context.Background(), uint64(s.ptr))
	return nil
}
