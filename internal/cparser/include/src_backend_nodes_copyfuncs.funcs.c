/*--------------------------------------------------------------------
 * Symbols referenced in this file:
 * - _copyAlias
 * - _copyRangeVar
 * - _copyTableFunc
 * - _copyIntoClause
 * - _copyVar
 * - _copyParam
 * - _copyAggref
 * - _copyGroupingFunc
 * - _copyWindowFunc
 * - _copySubscriptingRef
 * - _copyFuncExpr
 * - _copyNamedArgExpr
 * - _copyOpExpr
 * - _copyDistinctExpr
 * - _copyNullIfExpr
 * - _copyScalarArrayOpExpr
 * - _copyBoolExpr
 * - _copySubLink
 * - _copySubPlan
 * - _copyAlternativeSubPlan
 * - _copyFieldSelect
 * - _copyFieldStore
 * - _copyRelabelType
 * - _copyCoerceViaIO
 * - _copyArrayCoerceExpr
 * - _copyConvertRowtypeExpr
 * - _copyCollateExpr
 * - _copyCaseExpr
 * - _copyCaseWhen
 * - _copyCaseTestExpr
 * - _copyArrayExpr
 * - _copyRowExpr
 * - _copyRowCompareExpr
 * - _copyCoalesceExpr
 * - _copyMinMaxExpr
 * - _copySQLValueFunction
 * - _copyXmlExpr
 * - _copyJsonFormat
 * - _copyJsonReturning
 * - _copyJsonValueExpr
 * - _copyJsonConstructorExpr
 * - _copyJsonIsPredicate
 * - _copyNullTest
 * - _copyBooleanTest
 * - _copyCoerceToDomain
 * - _copyCoerceToDomainValue
 * - _copySetToDefault
 * - _copyCurrentOfExpr
 * - _copyNextValueExpr
 * - _copyInferenceElem
 * - _copyTargetEntry
 * - _copyRangeTblRef
 * - _copyJoinExpr
 * - _copyFromExpr
 * - _copyOnConflictExpr
 * - _copyQuery
 * - _copyTypeName
 * - _copyColumnRef
 * - _copyParamRef
 * - _copyA_Expr
 * - _copyTypeCast
 * - _copyCollateClause
 * - _copyRoleSpec
 * - _copyFuncCall
 * - _copyA_Star
 * - _copyA_Indices
 * - _copyA_Indirection
 * - _copyA_ArrayExpr
 * - _copyResTarget
 * - _copyMultiAssignRef
 * - _copySortBy
 * - _copyWindowDef
 * - _copyRangeSubselect
 * - _copyRangeFunction
 * - _copyRangeTableFunc
 * - _copyRangeTableFuncCol
 * - _copyRangeTableSample
 * - _copyColumnDef
 * - _copyTableLikeClause
 * - _copyIndexElem
 * - _copyDefElem
 * - _copyLockingClause
 * - _copyXmlSerialize
 * - _copyPartitionElem
 * - _copyPartitionSpec
 * - _copyPartitionBoundSpec
 * - _copyPartitionRangeDatum
 * - _copyPartitionCmd
 * - _copyRangeTblEntry
 * - _copyRTEPermissionInfo
 * - _copyRangeTblFunction
 * - _copyTableSampleClause
 * - _copyWithCheckOption
 * - _copySortGroupClause
 * - _copyGroupingSet
 * - _copyWindowClause
 * - _copyRowMarkClause
 * - _copyWithClause
 * - _copyInferClause
 * - _copyOnConflictClause
 * - _copyCTESearchClause
 * - _copyCTECycleClause
 * - _copyCommonTableExpr
 * - _copyMergeWhenClause
 * - _copyMergeAction
 * - _copyTriggerTransition
 * - _copyJsonOutput
 * - _copyJsonKeyValue
 * - _copyJsonObjectConstructor
 * - _copyJsonArrayConstructor
 * - _copyJsonArrayQueryConstructor
 * - _copyJsonAggConstructor
 * - _copyJsonObjectAgg
 * - _copyJsonArrayAgg
 * - _copyRawStmt
 * - _copyInsertStmt
 * - _copyDeleteStmt
 * - _copyUpdateStmt
 * - _copyMergeStmt
 * - _copySelectStmt
 * - _copySetOperationStmt
 * - _copyReturnStmt
 * - _copyPLAssignStmt
 * - _copyCreateSchemaStmt
 * - _copyAlterTableStmt
 * - _copyReplicaIdentityStmt
 * - _copyAlterTableCmd
 * - _copyAlterCollationStmt
 * - _copyAlterDomainStmt
 * - _copyGrantStmt
 * - _copyObjectWithArgs
 * - _copyAccessPriv
 * - _copyGrantRoleStmt
 * - _copyAlterDefaultPrivilegesStmt
 * - _copyCopyStmt
 * - _copyVariableSetStmt
 * - _copyVariableShowStmt
 * - _copyCreateStmt
 * - _copyConstraint
 * - _copyCreateTableSpaceStmt
 * - _copyDropTableSpaceStmt
 * - _copyAlterTableSpaceOptionsStmt
 * - _copyAlterTableMoveAllStmt
 * - _copyCreateExtensionStmt
 * - _copyAlterExtensionStmt
 * - _copyAlterExtensionContentsStmt
 * - _copyCreateFdwStmt
 * - _copyAlterFdwStmt
 * - _copyCreateForeignServerStmt
 * - _copyAlterForeignServerStmt
 * - _copyCreateForeignTableStmt
 * - _copyCreateUserMappingStmt
 * - _copyAlterUserMappingStmt
 * - _copyDropUserMappingStmt
 * - _copyImportForeignSchemaStmt
 * - _copyCreatePolicyStmt
 * - _copyAlterPolicyStmt
 * - _copyCreateAmStmt
 * - _copyCreateTrigStmt
 * - _copyCreateEventTrigStmt
 * - _copyAlterEventTrigStmt
 * - _copyCreatePLangStmt
 * - _copyCreateRoleStmt
 * - _copyAlterRoleStmt
 * - _copyAlterRoleSetStmt
 * - _copyDropRoleStmt
 * - _copyCreateSeqStmt
 * - _copyAlterSeqStmt
 * - _copyDefineStmt
 * - _copyCreateDomainStmt
 * - _copyCreateOpClassStmt
 * - _copyCreateOpClassItem
 * - _copyCreateOpFamilyStmt
 * - _copyAlterOpFamilyStmt
 * - _copyDropStmt
 * - _copyTruncateStmt
 * - _copyCommentStmt
 * - _copySecLabelStmt
 * - _copyDeclareCursorStmt
 * - _copyClosePortalStmt
 * - _copyFetchStmt
 * - _copyIndexStmt
 * - _copyCreateStatsStmt
 * - _copyStatsElem
 * - _copyAlterStatsStmt
 * - _copyCreateFunctionStmt
 * - _copyFunctionParameter
 * - _copyAlterFunctionStmt
 * - _copyDoStmt
 * - _copyCallStmt
 * - _copyRenameStmt
 * - _copyAlterObjectDependsStmt
 * - _copyAlterObjectSchemaStmt
 * - _copyAlterOwnerStmt
 * - _copyAlterOperatorStmt
 * - _copyAlterTypeStmt
 * - _copyRuleStmt
 * - _copyNotifyStmt
 * - _copyListenStmt
 * - _copyUnlistenStmt
 * - _copyTransactionStmt
 * - _copyCompositeTypeStmt
 * - _copyCreateEnumStmt
 * - _copyCreateRangeStmt
 * - _copyAlterEnumStmt
 * - _copyViewStmt
 * - _copyLoadStmt
 * - _copyCreatedbStmt
 * - _copyAlterDatabaseStmt
 * - _copyAlterDatabaseRefreshCollStmt
 * - _copyAlterDatabaseSetStmt
 * - _copyDropdbStmt
 * - _copyAlterSystemStmt
 * - _copyClusterStmt
 * - _copyVacuumStmt
 * - _copyVacuumRelation
 * - _copyExplainStmt
 * - _copyCreateTableAsStmt
 * - _copyRefreshMatViewStmt
 * - _copyCheckPointStmt
 * - _copyDiscardStmt
 * - _copyLockStmt
 * - _copyConstraintsSetStmt
 * - _copyReindexStmt
 * - _copyCreateConversionStmt
 * - _copyCreateCastStmt
 * - _copyCreateTransformStmt
 * - _copyPrepareStmt
 * - _copyExecuteStmt
 * - _copyDeallocateStmt
 * - _copyDropOwnedStmt
 * - _copyReassignOwnedStmt
 * - _copyAlterTSDictionaryStmt
 * - _copyAlterTSConfigurationStmt
 * - _copyPublicationTable
 * - _copyPublicationObjSpec
 * - _copyCreatePublicationStmt
 * - _copyAlterPublicationStmt
 * - _copyCreateSubscriptionStmt
 * - _copyAlterSubscriptionStmt
 * - _copyDropSubscriptionStmt
 * - _copyPathKey
 * - _copyRestrictInfo
 * - _copyPlaceHolderVar
 * - _copySpecialJoinInfo
 * - _copyAppendRelInfo
 * - _copyPlaceHolderInfo
 * - _copyPlannedStmt
 * - _copyResult
 * - _copyProjectSet
 * - _copyModifyTable
 * - _copyAppend
 * - _copyMergeAppend
 * - _copyRecursiveUnion
 * - _copyBitmapAnd
 * - _copyBitmapOr
 * - _copySeqScan
 * - _copySampleScan
 * - _copyIndexScan
 * - _copyIndexOnlyScan
 * - _copyBitmapIndexScan
 * - _copyBitmapHeapScan
 * - _copyTidScan
 * - _copyTidRangeScan
 * - _copySubqueryScan
 * - _copyFunctionScan
 * - _copyValuesScan
 * - _copyTableFuncScan
 * - _copyCteScan
 * - _copyNamedTuplestoreScan
 * - _copyWorkTableScan
 * - _copyForeignScan
 * - _copyCustomScan
 * - _copyNestLoop
 * - _copyNestLoopParam
 * - _copyMergeJoin
 * - _copyHashJoin
 * - _copyMaterial
 * - _copyMemoize
 * - _copySort
 * - _copyIncrementalSort
 * - _copyGroup
 * - _copyAgg
 * - _copyWindowAgg
 * - _copyUnique
 * - _copyGather
 * - _copyGatherMerge
 * - _copyHash
 * - _copySetOp
 * - _copyLockRows
 * - _copyLimit
 * - _copyPlanRowMark
 * - _copyPartitionPruneInfo
 * - _copyPartitionedRelPruneInfo
 * - _copyPartitionPruneStepOp
 * - _copyPartitionPruneStepCombine
 * - _copyPlanInvalItem
 * - _copyInteger
 * - _copyFloat
 * - _copyBoolean
 * - _copyString
 * - _copyBitString
 * - _copyForeignKeyCacheInfo
 *--------------------------------------------------------------------
 */

/*-------------------------------------------------------------------------
 *
 * copyfuncs.funcs.c
 *    Generated node infrastructure code
 *
 * Portions Copyright (c) 1996-2023, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * NOTES
 *  ******************************
 *  *** DO NOT EDIT THIS FILE! ***
 *  ******************************
 *
 *  It has been GENERATED by src/backend/nodes/gen_node_support.pl
 *
 *-------------------------------------------------------------------------
 */
#include "access/amapi.h"
#include "access/sdir.h"
#include "access/tableam.h"
#include "access/tsmapi.h"
#include "commands/event_trigger.h"
#include "commands/trigger.h"
#include "executor/tuptable.h"
#include "foreign/fdwapi.h"
#include "nodes/bitmapset.h"
#include "nodes/execnodes.h"
#include "nodes/extensible.h"
#include "nodes/lockoptions.h"
#include "nodes/miscnodes.h"
#include "nodes/nodes.h"
#include "nodes/parsenodes.h"
#include "nodes/pathnodes.h"
#include "nodes/plannodes.h"
#include "nodes/primnodes.h"
#include "nodes/replnodes.h"
#include "nodes/supportnodes.h"
#include "nodes/value.h"
#include "utils/rel.h"

static Alias *
_copyAlias(const Alias *from)
{
	Alias *newnode = makeNode(Alias);

	COPY_STRING_FIELD(aliasname);
	COPY_NODE_FIELD(colnames);

	return newnode;
}

static RangeVar *
_copyRangeVar(const RangeVar *from)
{
	RangeVar *newnode = makeNode(RangeVar);

	COPY_STRING_FIELD(catalogname);
	COPY_STRING_FIELD(schemaname);
	COPY_STRING_FIELD(relname);
	COPY_SCALAR_FIELD(inh);
	COPY_SCALAR_FIELD(relpersistence);
	COPY_NODE_FIELD(alias);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static TableFunc *
_copyTableFunc(const TableFunc *from)
{
	TableFunc *newnode = makeNode(TableFunc);

	COPY_NODE_FIELD(ns_uris);
	COPY_NODE_FIELD(ns_names);
	COPY_NODE_FIELD(docexpr);
	COPY_NODE_FIELD(rowexpr);
	COPY_NODE_FIELD(colnames);
	COPY_NODE_FIELD(coltypes);
	COPY_NODE_FIELD(coltypmods);
	COPY_NODE_FIELD(colcollations);
	COPY_NODE_FIELD(colexprs);
	COPY_NODE_FIELD(coldefexprs);
	COPY_BITMAPSET_FIELD(notnulls);
	COPY_SCALAR_FIELD(ordinalitycol);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static IntoClause *
_copyIntoClause(const IntoClause *from)
{
	IntoClause *newnode = makeNode(IntoClause);

	COPY_NODE_FIELD(rel);
	COPY_NODE_FIELD(colNames);
	COPY_STRING_FIELD(accessMethod);
	COPY_NODE_FIELD(options);
	COPY_SCALAR_FIELD(onCommit);
	COPY_STRING_FIELD(tableSpaceName);
	COPY_NODE_FIELD(viewQuery);
	COPY_SCALAR_FIELD(skipData);

	return newnode;
}

static Var *
_copyVar(const Var *from)
{
	Var *newnode = makeNode(Var);

	COPY_SCALAR_FIELD(varno);
	COPY_SCALAR_FIELD(varattno);
	COPY_SCALAR_FIELD(vartype);
	COPY_SCALAR_FIELD(vartypmod);
	COPY_SCALAR_FIELD(varcollid);
	COPY_BITMAPSET_FIELD(varnullingrels);
	COPY_SCALAR_FIELD(varlevelsup);
	COPY_SCALAR_FIELD(varnosyn);
	COPY_SCALAR_FIELD(varattnosyn);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static Param *
_copyParam(const Param *from)
{
	Param *newnode = makeNode(Param);

	COPY_SCALAR_FIELD(paramkind);
	COPY_SCALAR_FIELD(paramid);
	COPY_SCALAR_FIELD(paramtype);
	COPY_SCALAR_FIELD(paramtypmod);
	COPY_SCALAR_FIELD(paramcollid);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static Aggref *
_copyAggref(const Aggref *from)
{
	Aggref *newnode = makeNode(Aggref);

	COPY_SCALAR_FIELD(aggfnoid);
	COPY_SCALAR_FIELD(aggtype);
	COPY_SCALAR_FIELD(aggcollid);
	COPY_SCALAR_FIELD(inputcollid);
	COPY_SCALAR_FIELD(aggtranstype);
	COPY_NODE_FIELD(aggargtypes);
	COPY_NODE_FIELD(aggdirectargs);
	COPY_NODE_FIELD(args);
	COPY_NODE_FIELD(aggorder);
	COPY_NODE_FIELD(aggdistinct);
	COPY_NODE_FIELD(aggfilter);
	COPY_SCALAR_FIELD(aggstar);
	COPY_SCALAR_FIELD(aggvariadic);
	COPY_SCALAR_FIELD(aggkind);
	COPY_SCALAR_FIELD(aggpresorted);
	COPY_SCALAR_FIELD(agglevelsup);
	COPY_SCALAR_FIELD(aggsplit);
	COPY_SCALAR_FIELD(aggno);
	COPY_SCALAR_FIELD(aggtransno);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static GroupingFunc *
_copyGroupingFunc(const GroupingFunc *from)
{
	GroupingFunc *newnode = makeNode(GroupingFunc);

	COPY_NODE_FIELD(args);
	COPY_NODE_FIELD(refs);
	COPY_NODE_FIELD(cols);
	COPY_SCALAR_FIELD(agglevelsup);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static WindowFunc *
_copyWindowFunc(const WindowFunc *from)
{
	WindowFunc *newnode = makeNode(WindowFunc);

	COPY_SCALAR_FIELD(winfnoid);
	COPY_SCALAR_FIELD(wintype);
	COPY_SCALAR_FIELD(wincollid);
	COPY_SCALAR_FIELD(inputcollid);
	COPY_NODE_FIELD(args);
	COPY_NODE_FIELD(aggfilter);
	COPY_SCALAR_FIELD(winref);
	COPY_SCALAR_FIELD(winstar);
	COPY_SCALAR_FIELD(winagg);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static SubscriptingRef *
_copySubscriptingRef(const SubscriptingRef *from)
{
	SubscriptingRef *newnode = makeNode(SubscriptingRef);

	COPY_SCALAR_FIELD(refcontainertype);
	COPY_SCALAR_FIELD(refelemtype);
	COPY_SCALAR_FIELD(refrestype);
	COPY_SCALAR_FIELD(reftypmod);
	COPY_SCALAR_FIELD(refcollid);
	COPY_NODE_FIELD(refupperindexpr);
	COPY_NODE_FIELD(reflowerindexpr);
	COPY_NODE_FIELD(refexpr);
	COPY_NODE_FIELD(refassgnexpr);

	return newnode;
}

static FuncExpr *
_copyFuncExpr(const FuncExpr *from)
{
	FuncExpr *newnode = makeNode(FuncExpr);

	COPY_SCALAR_FIELD(funcid);
	COPY_SCALAR_FIELD(funcresulttype);
	COPY_SCALAR_FIELD(funcretset);
	COPY_SCALAR_FIELD(funcvariadic);
	COPY_SCALAR_FIELD(funcformat);
	COPY_SCALAR_FIELD(funccollid);
	COPY_SCALAR_FIELD(inputcollid);
	COPY_NODE_FIELD(args);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static NamedArgExpr *
_copyNamedArgExpr(const NamedArgExpr *from)
{
	NamedArgExpr *newnode = makeNode(NamedArgExpr);

	COPY_NODE_FIELD(arg);
	COPY_STRING_FIELD(name);
	COPY_SCALAR_FIELD(argnumber);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static OpExpr *
_copyOpExpr(const OpExpr *from)
{
	OpExpr *newnode = makeNode(OpExpr);

	COPY_SCALAR_FIELD(opno);
	COPY_SCALAR_FIELD(opfuncid);
	COPY_SCALAR_FIELD(opresulttype);
	COPY_SCALAR_FIELD(opretset);
	COPY_SCALAR_FIELD(opcollid);
	COPY_SCALAR_FIELD(inputcollid);
	COPY_NODE_FIELD(args);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static DistinctExpr *
_copyDistinctExpr(const DistinctExpr *from)
{
	DistinctExpr *newnode = makeNode(DistinctExpr);

	COPY_SCALAR_FIELD(opno);
	COPY_SCALAR_FIELD(opfuncid);
	COPY_SCALAR_FIELD(opresulttype);
	COPY_SCALAR_FIELD(opretset);
	COPY_SCALAR_FIELD(opcollid);
	COPY_SCALAR_FIELD(inputcollid);
	COPY_NODE_FIELD(args);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static NullIfExpr *
_copyNullIfExpr(const NullIfExpr *from)
{
	NullIfExpr *newnode = makeNode(NullIfExpr);

	COPY_SCALAR_FIELD(opno);
	COPY_SCALAR_FIELD(opfuncid);
	COPY_SCALAR_FIELD(opresulttype);
	COPY_SCALAR_FIELD(opretset);
	COPY_SCALAR_FIELD(opcollid);
	COPY_SCALAR_FIELD(inputcollid);
	COPY_NODE_FIELD(args);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static ScalarArrayOpExpr *
_copyScalarArrayOpExpr(const ScalarArrayOpExpr *from)
{
	ScalarArrayOpExpr *newnode = makeNode(ScalarArrayOpExpr);

	COPY_SCALAR_FIELD(opno);
	COPY_SCALAR_FIELD(opfuncid);
	COPY_SCALAR_FIELD(hashfuncid);
	COPY_SCALAR_FIELD(negfuncid);
	COPY_SCALAR_FIELD(useOr);
	COPY_SCALAR_FIELD(inputcollid);
	COPY_NODE_FIELD(args);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static BoolExpr *
_copyBoolExpr(const BoolExpr *from)
{
	BoolExpr *newnode = makeNode(BoolExpr);

	COPY_SCALAR_FIELD(boolop);
	COPY_NODE_FIELD(args);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static SubLink *
_copySubLink(const SubLink *from)
{
	SubLink *newnode = makeNode(SubLink);

	COPY_SCALAR_FIELD(subLinkType);
	COPY_SCALAR_FIELD(subLinkId);
	COPY_NODE_FIELD(testexpr);
	COPY_NODE_FIELD(operName);
	COPY_NODE_FIELD(subselect);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static SubPlan *
_copySubPlan(const SubPlan *from)
{
	SubPlan *newnode = makeNode(SubPlan);

	COPY_SCALAR_FIELD(subLinkType);
	COPY_NODE_FIELD(testexpr);
	COPY_NODE_FIELD(paramIds);
	COPY_SCALAR_FIELD(plan_id);
	COPY_STRING_FIELD(plan_name);
	COPY_SCALAR_FIELD(firstColType);
	COPY_SCALAR_FIELD(firstColTypmod);
	COPY_SCALAR_FIELD(firstColCollation);
	COPY_SCALAR_FIELD(useHashTable);
	COPY_SCALAR_FIELD(unknownEqFalse);
	COPY_SCALAR_FIELD(parallel_safe);
	COPY_NODE_FIELD(setParam);
	COPY_NODE_FIELD(parParam);
	COPY_NODE_FIELD(args);
	COPY_SCALAR_FIELD(startup_cost);
	COPY_SCALAR_FIELD(per_call_cost);

	return newnode;
}

static AlternativeSubPlan *
_copyAlternativeSubPlan(const AlternativeSubPlan *from)
{
	AlternativeSubPlan *newnode = makeNode(AlternativeSubPlan);

	COPY_NODE_FIELD(subplans);

	return newnode;
}

static FieldSelect *
_copyFieldSelect(const FieldSelect *from)
{
	FieldSelect *newnode = makeNode(FieldSelect);

	COPY_NODE_FIELD(arg);
	COPY_SCALAR_FIELD(fieldnum);
	COPY_SCALAR_FIELD(resulttype);
	COPY_SCALAR_FIELD(resulttypmod);
	COPY_SCALAR_FIELD(resultcollid);

	return newnode;
}

static FieldStore *
_copyFieldStore(const FieldStore *from)
{
	FieldStore *newnode = makeNode(FieldStore);

	COPY_NODE_FIELD(arg);
	COPY_NODE_FIELD(newvals);
	COPY_NODE_FIELD(fieldnums);
	COPY_SCALAR_FIELD(resulttype);

	return newnode;
}

static RelabelType *
_copyRelabelType(const RelabelType *from)
{
	RelabelType *newnode = makeNode(RelabelType);

	COPY_NODE_FIELD(arg);
	COPY_SCALAR_FIELD(resulttype);
	COPY_SCALAR_FIELD(resulttypmod);
	COPY_SCALAR_FIELD(resultcollid);
	COPY_SCALAR_FIELD(relabelformat);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static CoerceViaIO *
_copyCoerceViaIO(const CoerceViaIO *from)
{
	CoerceViaIO *newnode = makeNode(CoerceViaIO);

	COPY_NODE_FIELD(arg);
	COPY_SCALAR_FIELD(resulttype);
	COPY_SCALAR_FIELD(resultcollid);
	COPY_SCALAR_FIELD(coerceformat);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static ArrayCoerceExpr *
_copyArrayCoerceExpr(const ArrayCoerceExpr *from)
{
	ArrayCoerceExpr *newnode = makeNode(ArrayCoerceExpr);

	COPY_NODE_FIELD(arg);
	COPY_NODE_FIELD(elemexpr);
	COPY_SCALAR_FIELD(resulttype);
	COPY_SCALAR_FIELD(resulttypmod);
	COPY_SCALAR_FIELD(resultcollid);
	COPY_SCALAR_FIELD(coerceformat);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static ConvertRowtypeExpr *
_copyConvertRowtypeExpr(const ConvertRowtypeExpr *from)
{
	ConvertRowtypeExpr *newnode = makeNode(ConvertRowtypeExpr);

	COPY_NODE_FIELD(arg);
	COPY_SCALAR_FIELD(resulttype);
	COPY_SCALAR_FIELD(convertformat);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static CollateExpr *
_copyCollateExpr(const CollateExpr *from)
{
	CollateExpr *newnode = makeNode(CollateExpr);

	COPY_NODE_FIELD(arg);
	COPY_SCALAR_FIELD(collOid);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static CaseExpr *
_copyCaseExpr(const CaseExpr *from)
{
	CaseExpr *newnode = makeNode(CaseExpr);

	COPY_SCALAR_FIELD(casetype);
	COPY_SCALAR_FIELD(casecollid);
	COPY_NODE_FIELD(arg);
	COPY_NODE_FIELD(args);
	COPY_NODE_FIELD(defresult);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static CaseWhen *
_copyCaseWhen(const CaseWhen *from)
{
	CaseWhen *newnode = makeNode(CaseWhen);

	COPY_NODE_FIELD(expr);
	COPY_NODE_FIELD(result);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static CaseTestExpr *
_copyCaseTestExpr(const CaseTestExpr *from)
{
	CaseTestExpr *newnode = makeNode(CaseTestExpr);

	COPY_SCALAR_FIELD(typeId);
	COPY_SCALAR_FIELD(typeMod);
	COPY_SCALAR_FIELD(collation);

	return newnode;
}

static ArrayExpr *
_copyArrayExpr(const ArrayExpr *from)
{
	ArrayExpr *newnode = makeNode(ArrayExpr);

	COPY_SCALAR_FIELD(array_typeid);
	COPY_SCALAR_FIELD(array_collid);
	COPY_SCALAR_FIELD(element_typeid);
	COPY_NODE_FIELD(elements);
	COPY_SCALAR_FIELD(multidims);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static RowExpr *
_copyRowExpr(const RowExpr *from)
{
	RowExpr *newnode = makeNode(RowExpr);

	COPY_NODE_FIELD(args);
	COPY_SCALAR_FIELD(row_typeid);
	COPY_SCALAR_FIELD(row_format);
	COPY_NODE_FIELD(colnames);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static RowCompareExpr *
_copyRowCompareExpr(const RowCompareExpr *from)
{
	RowCompareExpr *newnode = makeNode(RowCompareExpr);

	COPY_SCALAR_FIELD(rctype);
	COPY_NODE_FIELD(opnos);
	COPY_NODE_FIELD(opfamilies);
	COPY_NODE_FIELD(inputcollids);
	COPY_NODE_FIELD(largs);
	COPY_NODE_FIELD(rargs);

	return newnode;
}

static CoalesceExpr *
_copyCoalesceExpr(const CoalesceExpr *from)
{
	CoalesceExpr *newnode = makeNode(CoalesceExpr);

	COPY_SCALAR_FIELD(coalescetype);
	COPY_SCALAR_FIELD(coalescecollid);
	COPY_NODE_FIELD(args);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static MinMaxExpr *
_copyMinMaxExpr(const MinMaxExpr *from)
{
	MinMaxExpr *newnode = makeNode(MinMaxExpr);

	COPY_SCALAR_FIELD(minmaxtype);
	COPY_SCALAR_FIELD(minmaxcollid);
	COPY_SCALAR_FIELD(inputcollid);
	COPY_SCALAR_FIELD(op);
	COPY_NODE_FIELD(args);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static SQLValueFunction *
_copySQLValueFunction(const SQLValueFunction *from)
{
	SQLValueFunction *newnode = makeNode(SQLValueFunction);

	COPY_SCALAR_FIELD(op);
	COPY_SCALAR_FIELD(type);
	COPY_SCALAR_FIELD(typmod);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static XmlExpr *
_copyXmlExpr(const XmlExpr *from)
{
	XmlExpr *newnode = makeNode(XmlExpr);

	COPY_SCALAR_FIELD(op);
	COPY_STRING_FIELD(name);
	COPY_NODE_FIELD(named_args);
	COPY_NODE_FIELD(arg_names);
	COPY_NODE_FIELD(args);
	COPY_SCALAR_FIELD(xmloption);
	COPY_SCALAR_FIELD(indent);
	COPY_SCALAR_FIELD(type);
	COPY_SCALAR_FIELD(typmod);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static JsonFormat *
_copyJsonFormat(const JsonFormat *from)
{
	JsonFormat *newnode = makeNode(JsonFormat);

	COPY_SCALAR_FIELD(format_type);
	COPY_SCALAR_FIELD(encoding);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static JsonReturning *
_copyJsonReturning(const JsonReturning *from)
{
	JsonReturning *newnode = makeNode(JsonReturning);

	COPY_NODE_FIELD(format);
	COPY_SCALAR_FIELD(typid);
	COPY_SCALAR_FIELD(typmod);

	return newnode;
}

static JsonValueExpr *
_copyJsonValueExpr(const JsonValueExpr *from)
{
	JsonValueExpr *newnode = makeNode(JsonValueExpr);

	COPY_NODE_FIELD(raw_expr);
	COPY_NODE_FIELD(formatted_expr);
	COPY_NODE_FIELD(format);

	return newnode;
}

static JsonConstructorExpr *
_copyJsonConstructorExpr(const JsonConstructorExpr *from)
{
	JsonConstructorExpr *newnode = makeNode(JsonConstructorExpr);

	COPY_SCALAR_FIELD(type);
	COPY_NODE_FIELD(args);
	COPY_NODE_FIELD(func);
	COPY_NODE_FIELD(coercion);
	COPY_NODE_FIELD(returning);
	COPY_SCALAR_FIELD(absent_on_null);
	COPY_SCALAR_FIELD(unique);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static JsonIsPredicate *
_copyJsonIsPredicate(const JsonIsPredicate *from)
{
	JsonIsPredicate *newnode = makeNode(JsonIsPredicate);

	COPY_NODE_FIELD(expr);
	COPY_NODE_FIELD(format);
	COPY_SCALAR_FIELD(item_type);
	COPY_SCALAR_FIELD(unique_keys);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static NullTest *
_copyNullTest(const NullTest *from)
{
	NullTest *newnode = makeNode(NullTest);

	COPY_NODE_FIELD(arg);
	COPY_SCALAR_FIELD(nulltesttype);
	COPY_SCALAR_FIELD(argisrow);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static BooleanTest *
_copyBooleanTest(const BooleanTest *from)
{
	BooleanTest *newnode = makeNode(BooleanTest);

	COPY_NODE_FIELD(arg);
	COPY_SCALAR_FIELD(booltesttype);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static CoerceToDomain *
_copyCoerceToDomain(const CoerceToDomain *from)
{
	CoerceToDomain *newnode = makeNode(CoerceToDomain);

	COPY_NODE_FIELD(arg);
	COPY_SCALAR_FIELD(resulttype);
	COPY_SCALAR_FIELD(resulttypmod);
	COPY_SCALAR_FIELD(resultcollid);
	COPY_SCALAR_FIELD(coercionformat);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static CoerceToDomainValue *
_copyCoerceToDomainValue(const CoerceToDomainValue *from)
{
	CoerceToDomainValue *newnode = makeNode(CoerceToDomainValue);

	COPY_SCALAR_FIELD(typeId);
	COPY_SCALAR_FIELD(typeMod);
	COPY_SCALAR_FIELD(collation);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static SetToDefault *
_copySetToDefault(const SetToDefault *from)
{
	SetToDefault *newnode = makeNode(SetToDefault);

	COPY_SCALAR_FIELD(typeId);
	COPY_SCALAR_FIELD(typeMod);
	COPY_SCALAR_FIELD(collation);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static CurrentOfExpr *
_copyCurrentOfExpr(const CurrentOfExpr *from)
{
	CurrentOfExpr *newnode = makeNode(CurrentOfExpr);

	COPY_SCALAR_FIELD(cvarno);
	COPY_STRING_FIELD(cursor_name);
	COPY_SCALAR_FIELD(cursor_param);

	return newnode;
}

static NextValueExpr *
_copyNextValueExpr(const NextValueExpr *from)
{
	NextValueExpr *newnode = makeNode(NextValueExpr);

	COPY_SCALAR_FIELD(seqid);
	COPY_SCALAR_FIELD(typeId);

	return newnode;
}

static InferenceElem *
_copyInferenceElem(const InferenceElem *from)
{
	InferenceElem *newnode = makeNode(InferenceElem);

	COPY_NODE_FIELD(expr);
	COPY_SCALAR_FIELD(infercollid);
	COPY_SCALAR_FIELD(inferopclass);

	return newnode;
}

static TargetEntry *
_copyTargetEntry(const TargetEntry *from)
{
	TargetEntry *newnode = makeNode(TargetEntry);

	COPY_NODE_FIELD(expr);
	COPY_SCALAR_FIELD(resno);
	COPY_STRING_FIELD(resname);
	COPY_SCALAR_FIELD(ressortgroupref);
	COPY_SCALAR_FIELD(resorigtbl);
	COPY_SCALAR_FIELD(resorigcol);
	COPY_SCALAR_FIELD(resjunk);

	return newnode;
}

static RangeTblRef *
_copyRangeTblRef(const RangeTblRef *from)
{
	RangeTblRef *newnode = makeNode(RangeTblRef);

	COPY_SCALAR_FIELD(rtindex);

	return newnode;
}

static JoinExpr *
_copyJoinExpr(const JoinExpr *from)
{
	JoinExpr *newnode = makeNode(JoinExpr);

	COPY_SCALAR_FIELD(jointype);
	COPY_SCALAR_FIELD(isNatural);
	COPY_NODE_FIELD(larg);
	COPY_NODE_FIELD(rarg);
	COPY_NODE_FIELD(usingClause);
	COPY_NODE_FIELD(join_using_alias);
	COPY_NODE_FIELD(quals);
	COPY_NODE_FIELD(alias);
	COPY_SCALAR_FIELD(rtindex);

	return newnode;
}

static FromExpr *
_copyFromExpr(const FromExpr *from)
{
	FromExpr *newnode = makeNode(FromExpr);

	COPY_NODE_FIELD(fromlist);
	COPY_NODE_FIELD(quals);

	return newnode;
}

static OnConflictExpr *
_copyOnConflictExpr(const OnConflictExpr *from)
{
	OnConflictExpr *newnode = makeNode(OnConflictExpr);

	COPY_SCALAR_FIELD(action);
	COPY_NODE_FIELD(arbiterElems);
	COPY_NODE_FIELD(arbiterWhere);
	COPY_SCALAR_FIELD(constraint);
	COPY_NODE_FIELD(onConflictSet);
	COPY_NODE_FIELD(onConflictWhere);
	COPY_SCALAR_FIELD(exclRelIndex);
	COPY_NODE_FIELD(exclRelTlist);

	return newnode;
}

static Query *
_copyQuery(const Query *from)
{
	Query *newnode = makeNode(Query);

	COPY_SCALAR_FIELD(commandType);
	COPY_SCALAR_FIELD(querySource);
	COPY_SCALAR_FIELD(queryId);
	COPY_SCALAR_FIELD(canSetTag);
	COPY_NODE_FIELD(utilityStmt);
	COPY_SCALAR_FIELD(resultRelation);
	COPY_SCALAR_FIELD(hasAggs);
	COPY_SCALAR_FIELD(hasWindowFuncs);
	COPY_SCALAR_FIELD(hasTargetSRFs);
	COPY_SCALAR_FIELD(hasSubLinks);
	COPY_SCALAR_FIELD(hasDistinctOn);
	COPY_SCALAR_FIELD(hasRecursive);
	COPY_SCALAR_FIELD(hasModifyingCTE);
	COPY_SCALAR_FIELD(hasForUpdate);
	COPY_SCALAR_FIELD(hasRowSecurity);
	COPY_SCALAR_FIELD(isReturn);
	COPY_NODE_FIELD(cteList);
	COPY_NODE_FIELD(rtable);
	COPY_NODE_FIELD(rteperminfos);
	COPY_NODE_FIELD(jointree);
	COPY_NODE_FIELD(mergeActionList);
	COPY_SCALAR_FIELD(mergeUseOuterJoin);
	COPY_NODE_FIELD(targetList);
	COPY_SCALAR_FIELD(override);
	COPY_NODE_FIELD(onConflict);
	COPY_NODE_FIELD(returningList);
	COPY_NODE_FIELD(groupClause);
	COPY_SCALAR_FIELD(groupDistinct);
	COPY_NODE_FIELD(groupingSets);
	COPY_NODE_FIELD(havingQual);
	COPY_NODE_FIELD(windowClause);
	COPY_NODE_FIELD(distinctClause);
	COPY_NODE_FIELD(sortClause);
	COPY_NODE_FIELD(limitOffset);
	COPY_NODE_FIELD(limitCount);
	COPY_SCALAR_FIELD(limitOption);
	COPY_NODE_FIELD(rowMarks);
	COPY_NODE_FIELD(setOperations);
	COPY_NODE_FIELD(constraintDeps);
	COPY_NODE_FIELD(withCheckOptions);
	COPY_LOCATION_FIELD(stmt_location);
	COPY_SCALAR_FIELD(stmt_len);

	return newnode;
}

static TypeName *
_copyTypeName(const TypeName *from)
{
	TypeName *newnode = makeNode(TypeName);

	COPY_NODE_FIELD(names);
	COPY_SCALAR_FIELD(typeOid);
	COPY_SCALAR_FIELD(setof);
	COPY_SCALAR_FIELD(pct_type);
	COPY_NODE_FIELD(typmods);
	COPY_SCALAR_FIELD(typemod);
	COPY_NODE_FIELD(arrayBounds);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static ColumnRef *
_copyColumnRef(const ColumnRef *from)
{
	ColumnRef *newnode = makeNode(ColumnRef);

	COPY_NODE_FIELD(fields);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static ParamRef *
_copyParamRef(const ParamRef *from)
{
	ParamRef *newnode = makeNode(ParamRef);

	COPY_SCALAR_FIELD(number);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static A_Expr *
_copyA_Expr(const A_Expr *from)
{
	A_Expr *newnode = makeNode(A_Expr);

	COPY_SCALAR_FIELD(kind);
	COPY_NODE_FIELD(name);
	COPY_NODE_FIELD(lexpr);
	COPY_NODE_FIELD(rexpr);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static TypeCast *
_copyTypeCast(const TypeCast *from)
{
	TypeCast *newnode = makeNode(TypeCast);

	COPY_NODE_FIELD(arg);
	COPY_NODE_FIELD(typeName);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static CollateClause *
_copyCollateClause(const CollateClause *from)
{
	CollateClause *newnode = makeNode(CollateClause);

	COPY_NODE_FIELD(arg);
	COPY_NODE_FIELD(collname);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static RoleSpec *
_copyRoleSpec(const RoleSpec *from)
{
	RoleSpec *newnode = makeNode(RoleSpec);

	COPY_SCALAR_FIELD(roletype);
	COPY_STRING_FIELD(rolename);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static FuncCall *
_copyFuncCall(const FuncCall *from)
{
	FuncCall *newnode = makeNode(FuncCall);

	COPY_NODE_FIELD(funcname);
	COPY_NODE_FIELD(args);
	COPY_NODE_FIELD(agg_order);
	COPY_NODE_FIELD(agg_filter);
	COPY_NODE_FIELD(over);
	COPY_SCALAR_FIELD(agg_within_group);
	COPY_SCALAR_FIELD(agg_star);
	COPY_SCALAR_FIELD(agg_distinct);
	COPY_SCALAR_FIELD(func_variadic);
	COPY_SCALAR_FIELD(funcformat);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static A_Star *
_copyA_Star(const A_Star *from)
{
	A_Star *newnode = makeNode(A_Star);


	return newnode;
}

static A_Indices *
_copyA_Indices(const A_Indices *from)
{
	A_Indices *newnode = makeNode(A_Indices);

	COPY_SCALAR_FIELD(is_slice);
	COPY_NODE_FIELD(lidx);
	COPY_NODE_FIELD(uidx);

	return newnode;
}

static A_Indirection *
_copyA_Indirection(const A_Indirection *from)
{
	A_Indirection *newnode = makeNode(A_Indirection);

	COPY_NODE_FIELD(arg);
	COPY_NODE_FIELD(indirection);

	return newnode;
}

static A_ArrayExpr *
_copyA_ArrayExpr(const A_ArrayExpr *from)
{
	A_ArrayExpr *newnode = makeNode(A_ArrayExpr);

	COPY_NODE_FIELD(elements);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static ResTarget *
_copyResTarget(const ResTarget *from)
{
	ResTarget *newnode = makeNode(ResTarget);

	COPY_STRING_FIELD(name);
	COPY_NODE_FIELD(indirection);
	COPY_NODE_FIELD(val);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static MultiAssignRef *
_copyMultiAssignRef(const MultiAssignRef *from)
{
	MultiAssignRef *newnode = makeNode(MultiAssignRef);

	COPY_NODE_FIELD(source);
	COPY_SCALAR_FIELD(colno);
	COPY_SCALAR_FIELD(ncolumns);

	return newnode;
}

static SortBy *
_copySortBy(const SortBy *from)
{
	SortBy *newnode = makeNode(SortBy);

	COPY_NODE_FIELD(node);
	COPY_SCALAR_FIELD(sortby_dir);
	COPY_SCALAR_FIELD(sortby_nulls);
	COPY_NODE_FIELD(useOp);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static WindowDef *
_copyWindowDef(const WindowDef *from)
{
	WindowDef *newnode = makeNode(WindowDef);

	COPY_STRING_FIELD(name);
	COPY_STRING_FIELD(refname);
	COPY_NODE_FIELD(partitionClause);
	COPY_NODE_FIELD(orderClause);
	COPY_SCALAR_FIELD(frameOptions);
	COPY_NODE_FIELD(startOffset);
	COPY_NODE_FIELD(endOffset);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static RangeSubselect *
_copyRangeSubselect(const RangeSubselect *from)
{
	RangeSubselect *newnode = makeNode(RangeSubselect);

	COPY_SCALAR_FIELD(lateral);
	COPY_NODE_FIELD(subquery);
	COPY_NODE_FIELD(alias);

	return newnode;
}

static RangeFunction *
_copyRangeFunction(const RangeFunction *from)
{
	RangeFunction *newnode = makeNode(RangeFunction);

	COPY_SCALAR_FIELD(lateral);
	COPY_SCALAR_FIELD(ordinality);
	COPY_SCALAR_FIELD(is_rowsfrom);
	COPY_NODE_FIELD(functions);
	COPY_NODE_FIELD(alias);
	COPY_NODE_FIELD(coldeflist);

	return newnode;
}

static RangeTableFunc *
_copyRangeTableFunc(const RangeTableFunc *from)
{
	RangeTableFunc *newnode = makeNode(RangeTableFunc);

	COPY_SCALAR_FIELD(lateral);
	COPY_NODE_FIELD(docexpr);
	COPY_NODE_FIELD(rowexpr);
	COPY_NODE_FIELD(namespaces);
	COPY_NODE_FIELD(columns);
	COPY_NODE_FIELD(alias);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static RangeTableFuncCol *
_copyRangeTableFuncCol(const RangeTableFuncCol *from)
{
	RangeTableFuncCol *newnode = makeNode(RangeTableFuncCol);

	COPY_STRING_FIELD(colname);
	COPY_NODE_FIELD(typeName);
	COPY_SCALAR_FIELD(for_ordinality);
	COPY_SCALAR_FIELD(is_not_null);
	COPY_NODE_FIELD(colexpr);
	COPY_NODE_FIELD(coldefexpr);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static RangeTableSample *
_copyRangeTableSample(const RangeTableSample *from)
{
	RangeTableSample *newnode = makeNode(RangeTableSample);

	COPY_NODE_FIELD(relation);
	COPY_NODE_FIELD(method);
	COPY_NODE_FIELD(args);
	COPY_NODE_FIELD(repeatable);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static ColumnDef *
_copyColumnDef(const ColumnDef *from)
{
	ColumnDef *newnode = makeNode(ColumnDef);

	COPY_STRING_FIELD(colname);
	COPY_NODE_FIELD(typeName);
	COPY_STRING_FIELD(compression);
	COPY_SCALAR_FIELD(inhcount);
	COPY_SCALAR_FIELD(is_local);
	COPY_SCALAR_FIELD(is_not_null);
	COPY_SCALAR_FIELD(is_from_type);
	COPY_SCALAR_FIELD(storage);
	COPY_STRING_FIELD(storage_name);
	COPY_NODE_FIELD(raw_default);
	COPY_NODE_FIELD(cooked_default);
	COPY_SCALAR_FIELD(identity);
	COPY_NODE_FIELD(identitySequence);
	COPY_SCALAR_FIELD(generated);
	COPY_NODE_FIELD(collClause);
	COPY_SCALAR_FIELD(collOid);
	COPY_NODE_FIELD(constraints);
	COPY_NODE_FIELD(fdwoptions);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static TableLikeClause *
_copyTableLikeClause(const TableLikeClause *from)
{
	TableLikeClause *newnode = makeNode(TableLikeClause);

	COPY_NODE_FIELD(relation);
	COPY_SCALAR_FIELD(options);
	COPY_SCALAR_FIELD(relationOid);

	return newnode;
}

static IndexElem *
_copyIndexElem(const IndexElem *from)
{
	IndexElem *newnode = makeNode(IndexElem);

	COPY_STRING_FIELD(name);
	COPY_NODE_FIELD(expr);
	COPY_STRING_FIELD(indexcolname);
	COPY_NODE_FIELD(collation);
	COPY_NODE_FIELD(opclass);
	COPY_NODE_FIELD(opclassopts);
	COPY_SCALAR_FIELD(ordering);
	COPY_SCALAR_FIELD(nulls_ordering);

	return newnode;
}

static DefElem *
_copyDefElem(const DefElem *from)
{
	DefElem *newnode = makeNode(DefElem);

	COPY_STRING_FIELD(defnamespace);
	COPY_STRING_FIELD(defname);
	COPY_NODE_FIELD(arg);
	COPY_SCALAR_FIELD(defaction);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static LockingClause *
_copyLockingClause(const LockingClause *from)
{
	LockingClause *newnode = makeNode(LockingClause);

	COPY_NODE_FIELD(lockedRels);
	COPY_SCALAR_FIELD(strength);
	COPY_SCALAR_FIELD(waitPolicy);

	return newnode;
}

static XmlSerialize *
_copyXmlSerialize(const XmlSerialize *from)
{
	XmlSerialize *newnode = makeNode(XmlSerialize);

	COPY_SCALAR_FIELD(xmloption);
	COPY_NODE_FIELD(expr);
	COPY_NODE_FIELD(typeName);
	COPY_SCALAR_FIELD(indent);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static PartitionElem *
_copyPartitionElem(const PartitionElem *from)
{
	PartitionElem *newnode = makeNode(PartitionElem);

	COPY_STRING_FIELD(name);
	COPY_NODE_FIELD(expr);
	COPY_NODE_FIELD(collation);
	COPY_NODE_FIELD(opclass);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static PartitionSpec *
_copyPartitionSpec(const PartitionSpec *from)
{
	PartitionSpec *newnode = makeNode(PartitionSpec);

	COPY_SCALAR_FIELD(strategy);
	COPY_NODE_FIELD(partParams);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static PartitionBoundSpec *
_copyPartitionBoundSpec(const PartitionBoundSpec *from)
{
	PartitionBoundSpec *newnode = makeNode(PartitionBoundSpec);

	COPY_SCALAR_FIELD(strategy);
	COPY_SCALAR_FIELD(is_default);
	COPY_SCALAR_FIELD(modulus);
	COPY_SCALAR_FIELD(remainder);
	COPY_NODE_FIELD(listdatums);
	COPY_NODE_FIELD(lowerdatums);
	COPY_NODE_FIELD(upperdatums);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static PartitionRangeDatum *
_copyPartitionRangeDatum(const PartitionRangeDatum *from)
{
	PartitionRangeDatum *newnode = makeNode(PartitionRangeDatum);

	COPY_SCALAR_FIELD(kind);
	COPY_NODE_FIELD(value);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static PartitionCmd *
_copyPartitionCmd(const PartitionCmd *from)
{
	PartitionCmd *newnode = makeNode(PartitionCmd);

	COPY_NODE_FIELD(name);
	COPY_NODE_FIELD(bound);
	COPY_SCALAR_FIELD(concurrent);

	return newnode;
}

static RangeTblEntry *
_copyRangeTblEntry(const RangeTblEntry *from)
{
	RangeTblEntry *newnode = makeNode(RangeTblEntry);

	COPY_SCALAR_FIELD(rtekind);
	COPY_SCALAR_FIELD(relid);
	COPY_SCALAR_FIELD(relkind);
	COPY_SCALAR_FIELD(rellockmode);
	COPY_NODE_FIELD(tablesample);
	COPY_SCALAR_FIELD(perminfoindex);
	COPY_NODE_FIELD(subquery);
	COPY_SCALAR_FIELD(security_barrier);
	COPY_SCALAR_FIELD(jointype);
	COPY_SCALAR_FIELD(joinmergedcols);
	COPY_NODE_FIELD(joinaliasvars);
	COPY_NODE_FIELD(joinleftcols);
	COPY_NODE_FIELD(joinrightcols);
	COPY_NODE_FIELD(join_using_alias);
	COPY_NODE_FIELD(functions);
	COPY_SCALAR_FIELD(funcordinality);
	COPY_NODE_FIELD(tablefunc);
	COPY_NODE_FIELD(values_lists);
	COPY_STRING_FIELD(ctename);
	COPY_SCALAR_FIELD(ctelevelsup);
	COPY_SCALAR_FIELD(self_reference);
	COPY_NODE_FIELD(coltypes);
	COPY_NODE_FIELD(coltypmods);
	COPY_NODE_FIELD(colcollations);
	COPY_STRING_FIELD(enrname);
	COPY_SCALAR_FIELD(enrtuples);
	COPY_NODE_FIELD(alias);
	COPY_NODE_FIELD(eref);
	COPY_SCALAR_FIELD(lateral);
	COPY_SCALAR_FIELD(inh);
	COPY_SCALAR_FIELD(inFromCl);
	COPY_NODE_FIELD(securityQuals);

	return newnode;
}

static RTEPermissionInfo *
_copyRTEPermissionInfo(const RTEPermissionInfo *from)
{
	RTEPermissionInfo *newnode = makeNode(RTEPermissionInfo);

	COPY_SCALAR_FIELD(relid);
	COPY_SCALAR_FIELD(inh);
	COPY_SCALAR_FIELD(requiredPerms);
	COPY_SCALAR_FIELD(checkAsUser);
	COPY_BITMAPSET_FIELD(selectedCols);
	COPY_BITMAPSET_FIELD(insertedCols);
	COPY_BITMAPSET_FIELD(updatedCols);

	return newnode;
}

static RangeTblFunction *
_copyRangeTblFunction(const RangeTblFunction *from)
{
	RangeTblFunction *newnode = makeNode(RangeTblFunction);

	COPY_NODE_FIELD(funcexpr);
	COPY_SCALAR_FIELD(funccolcount);
	COPY_NODE_FIELD(funccolnames);
	COPY_NODE_FIELD(funccoltypes);
	COPY_NODE_FIELD(funccoltypmods);
	COPY_NODE_FIELD(funccolcollations);
	COPY_BITMAPSET_FIELD(funcparams);

	return newnode;
}

static TableSampleClause *
_copyTableSampleClause(const TableSampleClause *from)
{
	TableSampleClause *newnode = makeNode(TableSampleClause);

	COPY_SCALAR_FIELD(tsmhandler);
	COPY_NODE_FIELD(args);
	COPY_NODE_FIELD(repeatable);

	return newnode;
}

static WithCheckOption *
_copyWithCheckOption(const WithCheckOption *from)
{
	WithCheckOption *newnode = makeNode(WithCheckOption);

	COPY_SCALAR_FIELD(kind);
	COPY_STRING_FIELD(relname);
	COPY_STRING_FIELD(polname);
	COPY_NODE_FIELD(qual);
	COPY_SCALAR_FIELD(cascaded);

	return newnode;
}

static SortGroupClause *
_copySortGroupClause(const SortGroupClause *from)
{
	SortGroupClause *newnode = makeNode(SortGroupClause);

	COPY_SCALAR_FIELD(tleSortGroupRef);
	COPY_SCALAR_FIELD(eqop);
	COPY_SCALAR_FIELD(sortop);
	COPY_SCALAR_FIELD(nulls_first);
	COPY_SCALAR_FIELD(hashable);

	return newnode;
}

static GroupingSet *
_copyGroupingSet(const GroupingSet *from)
{
	GroupingSet *newnode = makeNode(GroupingSet);

	COPY_SCALAR_FIELD(kind);
	COPY_NODE_FIELD(content);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static WindowClause *
_copyWindowClause(const WindowClause *from)
{
	WindowClause *newnode = makeNode(WindowClause);

	COPY_STRING_FIELD(name);
	COPY_STRING_FIELD(refname);
	COPY_NODE_FIELD(partitionClause);
	COPY_NODE_FIELD(orderClause);
	COPY_SCALAR_FIELD(frameOptions);
	COPY_NODE_FIELD(startOffset);
	COPY_NODE_FIELD(endOffset);
	COPY_NODE_FIELD(runCondition);
	COPY_SCALAR_FIELD(startInRangeFunc);
	COPY_SCALAR_FIELD(endInRangeFunc);
	COPY_SCALAR_FIELD(inRangeColl);
	COPY_SCALAR_FIELD(inRangeAsc);
	COPY_SCALAR_FIELD(inRangeNullsFirst);
	COPY_SCALAR_FIELD(winref);
	COPY_SCALAR_FIELD(copiedOrder);

	return newnode;
}

static RowMarkClause *
_copyRowMarkClause(const RowMarkClause *from)
{
	RowMarkClause *newnode = makeNode(RowMarkClause);

	COPY_SCALAR_FIELD(rti);
	COPY_SCALAR_FIELD(strength);
	COPY_SCALAR_FIELD(waitPolicy);
	COPY_SCALAR_FIELD(pushedDown);

	return newnode;
}

static WithClause *
_copyWithClause(const WithClause *from)
{
	WithClause *newnode = makeNode(WithClause);

	COPY_NODE_FIELD(ctes);
	COPY_SCALAR_FIELD(recursive);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static InferClause *
_copyInferClause(const InferClause *from)
{
	InferClause *newnode = makeNode(InferClause);

	COPY_NODE_FIELD(indexElems);
	COPY_NODE_FIELD(whereClause);
	COPY_STRING_FIELD(conname);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static OnConflictClause *
_copyOnConflictClause(const OnConflictClause *from)
{
	OnConflictClause *newnode = makeNode(OnConflictClause);

	COPY_SCALAR_FIELD(action);
	COPY_NODE_FIELD(infer);
	COPY_NODE_FIELD(targetList);
	COPY_NODE_FIELD(whereClause);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static CTESearchClause *
_copyCTESearchClause(const CTESearchClause *from)
{
	CTESearchClause *newnode = makeNode(CTESearchClause);

	COPY_NODE_FIELD(search_col_list);
	COPY_SCALAR_FIELD(search_breadth_first);
	COPY_STRING_FIELD(search_seq_column);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static CTECycleClause *
_copyCTECycleClause(const CTECycleClause *from)
{
	CTECycleClause *newnode = makeNode(CTECycleClause);

	COPY_NODE_FIELD(cycle_col_list);
	COPY_STRING_FIELD(cycle_mark_column);
	COPY_NODE_FIELD(cycle_mark_value);
	COPY_NODE_FIELD(cycle_mark_default);
	COPY_STRING_FIELD(cycle_path_column);
	COPY_LOCATION_FIELD(location);
	COPY_SCALAR_FIELD(cycle_mark_type);
	COPY_SCALAR_FIELD(cycle_mark_typmod);
	COPY_SCALAR_FIELD(cycle_mark_collation);
	COPY_SCALAR_FIELD(cycle_mark_neop);

	return newnode;
}

static CommonTableExpr *
_copyCommonTableExpr(const CommonTableExpr *from)
{
	CommonTableExpr *newnode = makeNode(CommonTableExpr);

	COPY_STRING_FIELD(ctename);
	COPY_NODE_FIELD(aliascolnames);
	COPY_SCALAR_FIELD(ctematerialized);
	COPY_NODE_FIELD(ctequery);
	COPY_NODE_FIELD(search_clause);
	COPY_NODE_FIELD(cycle_clause);
	COPY_LOCATION_FIELD(location);
	COPY_SCALAR_FIELD(cterecursive);
	COPY_SCALAR_FIELD(cterefcount);
	COPY_NODE_FIELD(ctecolnames);
	COPY_NODE_FIELD(ctecoltypes);
	COPY_NODE_FIELD(ctecoltypmods);
	COPY_NODE_FIELD(ctecolcollations);

	return newnode;
}

static MergeWhenClause *
_copyMergeWhenClause(const MergeWhenClause *from)
{
	MergeWhenClause *newnode = makeNode(MergeWhenClause);

	COPY_SCALAR_FIELD(matched);
	COPY_SCALAR_FIELD(commandType);
	COPY_SCALAR_FIELD(override);
	COPY_NODE_FIELD(condition);
	COPY_NODE_FIELD(targetList);
	COPY_NODE_FIELD(values);

	return newnode;
}

static MergeAction *
_copyMergeAction(const MergeAction *from)
{
	MergeAction *newnode = makeNode(MergeAction);

	COPY_SCALAR_FIELD(matched);
	COPY_SCALAR_FIELD(commandType);
	COPY_SCALAR_FIELD(override);
	COPY_NODE_FIELD(qual);
	COPY_NODE_FIELD(targetList);
	COPY_NODE_FIELD(updateColnos);

	return newnode;
}

static TriggerTransition *
_copyTriggerTransition(const TriggerTransition *from)
{
	TriggerTransition *newnode = makeNode(TriggerTransition);

	COPY_STRING_FIELD(name);
	COPY_SCALAR_FIELD(isNew);
	COPY_SCALAR_FIELD(isTable);

	return newnode;
}

static JsonOutput *
_copyJsonOutput(const JsonOutput *from)
{
	JsonOutput *newnode = makeNode(JsonOutput);

	COPY_NODE_FIELD(typeName);
	COPY_NODE_FIELD(returning);

	return newnode;
}

static JsonKeyValue *
_copyJsonKeyValue(const JsonKeyValue *from)
{
	JsonKeyValue *newnode = makeNode(JsonKeyValue);

	COPY_NODE_FIELD(key);
	COPY_NODE_FIELD(value);

	return newnode;
}

static JsonObjectConstructor *
_copyJsonObjectConstructor(const JsonObjectConstructor *from)
{
	JsonObjectConstructor *newnode = makeNode(JsonObjectConstructor);

	COPY_NODE_FIELD(exprs);
	COPY_NODE_FIELD(output);
	COPY_SCALAR_FIELD(absent_on_null);
	COPY_SCALAR_FIELD(unique);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static JsonArrayConstructor *
_copyJsonArrayConstructor(const JsonArrayConstructor *from)
{
	JsonArrayConstructor *newnode = makeNode(JsonArrayConstructor);

	COPY_NODE_FIELD(exprs);
	COPY_NODE_FIELD(output);
	COPY_SCALAR_FIELD(absent_on_null);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static JsonArrayQueryConstructor *
_copyJsonArrayQueryConstructor(const JsonArrayQueryConstructor *from)
{
	JsonArrayQueryConstructor *newnode = makeNode(JsonArrayQueryConstructor);

	COPY_NODE_FIELD(query);
	COPY_NODE_FIELD(output);
	COPY_NODE_FIELD(format);
	COPY_SCALAR_FIELD(absent_on_null);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static JsonAggConstructor *
_copyJsonAggConstructor(const JsonAggConstructor *from)
{
	JsonAggConstructor *newnode = makeNode(JsonAggConstructor);

	COPY_NODE_FIELD(output);
	COPY_NODE_FIELD(agg_filter);
	COPY_NODE_FIELD(agg_order);
	COPY_NODE_FIELD(over);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static JsonObjectAgg *
_copyJsonObjectAgg(const JsonObjectAgg *from)
{
	JsonObjectAgg *newnode = makeNode(JsonObjectAgg);

	COPY_NODE_FIELD(constructor);
	COPY_NODE_FIELD(arg);
	COPY_SCALAR_FIELD(absent_on_null);
	COPY_SCALAR_FIELD(unique);

	return newnode;
}

static JsonArrayAgg *
_copyJsonArrayAgg(const JsonArrayAgg *from)
{
	JsonArrayAgg *newnode = makeNode(JsonArrayAgg);

	COPY_NODE_FIELD(constructor);
	COPY_NODE_FIELD(arg);
	COPY_SCALAR_FIELD(absent_on_null);

	return newnode;
}

static RawStmt *
_copyRawStmt(const RawStmt *from)
{
	RawStmt *newnode = makeNode(RawStmt);

	COPY_NODE_FIELD(stmt);
	COPY_LOCATION_FIELD(stmt_location);
	COPY_SCALAR_FIELD(stmt_len);

	return newnode;
}

static InsertStmt *
_copyInsertStmt(const InsertStmt *from)
{
	InsertStmt *newnode = makeNode(InsertStmt);

	COPY_NODE_FIELD(relation);
	COPY_NODE_FIELD(cols);
	COPY_NODE_FIELD(selectStmt);
	COPY_NODE_FIELD(onConflictClause);
	COPY_NODE_FIELD(returningList);
	COPY_NODE_FIELD(withClause);
	COPY_SCALAR_FIELD(override);

	return newnode;
}

static DeleteStmt *
_copyDeleteStmt(const DeleteStmt *from)
{
	DeleteStmt *newnode = makeNode(DeleteStmt);

	COPY_NODE_FIELD(relation);
	COPY_NODE_FIELD(usingClause);
	COPY_NODE_FIELD(whereClause);
	COPY_NODE_FIELD(returningList);
	COPY_NODE_FIELD(withClause);

	return newnode;
}

static UpdateStmt *
_copyUpdateStmt(const UpdateStmt *from)
{
	UpdateStmt *newnode = makeNode(UpdateStmt);

	COPY_NODE_FIELD(relation);
	COPY_NODE_FIELD(targetList);
	COPY_NODE_FIELD(whereClause);
	COPY_NODE_FIELD(fromClause);
	COPY_NODE_FIELD(returningList);
	COPY_NODE_FIELD(withClause);

	return newnode;
}

static MergeStmt *
_copyMergeStmt(const MergeStmt *from)
{
	MergeStmt *newnode = makeNode(MergeStmt);

	COPY_NODE_FIELD(relation);
	COPY_NODE_FIELD(sourceRelation);
	COPY_NODE_FIELD(joinCondition);
	COPY_NODE_FIELD(mergeWhenClauses);
	COPY_NODE_FIELD(withClause);

	return newnode;
}

static SelectStmt *
_copySelectStmt(const SelectStmt *from)
{
	SelectStmt *newnode = makeNode(SelectStmt);

	COPY_NODE_FIELD(distinctClause);
	COPY_NODE_FIELD(intoClause);
	COPY_NODE_FIELD(targetList);
	COPY_NODE_FIELD(fromClause);
	COPY_NODE_FIELD(whereClause);
	COPY_NODE_FIELD(groupClause);
	COPY_SCALAR_FIELD(groupDistinct);
	COPY_NODE_FIELD(havingClause);
	COPY_NODE_FIELD(windowClause);
	COPY_NODE_FIELD(valuesLists);
	COPY_NODE_FIELD(sortClause);
	COPY_NODE_FIELD(limitOffset);
	COPY_NODE_FIELD(limitCount);
	COPY_SCALAR_FIELD(limitOption);
	COPY_NODE_FIELD(lockingClause);
	COPY_NODE_FIELD(withClause);
	COPY_SCALAR_FIELD(op);
	COPY_SCALAR_FIELD(all);
	COPY_NODE_FIELD(larg);
	COPY_NODE_FIELD(rarg);

	return newnode;
}

static SetOperationStmt *
_copySetOperationStmt(const SetOperationStmt *from)
{
	SetOperationStmt *newnode = makeNode(SetOperationStmt);

	COPY_SCALAR_FIELD(op);
	COPY_SCALAR_FIELD(all);
	COPY_NODE_FIELD(larg);
	COPY_NODE_FIELD(rarg);
	COPY_NODE_FIELD(colTypes);
	COPY_NODE_FIELD(colTypmods);
	COPY_NODE_FIELD(colCollations);
	COPY_NODE_FIELD(groupClauses);

	return newnode;
}

static ReturnStmt *
_copyReturnStmt(const ReturnStmt *from)
{
	ReturnStmt *newnode = makeNode(ReturnStmt);

	COPY_NODE_FIELD(returnval);

	return newnode;
}

static PLAssignStmt *
_copyPLAssignStmt(const PLAssignStmt *from)
{
	PLAssignStmt *newnode = makeNode(PLAssignStmt);

	COPY_STRING_FIELD(name);
	COPY_NODE_FIELD(indirection);
	COPY_SCALAR_FIELD(nnames);
	COPY_NODE_FIELD(val);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static CreateSchemaStmt *
_copyCreateSchemaStmt(const CreateSchemaStmt *from)
{
	CreateSchemaStmt *newnode = makeNode(CreateSchemaStmt);

	COPY_STRING_FIELD(schemaname);
	COPY_NODE_FIELD(authrole);
	COPY_NODE_FIELD(schemaElts);
	COPY_SCALAR_FIELD(if_not_exists);

	return newnode;
}

static AlterTableStmt *
_copyAlterTableStmt(const AlterTableStmt *from)
{
	AlterTableStmt *newnode = makeNode(AlterTableStmt);

	COPY_NODE_FIELD(relation);
	COPY_NODE_FIELD(cmds);
	COPY_SCALAR_FIELD(objtype);
	COPY_SCALAR_FIELD(missing_ok);

	return newnode;
}

static ReplicaIdentityStmt *
_copyReplicaIdentityStmt(const ReplicaIdentityStmt *from)
{
	ReplicaIdentityStmt *newnode = makeNode(ReplicaIdentityStmt);

	COPY_SCALAR_FIELD(identity_type);
	COPY_STRING_FIELD(name);

	return newnode;
}

static AlterTableCmd *
_copyAlterTableCmd(const AlterTableCmd *from)
{
	AlterTableCmd *newnode = makeNode(AlterTableCmd);

	COPY_SCALAR_FIELD(subtype);
	COPY_STRING_FIELD(name);
	COPY_SCALAR_FIELD(num);
	COPY_NODE_FIELD(newowner);
	COPY_NODE_FIELD(def);
	COPY_SCALAR_FIELD(behavior);
	COPY_SCALAR_FIELD(missing_ok);
	COPY_SCALAR_FIELD(recurse);

	return newnode;
}

static AlterCollationStmt *
_copyAlterCollationStmt(const AlterCollationStmt *from)
{
	AlterCollationStmt *newnode = makeNode(AlterCollationStmt);

	COPY_NODE_FIELD(collname);

	return newnode;
}

static AlterDomainStmt *
_copyAlterDomainStmt(const AlterDomainStmt *from)
{
	AlterDomainStmt *newnode = makeNode(AlterDomainStmt);

	COPY_SCALAR_FIELD(subtype);
	COPY_NODE_FIELD(typeName);
	COPY_STRING_FIELD(name);
	COPY_NODE_FIELD(def);
	COPY_SCALAR_FIELD(behavior);
	COPY_SCALAR_FIELD(missing_ok);

	return newnode;
}

static GrantStmt *
_copyGrantStmt(const GrantStmt *from)
{
	GrantStmt *newnode = makeNode(GrantStmt);

	COPY_SCALAR_FIELD(is_grant);
	COPY_SCALAR_FIELD(targtype);
	COPY_SCALAR_FIELD(objtype);
	COPY_NODE_FIELD(objects);
	COPY_NODE_FIELD(privileges);
	COPY_NODE_FIELD(grantees);
	COPY_SCALAR_FIELD(grant_option);
	COPY_NODE_FIELD(grantor);
	COPY_SCALAR_FIELD(behavior);

	return newnode;
}

static ObjectWithArgs *
_copyObjectWithArgs(const ObjectWithArgs *from)
{
	ObjectWithArgs *newnode = makeNode(ObjectWithArgs);

	COPY_NODE_FIELD(objname);
	COPY_NODE_FIELD(objargs);
	COPY_NODE_FIELD(objfuncargs);
	COPY_SCALAR_FIELD(args_unspecified);

	return newnode;
}

static AccessPriv *
_copyAccessPriv(const AccessPriv *from)
{
	AccessPriv *newnode = makeNode(AccessPriv);

	COPY_STRING_FIELD(priv_name);
	COPY_NODE_FIELD(cols);

	return newnode;
}

static GrantRoleStmt *
_copyGrantRoleStmt(const GrantRoleStmt *from)
{
	GrantRoleStmt *newnode = makeNode(GrantRoleStmt);

	COPY_NODE_FIELD(granted_roles);
	COPY_NODE_FIELD(grantee_roles);
	COPY_SCALAR_FIELD(is_grant);
	COPY_NODE_FIELD(opt);
	COPY_NODE_FIELD(grantor);
	COPY_SCALAR_FIELD(behavior);

	return newnode;
}

static AlterDefaultPrivilegesStmt *
_copyAlterDefaultPrivilegesStmt(const AlterDefaultPrivilegesStmt *from)
{
	AlterDefaultPrivilegesStmt *newnode = makeNode(AlterDefaultPrivilegesStmt);

	COPY_NODE_FIELD(options);
	COPY_NODE_FIELD(action);

	return newnode;
}

static CopyStmt *
_copyCopyStmt(const CopyStmt *from)
{
	CopyStmt *newnode = makeNode(CopyStmt);

	COPY_NODE_FIELD(relation);
	COPY_NODE_FIELD(query);
	COPY_NODE_FIELD(attlist);
	COPY_SCALAR_FIELD(is_from);
	COPY_SCALAR_FIELD(is_program);
	COPY_STRING_FIELD(filename);
	COPY_NODE_FIELD(options);
	COPY_NODE_FIELD(whereClause);

	return newnode;
}

static VariableSetStmt *
_copyVariableSetStmt(const VariableSetStmt *from)
{
	VariableSetStmt *newnode = makeNode(VariableSetStmt);

	COPY_SCALAR_FIELD(kind);
	COPY_STRING_FIELD(name);
	COPY_NODE_FIELD(args);
	COPY_SCALAR_FIELD(is_local);

	return newnode;
}

static VariableShowStmt *
_copyVariableShowStmt(const VariableShowStmt *from)
{
	VariableShowStmt *newnode = makeNode(VariableShowStmt);

	COPY_STRING_FIELD(name);

	return newnode;
}

static CreateStmt *
_copyCreateStmt(const CreateStmt *from)
{
	CreateStmt *newnode = makeNode(CreateStmt);

	COPY_NODE_FIELD(relation);
	COPY_NODE_FIELD(tableElts);
	COPY_NODE_FIELD(inhRelations);
	COPY_NODE_FIELD(partbound);
	COPY_NODE_FIELD(partspec);
	COPY_NODE_FIELD(ofTypename);
	COPY_NODE_FIELD(constraints);
	COPY_NODE_FIELD(options);
	COPY_SCALAR_FIELD(oncommit);
	COPY_STRING_FIELD(tablespacename);
	COPY_STRING_FIELD(accessMethod);
	COPY_SCALAR_FIELD(if_not_exists);

	return newnode;
}

static Constraint *
_copyConstraint(const Constraint *from)
{
	Constraint *newnode = makeNode(Constraint);

	COPY_SCALAR_FIELD(contype);
	COPY_STRING_FIELD(conname);
	COPY_SCALAR_FIELD(deferrable);
	COPY_SCALAR_FIELD(initdeferred);
	COPY_LOCATION_FIELD(location);
	COPY_SCALAR_FIELD(is_no_inherit);
	COPY_NODE_FIELD(raw_expr);
	COPY_STRING_FIELD(cooked_expr);
	COPY_SCALAR_FIELD(generated_when);
	COPY_SCALAR_FIELD(nulls_not_distinct);
	COPY_NODE_FIELD(keys);
	COPY_NODE_FIELD(including);
	COPY_NODE_FIELD(exclusions);
	COPY_NODE_FIELD(options);
	COPY_STRING_FIELD(indexname);
	COPY_STRING_FIELD(indexspace);
	COPY_SCALAR_FIELD(reset_default_tblspc);
	COPY_STRING_FIELD(access_method);
	COPY_NODE_FIELD(where_clause);
	COPY_NODE_FIELD(pktable);
	COPY_NODE_FIELD(fk_attrs);
	COPY_NODE_FIELD(pk_attrs);
	COPY_SCALAR_FIELD(fk_matchtype);
	COPY_SCALAR_FIELD(fk_upd_action);
	COPY_SCALAR_FIELD(fk_del_action);
	COPY_NODE_FIELD(fk_del_set_cols);
	COPY_NODE_FIELD(old_conpfeqop);
	COPY_SCALAR_FIELD(old_pktable_oid);
	COPY_SCALAR_FIELD(skip_validation);
	COPY_SCALAR_FIELD(initially_valid);

	return newnode;
}

static CreateTableSpaceStmt *
_copyCreateTableSpaceStmt(const CreateTableSpaceStmt *from)
{
	CreateTableSpaceStmt *newnode = makeNode(CreateTableSpaceStmt);

	COPY_STRING_FIELD(tablespacename);
	COPY_NODE_FIELD(owner);
	COPY_STRING_FIELD(location);
	COPY_NODE_FIELD(options);

	return newnode;
}

static DropTableSpaceStmt *
_copyDropTableSpaceStmt(const DropTableSpaceStmt *from)
{
	DropTableSpaceStmt *newnode = makeNode(DropTableSpaceStmt);

	COPY_STRING_FIELD(tablespacename);
	COPY_SCALAR_FIELD(missing_ok);

	return newnode;
}

static AlterTableSpaceOptionsStmt *
_copyAlterTableSpaceOptionsStmt(const AlterTableSpaceOptionsStmt *from)
{
	AlterTableSpaceOptionsStmt *newnode = makeNode(AlterTableSpaceOptionsStmt);

	COPY_STRING_FIELD(tablespacename);
	COPY_NODE_FIELD(options);
	COPY_SCALAR_FIELD(isReset);

	return newnode;
}

static AlterTableMoveAllStmt *
_copyAlterTableMoveAllStmt(const AlterTableMoveAllStmt *from)
{
	AlterTableMoveAllStmt *newnode = makeNode(AlterTableMoveAllStmt);

	COPY_STRING_FIELD(orig_tablespacename);
	COPY_SCALAR_FIELD(objtype);
	COPY_NODE_FIELD(roles);
	COPY_STRING_FIELD(new_tablespacename);
	COPY_SCALAR_FIELD(nowait);

	return newnode;
}

static CreateExtensionStmt *
_copyCreateExtensionStmt(const CreateExtensionStmt *from)
{
	CreateExtensionStmt *newnode = makeNode(CreateExtensionStmt);

	COPY_STRING_FIELD(extname);
	COPY_SCALAR_FIELD(if_not_exists);
	COPY_NODE_FIELD(options);

	return newnode;
}

static AlterExtensionStmt *
_copyAlterExtensionStmt(const AlterExtensionStmt *from)
{
	AlterExtensionStmt *newnode = makeNode(AlterExtensionStmt);

	COPY_STRING_FIELD(extname);
	COPY_NODE_FIELD(options);

	return newnode;
}

static AlterExtensionContentsStmt *
_copyAlterExtensionContentsStmt(const AlterExtensionContentsStmt *from)
{
	AlterExtensionContentsStmt *newnode = makeNode(AlterExtensionContentsStmt);

	COPY_STRING_FIELD(extname);
	COPY_SCALAR_FIELD(action);
	COPY_SCALAR_FIELD(objtype);
	COPY_NODE_FIELD(object);

	return newnode;
}

static CreateFdwStmt *
_copyCreateFdwStmt(const CreateFdwStmt *from)
{
	CreateFdwStmt *newnode = makeNode(CreateFdwStmt);

	COPY_STRING_FIELD(fdwname);
	COPY_NODE_FIELD(func_options);
	COPY_NODE_FIELD(options);

	return newnode;
}

static AlterFdwStmt *
_copyAlterFdwStmt(const AlterFdwStmt *from)
{
	AlterFdwStmt *newnode = makeNode(AlterFdwStmt);

	COPY_STRING_FIELD(fdwname);
	COPY_NODE_FIELD(func_options);
	COPY_NODE_FIELD(options);

	return newnode;
}

static CreateForeignServerStmt *
_copyCreateForeignServerStmt(const CreateForeignServerStmt *from)
{
	CreateForeignServerStmt *newnode = makeNode(CreateForeignServerStmt);

	COPY_STRING_FIELD(servername);
	COPY_STRING_FIELD(servertype);
	COPY_STRING_FIELD(version);
	COPY_STRING_FIELD(fdwname);
	COPY_SCALAR_FIELD(if_not_exists);
	COPY_NODE_FIELD(options);

	return newnode;
}

static AlterForeignServerStmt *
_copyAlterForeignServerStmt(const AlterForeignServerStmt *from)
{
	AlterForeignServerStmt *newnode = makeNode(AlterForeignServerStmt);

	COPY_STRING_FIELD(servername);
	COPY_STRING_FIELD(version);
	COPY_NODE_FIELD(options);
	COPY_SCALAR_FIELD(has_version);

	return newnode;
}

static CreateForeignTableStmt *
_copyCreateForeignTableStmt(const CreateForeignTableStmt *from)
{
	CreateForeignTableStmt *newnode = makeNode(CreateForeignTableStmt);

	COPY_NODE_FIELD(base.relation);
	COPY_NODE_FIELD(base.tableElts);
	COPY_NODE_FIELD(base.inhRelations);
	COPY_NODE_FIELD(base.partbound);
	COPY_NODE_FIELD(base.partspec);
	COPY_NODE_FIELD(base.ofTypename);
	COPY_NODE_FIELD(base.constraints);
	COPY_NODE_FIELD(base.options);
	COPY_SCALAR_FIELD(base.oncommit);
	COPY_STRING_FIELD(base.tablespacename);
	COPY_STRING_FIELD(base.accessMethod);
	COPY_SCALAR_FIELD(base.if_not_exists);
	COPY_STRING_FIELD(servername);
	COPY_NODE_FIELD(options);

	return newnode;
}

static CreateUserMappingStmt *
_copyCreateUserMappingStmt(const CreateUserMappingStmt *from)
{
	CreateUserMappingStmt *newnode = makeNode(CreateUserMappingStmt);

	COPY_NODE_FIELD(user);
	COPY_STRING_FIELD(servername);
	COPY_SCALAR_FIELD(if_not_exists);
	COPY_NODE_FIELD(options);

	return newnode;
}

static AlterUserMappingStmt *
_copyAlterUserMappingStmt(const AlterUserMappingStmt *from)
{
	AlterUserMappingStmt *newnode = makeNode(AlterUserMappingStmt);

	COPY_NODE_FIELD(user);
	COPY_STRING_FIELD(servername);
	COPY_NODE_FIELD(options);

	return newnode;
}

static DropUserMappingStmt *
_copyDropUserMappingStmt(const DropUserMappingStmt *from)
{
	DropUserMappingStmt *newnode = makeNode(DropUserMappingStmt);

	COPY_NODE_FIELD(user);
	COPY_STRING_FIELD(servername);
	COPY_SCALAR_FIELD(missing_ok);

	return newnode;
}

static ImportForeignSchemaStmt *
_copyImportForeignSchemaStmt(const ImportForeignSchemaStmt *from)
{
	ImportForeignSchemaStmt *newnode = makeNode(ImportForeignSchemaStmt);

	COPY_STRING_FIELD(server_name);
	COPY_STRING_FIELD(remote_schema);
	COPY_STRING_FIELD(local_schema);
	COPY_SCALAR_FIELD(list_type);
	COPY_NODE_FIELD(table_list);
	COPY_NODE_FIELD(options);

	return newnode;
}

static CreatePolicyStmt *
_copyCreatePolicyStmt(const CreatePolicyStmt *from)
{
	CreatePolicyStmt *newnode = makeNode(CreatePolicyStmt);

	COPY_STRING_FIELD(policy_name);
	COPY_NODE_FIELD(table);
	COPY_STRING_FIELD(cmd_name);
	COPY_SCALAR_FIELD(permissive);
	COPY_NODE_FIELD(roles);
	COPY_NODE_FIELD(qual);
	COPY_NODE_FIELD(with_check);

	return newnode;
}

static AlterPolicyStmt *
_copyAlterPolicyStmt(const AlterPolicyStmt *from)
{
	AlterPolicyStmt *newnode = makeNode(AlterPolicyStmt);

	COPY_STRING_FIELD(policy_name);
	COPY_NODE_FIELD(table);
	COPY_NODE_FIELD(roles);
	COPY_NODE_FIELD(qual);
	COPY_NODE_FIELD(with_check);

	return newnode;
}

static CreateAmStmt *
_copyCreateAmStmt(const CreateAmStmt *from)
{
	CreateAmStmt *newnode = makeNode(CreateAmStmt);

	COPY_STRING_FIELD(amname);
	COPY_NODE_FIELD(handler_name);
	COPY_SCALAR_FIELD(amtype);

	return newnode;
}

static CreateTrigStmt *
_copyCreateTrigStmt(const CreateTrigStmt *from)
{
	CreateTrigStmt *newnode = makeNode(CreateTrigStmt);

	COPY_SCALAR_FIELD(replace);
	COPY_SCALAR_FIELD(isconstraint);
	COPY_STRING_FIELD(trigname);
	COPY_NODE_FIELD(relation);
	COPY_NODE_FIELD(funcname);
	COPY_NODE_FIELD(args);
	COPY_SCALAR_FIELD(row);
	COPY_SCALAR_FIELD(timing);
	COPY_SCALAR_FIELD(events);
	COPY_NODE_FIELD(columns);
	COPY_NODE_FIELD(whenClause);
	COPY_NODE_FIELD(transitionRels);
	COPY_SCALAR_FIELD(deferrable);
	COPY_SCALAR_FIELD(initdeferred);
	COPY_NODE_FIELD(constrrel);

	return newnode;
}

static CreateEventTrigStmt *
_copyCreateEventTrigStmt(const CreateEventTrigStmt *from)
{
	CreateEventTrigStmt *newnode = makeNode(CreateEventTrigStmt);

	COPY_STRING_FIELD(trigname);
	COPY_STRING_FIELD(eventname);
	COPY_NODE_FIELD(whenclause);
	COPY_NODE_FIELD(funcname);

	return newnode;
}

static AlterEventTrigStmt *
_copyAlterEventTrigStmt(const AlterEventTrigStmt *from)
{
	AlterEventTrigStmt *newnode = makeNode(AlterEventTrigStmt);

	COPY_STRING_FIELD(trigname);
	COPY_SCALAR_FIELD(tgenabled);

	return newnode;
}

static CreatePLangStmt *
_copyCreatePLangStmt(const CreatePLangStmt *from)
{
	CreatePLangStmt *newnode = makeNode(CreatePLangStmt);

	COPY_SCALAR_FIELD(replace);
	COPY_STRING_FIELD(plname);
	COPY_NODE_FIELD(plhandler);
	COPY_NODE_FIELD(plinline);
	COPY_NODE_FIELD(plvalidator);
	COPY_SCALAR_FIELD(pltrusted);

	return newnode;
}

static CreateRoleStmt *
_copyCreateRoleStmt(const CreateRoleStmt *from)
{
	CreateRoleStmt *newnode = makeNode(CreateRoleStmt);

	COPY_SCALAR_FIELD(stmt_type);
	COPY_STRING_FIELD(role);
	COPY_NODE_FIELD(options);

	return newnode;
}

static AlterRoleStmt *
_copyAlterRoleStmt(const AlterRoleStmt *from)
{
	AlterRoleStmt *newnode = makeNode(AlterRoleStmt);

	COPY_NODE_FIELD(role);
	COPY_NODE_FIELD(options);
	COPY_SCALAR_FIELD(action);

	return newnode;
}

static AlterRoleSetStmt *
_copyAlterRoleSetStmt(const AlterRoleSetStmt *from)
{
	AlterRoleSetStmt *newnode = makeNode(AlterRoleSetStmt);

	COPY_NODE_FIELD(role);
	COPY_STRING_FIELD(database);
	COPY_NODE_FIELD(setstmt);

	return newnode;
}

static DropRoleStmt *
_copyDropRoleStmt(const DropRoleStmt *from)
{
	DropRoleStmt *newnode = makeNode(DropRoleStmt);

	COPY_NODE_FIELD(roles);
	COPY_SCALAR_FIELD(missing_ok);

	return newnode;
}

static CreateSeqStmt *
_copyCreateSeqStmt(const CreateSeqStmt *from)
{
	CreateSeqStmt *newnode = makeNode(CreateSeqStmt);

	COPY_NODE_FIELD(sequence);
	COPY_NODE_FIELD(options);
	COPY_SCALAR_FIELD(ownerId);
	COPY_SCALAR_FIELD(for_identity);
	COPY_SCALAR_FIELD(if_not_exists);

	return newnode;
}

static AlterSeqStmt *
_copyAlterSeqStmt(const AlterSeqStmt *from)
{
	AlterSeqStmt *newnode = makeNode(AlterSeqStmt);

	COPY_NODE_FIELD(sequence);
	COPY_NODE_FIELD(options);
	COPY_SCALAR_FIELD(for_identity);
	COPY_SCALAR_FIELD(missing_ok);

	return newnode;
}

static DefineStmt *
_copyDefineStmt(const DefineStmt *from)
{
	DefineStmt *newnode = makeNode(DefineStmt);

	COPY_SCALAR_FIELD(kind);
	COPY_SCALAR_FIELD(oldstyle);
	COPY_NODE_FIELD(defnames);
	COPY_NODE_FIELD(args);
	COPY_NODE_FIELD(definition);
	COPY_SCALAR_FIELD(if_not_exists);
	COPY_SCALAR_FIELD(replace);

	return newnode;
}

static CreateDomainStmt *
_copyCreateDomainStmt(const CreateDomainStmt *from)
{
	CreateDomainStmt *newnode = makeNode(CreateDomainStmt);

	COPY_NODE_FIELD(domainname);
	COPY_NODE_FIELD(typeName);
	COPY_NODE_FIELD(collClause);
	COPY_NODE_FIELD(constraints);

	return newnode;
}

static CreateOpClassStmt *
_copyCreateOpClassStmt(const CreateOpClassStmt *from)
{
	CreateOpClassStmt *newnode = makeNode(CreateOpClassStmt);

	COPY_NODE_FIELD(opclassname);
	COPY_NODE_FIELD(opfamilyname);
	COPY_STRING_FIELD(amname);
	COPY_NODE_FIELD(datatype);
	COPY_NODE_FIELD(items);
	COPY_SCALAR_FIELD(isDefault);

	return newnode;
}

static CreateOpClassItem *
_copyCreateOpClassItem(const CreateOpClassItem *from)
{
	CreateOpClassItem *newnode = makeNode(CreateOpClassItem);

	COPY_SCALAR_FIELD(itemtype);
	COPY_NODE_FIELD(name);
	COPY_SCALAR_FIELD(number);
	COPY_NODE_FIELD(order_family);
	COPY_NODE_FIELD(class_args);
	COPY_NODE_FIELD(storedtype);

	return newnode;
}

static CreateOpFamilyStmt *
_copyCreateOpFamilyStmt(const CreateOpFamilyStmt *from)
{
	CreateOpFamilyStmt *newnode = makeNode(CreateOpFamilyStmt);

	COPY_NODE_FIELD(opfamilyname);
	COPY_STRING_FIELD(amname);

	return newnode;
}

static AlterOpFamilyStmt *
_copyAlterOpFamilyStmt(const AlterOpFamilyStmt *from)
{
	AlterOpFamilyStmt *newnode = makeNode(AlterOpFamilyStmt);

	COPY_NODE_FIELD(opfamilyname);
	COPY_STRING_FIELD(amname);
	COPY_SCALAR_FIELD(isDrop);
	COPY_NODE_FIELD(items);

	return newnode;
}

static DropStmt *
_copyDropStmt(const DropStmt *from)
{
	DropStmt *newnode = makeNode(DropStmt);

	COPY_NODE_FIELD(objects);
	COPY_SCALAR_FIELD(removeType);
	COPY_SCALAR_FIELD(behavior);
	COPY_SCALAR_FIELD(missing_ok);
	COPY_SCALAR_FIELD(concurrent);

	return newnode;
}

static TruncateStmt *
_copyTruncateStmt(const TruncateStmt *from)
{
	TruncateStmt *newnode = makeNode(TruncateStmt);

	COPY_NODE_FIELD(relations);
	COPY_SCALAR_FIELD(restart_seqs);
	COPY_SCALAR_FIELD(behavior);

	return newnode;
}

static CommentStmt *
_copyCommentStmt(const CommentStmt *from)
{
	CommentStmt *newnode = makeNode(CommentStmt);

	COPY_SCALAR_FIELD(objtype);
	COPY_NODE_FIELD(object);
	COPY_STRING_FIELD(comment);

	return newnode;
}

static SecLabelStmt *
_copySecLabelStmt(const SecLabelStmt *from)
{
	SecLabelStmt *newnode = makeNode(SecLabelStmt);

	COPY_SCALAR_FIELD(objtype);
	COPY_NODE_FIELD(object);
	COPY_STRING_FIELD(provider);
	COPY_STRING_FIELD(label);

	return newnode;
}

static DeclareCursorStmt *
_copyDeclareCursorStmt(const DeclareCursorStmt *from)
{
	DeclareCursorStmt *newnode = makeNode(DeclareCursorStmt);

	COPY_STRING_FIELD(portalname);
	COPY_SCALAR_FIELD(options);
	COPY_NODE_FIELD(query);

	return newnode;
}

static ClosePortalStmt *
_copyClosePortalStmt(const ClosePortalStmt *from)
{
	ClosePortalStmt *newnode = makeNode(ClosePortalStmt);

	COPY_STRING_FIELD(portalname);

	return newnode;
}

static FetchStmt *
_copyFetchStmt(const FetchStmt *from)
{
	FetchStmt *newnode = makeNode(FetchStmt);

	COPY_SCALAR_FIELD(direction);
	COPY_SCALAR_FIELD(howMany);
	COPY_STRING_FIELD(portalname);
	COPY_SCALAR_FIELD(ismove);

	return newnode;
}

static IndexStmt *
_copyIndexStmt(const IndexStmt *from)
{
	IndexStmt *newnode = makeNode(IndexStmt);

	COPY_STRING_FIELD(idxname);
	COPY_NODE_FIELD(relation);
	COPY_STRING_FIELD(accessMethod);
	COPY_STRING_FIELD(tableSpace);
	COPY_NODE_FIELD(indexParams);
	COPY_NODE_FIELD(indexIncludingParams);
	COPY_NODE_FIELD(options);
	COPY_NODE_FIELD(whereClause);
	COPY_NODE_FIELD(excludeOpNames);
	COPY_STRING_FIELD(idxcomment);
	COPY_SCALAR_FIELD(indexOid);
	COPY_SCALAR_FIELD(oldNumber);
	COPY_SCALAR_FIELD(oldCreateSubid);
	COPY_SCALAR_FIELD(oldFirstRelfilelocatorSubid);
	COPY_SCALAR_FIELD(unique);
	COPY_SCALAR_FIELD(nulls_not_distinct);
	COPY_SCALAR_FIELD(primary);
	COPY_SCALAR_FIELD(isconstraint);
	COPY_SCALAR_FIELD(deferrable);
	COPY_SCALAR_FIELD(initdeferred);
	COPY_SCALAR_FIELD(transformed);
	COPY_SCALAR_FIELD(concurrent);
	COPY_SCALAR_FIELD(if_not_exists);
	COPY_SCALAR_FIELD(reset_default_tblspc);

	return newnode;
}

static CreateStatsStmt *
_copyCreateStatsStmt(const CreateStatsStmt *from)
{
	CreateStatsStmt *newnode = makeNode(CreateStatsStmt);

	COPY_NODE_FIELD(defnames);
	COPY_NODE_FIELD(stat_types);
	COPY_NODE_FIELD(exprs);
	COPY_NODE_FIELD(relations);
	COPY_STRING_FIELD(stxcomment);
	COPY_SCALAR_FIELD(transformed);
	COPY_SCALAR_FIELD(if_not_exists);

	return newnode;
}

static StatsElem *
_copyStatsElem(const StatsElem *from)
{
	StatsElem *newnode = makeNode(StatsElem);

	COPY_STRING_FIELD(name);
	COPY_NODE_FIELD(expr);

	return newnode;
}

static AlterStatsStmt *
_copyAlterStatsStmt(const AlterStatsStmt *from)
{
	AlterStatsStmt *newnode = makeNode(AlterStatsStmt);

	COPY_NODE_FIELD(defnames);
	COPY_SCALAR_FIELD(stxstattarget);
	COPY_SCALAR_FIELD(missing_ok);

	return newnode;
}

static CreateFunctionStmt *
_copyCreateFunctionStmt(const CreateFunctionStmt *from)
{
	CreateFunctionStmt *newnode = makeNode(CreateFunctionStmt);

	COPY_SCALAR_FIELD(is_procedure);
	COPY_SCALAR_FIELD(replace);
	COPY_NODE_FIELD(funcname);
	COPY_NODE_FIELD(parameters);
	COPY_NODE_FIELD(returnType);
	COPY_NODE_FIELD(options);
	COPY_NODE_FIELD(sql_body);

	return newnode;
}

static FunctionParameter *
_copyFunctionParameter(const FunctionParameter *from)
{
	FunctionParameter *newnode = makeNode(FunctionParameter);

	COPY_STRING_FIELD(name);
	COPY_NODE_FIELD(argType);
	COPY_SCALAR_FIELD(mode);
	COPY_NODE_FIELD(defexpr);

	return newnode;
}

static AlterFunctionStmt *
_copyAlterFunctionStmt(const AlterFunctionStmt *from)
{
	AlterFunctionStmt *newnode = makeNode(AlterFunctionStmt);

	COPY_SCALAR_FIELD(objtype);
	COPY_NODE_FIELD(func);
	COPY_NODE_FIELD(actions);

	return newnode;
}

static DoStmt *
_copyDoStmt(const DoStmt *from)
{
	DoStmt *newnode = makeNode(DoStmt);

	COPY_NODE_FIELD(args);

	return newnode;
}

static CallStmt *
_copyCallStmt(const CallStmt *from)
{
	CallStmt *newnode = makeNode(CallStmt);

	COPY_NODE_FIELD(funccall);
	COPY_NODE_FIELD(funcexpr);
	COPY_NODE_FIELD(outargs);

	return newnode;
}

static RenameStmt *
_copyRenameStmt(const RenameStmt *from)
{
	RenameStmt *newnode = makeNode(RenameStmt);

	COPY_SCALAR_FIELD(renameType);
	COPY_SCALAR_FIELD(relationType);
	COPY_NODE_FIELD(relation);
	COPY_NODE_FIELD(object);
	COPY_STRING_FIELD(subname);
	COPY_STRING_FIELD(newname);
	COPY_SCALAR_FIELD(behavior);
	COPY_SCALAR_FIELD(missing_ok);

	return newnode;
}

static AlterObjectDependsStmt *
_copyAlterObjectDependsStmt(const AlterObjectDependsStmt *from)
{
	AlterObjectDependsStmt *newnode = makeNode(AlterObjectDependsStmt);

	COPY_SCALAR_FIELD(objectType);
	COPY_NODE_FIELD(relation);
	COPY_NODE_FIELD(object);
	COPY_NODE_FIELD(extname);
	COPY_SCALAR_FIELD(remove);

	return newnode;
}

static AlterObjectSchemaStmt *
_copyAlterObjectSchemaStmt(const AlterObjectSchemaStmt *from)
{
	AlterObjectSchemaStmt *newnode = makeNode(AlterObjectSchemaStmt);

	COPY_SCALAR_FIELD(objectType);
	COPY_NODE_FIELD(relation);
	COPY_NODE_FIELD(object);
	COPY_STRING_FIELD(newschema);
	COPY_SCALAR_FIELD(missing_ok);

	return newnode;
}

static AlterOwnerStmt *
_copyAlterOwnerStmt(const AlterOwnerStmt *from)
{
	AlterOwnerStmt *newnode = makeNode(AlterOwnerStmt);

	COPY_SCALAR_FIELD(objectType);
	COPY_NODE_FIELD(relation);
	COPY_NODE_FIELD(object);
	COPY_NODE_FIELD(newowner);

	return newnode;
}

static AlterOperatorStmt *
_copyAlterOperatorStmt(const AlterOperatorStmt *from)
{
	AlterOperatorStmt *newnode = makeNode(AlterOperatorStmt);

	COPY_NODE_FIELD(opername);
	COPY_NODE_FIELD(options);

	return newnode;
}

static AlterTypeStmt *
_copyAlterTypeStmt(const AlterTypeStmt *from)
{
	AlterTypeStmt *newnode = makeNode(AlterTypeStmt);

	COPY_NODE_FIELD(typeName);
	COPY_NODE_FIELD(options);

	return newnode;
}

static RuleStmt *
_copyRuleStmt(const RuleStmt *from)
{
	RuleStmt *newnode = makeNode(RuleStmt);

	COPY_NODE_FIELD(relation);
	COPY_STRING_FIELD(rulename);
	COPY_NODE_FIELD(whereClause);
	COPY_SCALAR_FIELD(event);
	COPY_SCALAR_FIELD(instead);
	COPY_NODE_FIELD(actions);
	COPY_SCALAR_FIELD(replace);

	return newnode;
}

static NotifyStmt *
_copyNotifyStmt(const NotifyStmt *from)
{
	NotifyStmt *newnode = makeNode(NotifyStmt);

	COPY_STRING_FIELD(conditionname);
	COPY_STRING_FIELD(payload);

	return newnode;
}

static ListenStmt *
_copyListenStmt(const ListenStmt *from)
{
	ListenStmt *newnode = makeNode(ListenStmt);

	COPY_STRING_FIELD(conditionname);

	return newnode;
}

static UnlistenStmt *
_copyUnlistenStmt(const UnlistenStmt *from)
{
	UnlistenStmt *newnode = makeNode(UnlistenStmt);

	COPY_STRING_FIELD(conditionname);

	return newnode;
}

static TransactionStmt *
_copyTransactionStmt(const TransactionStmt *from)
{
	TransactionStmt *newnode = makeNode(TransactionStmt);

	COPY_SCALAR_FIELD(kind);
	COPY_NODE_FIELD(options);
	COPY_STRING_FIELD(savepoint_name);
	COPY_STRING_FIELD(gid);
	COPY_SCALAR_FIELD(chain);

	return newnode;
}

static CompositeTypeStmt *
_copyCompositeTypeStmt(const CompositeTypeStmt *from)
{
	CompositeTypeStmt *newnode = makeNode(CompositeTypeStmt);

	COPY_NODE_FIELD(typevar);
	COPY_NODE_FIELD(coldeflist);

	return newnode;
}

static CreateEnumStmt *
_copyCreateEnumStmt(const CreateEnumStmt *from)
{
	CreateEnumStmt *newnode = makeNode(CreateEnumStmt);

	COPY_NODE_FIELD(typeName);
	COPY_NODE_FIELD(vals);

	return newnode;
}

static CreateRangeStmt *
_copyCreateRangeStmt(const CreateRangeStmt *from)
{
	CreateRangeStmt *newnode = makeNode(CreateRangeStmt);

	COPY_NODE_FIELD(typeName);
	COPY_NODE_FIELD(params);

	return newnode;
}

static AlterEnumStmt *
_copyAlterEnumStmt(const AlterEnumStmt *from)
{
	AlterEnumStmt *newnode = makeNode(AlterEnumStmt);

	COPY_NODE_FIELD(typeName);
	COPY_STRING_FIELD(oldVal);
	COPY_STRING_FIELD(newVal);
	COPY_STRING_FIELD(newValNeighbor);
	COPY_SCALAR_FIELD(newValIsAfter);
	COPY_SCALAR_FIELD(skipIfNewValExists);

	return newnode;
}

static ViewStmt *
_copyViewStmt(const ViewStmt *from)
{
	ViewStmt *newnode = makeNode(ViewStmt);

	COPY_NODE_FIELD(view);
	COPY_NODE_FIELD(aliases);
	COPY_NODE_FIELD(query);
	COPY_SCALAR_FIELD(replace);
	COPY_NODE_FIELD(options);
	COPY_SCALAR_FIELD(withCheckOption);

	return newnode;
}

static LoadStmt *
_copyLoadStmt(const LoadStmt *from)
{
	LoadStmt *newnode = makeNode(LoadStmt);

	COPY_STRING_FIELD(filename);

	return newnode;
}

static CreatedbStmt *
_copyCreatedbStmt(const CreatedbStmt *from)
{
	CreatedbStmt *newnode = makeNode(CreatedbStmt);

	COPY_STRING_FIELD(dbname);
	COPY_NODE_FIELD(options);

	return newnode;
}

static AlterDatabaseStmt *
_copyAlterDatabaseStmt(const AlterDatabaseStmt *from)
{
	AlterDatabaseStmt *newnode = makeNode(AlterDatabaseStmt);

	COPY_STRING_FIELD(dbname);
	COPY_NODE_FIELD(options);

	return newnode;
}

static AlterDatabaseRefreshCollStmt *
_copyAlterDatabaseRefreshCollStmt(const AlterDatabaseRefreshCollStmt *from)
{
	AlterDatabaseRefreshCollStmt *newnode = makeNode(AlterDatabaseRefreshCollStmt);

	COPY_STRING_FIELD(dbname);

	return newnode;
}

static AlterDatabaseSetStmt *
_copyAlterDatabaseSetStmt(const AlterDatabaseSetStmt *from)
{
	AlterDatabaseSetStmt *newnode = makeNode(AlterDatabaseSetStmt);

	COPY_STRING_FIELD(dbname);
	COPY_NODE_FIELD(setstmt);

	return newnode;
}

static DropdbStmt *
_copyDropdbStmt(const DropdbStmt *from)
{
	DropdbStmt *newnode = makeNode(DropdbStmt);

	COPY_STRING_FIELD(dbname);
	COPY_SCALAR_FIELD(missing_ok);
	COPY_NODE_FIELD(options);

	return newnode;
}

static AlterSystemStmt *
_copyAlterSystemStmt(const AlterSystemStmt *from)
{
	AlterSystemStmt *newnode = makeNode(AlterSystemStmt);

	COPY_NODE_FIELD(setstmt);

	return newnode;
}

static ClusterStmt *
_copyClusterStmt(const ClusterStmt *from)
{
	ClusterStmt *newnode = makeNode(ClusterStmt);

	COPY_NODE_FIELD(relation);
	COPY_STRING_FIELD(indexname);
	COPY_NODE_FIELD(params);

	return newnode;
}

static VacuumStmt *
_copyVacuumStmt(const VacuumStmt *from)
{
	VacuumStmt *newnode = makeNode(VacuumStmt);

	COPY_NODE_FIELD(options);
	COPY_NODE_FIELD(rels);
	COPY_SCALAR_FIELD(is_vacuumcmd);

	return newnode;
}

static VacuumRelation *
_copyVacuumRelation(const VacuumRelation *from)
{
	VacuumRelation *newnode = makeNode(VacuumRelation);

	COPY_NODE_FIELD(relation);
	COPY_SCALAR_FIELD(oid);
	COPY_NODE_FIELD(va_cols);

	return newnode;
}

static ExplainStmt *
_copyExplainStmt(const ExplainStmt *from)
{
	ExplainStmt *newnode = makeNode(ExplainStmt);

	COPY_NODE_FIELD(query);
	COPY_NODE_FIELD(options);

	return newnode;
}

static CreateTableAsStmt *
_copyCreateTableAsStmt(const CreateTableAsStmt *from)
{
	CreateTableAsStmt *newnode = makeNode(CreateTableAsStmt);

	COPY_NODE_FIELD(query);
	COPY_NODE_FIELD(into);
	COPY_SCALAR_FIELD(objtype);
	COPY_SCALAR_FIELD(is_select_into);
	COPY_SCALAR_FIELD(if_not_exists);

	return newnode;
}

static RefreshMatViewStmt *
_copyRefreshMatViewStmt(const RefreshMatViewStmt *from)
{
	RefreshMatViewStmt *newnode = makeNode(RefreshMatViewStmt);

	COPY_SCALAR_FIELD(concurrent);
	COPY_SCALAR_FIELD(skipData);
	COPY_NODE_FIELD(relation);

	return newnode;
}

static CheckPointStmt *
_copyCheckPointStmt(const CheckPointStmt *from)
{
	CheckPointStmt *newnode = makeNode(CheckPointStmt);


	return newnode;
}

static DiscardStmt *
_copyDiscardStmt(const DiscardStmt *from)
{
	DiscardStmt *newnode = makeNode(DiscardStmt);

	COPY_SCALAR_FIELD(target);

	return newnode;
}

static LockStmt *
_copyLockStmt(const LockStmt *from)
{
	LockStmt *newnode = makeNode(LockStmt);

	COPY_NODE_FIELD(relations);
	COPY_SCALAR_FIELD(mode);
	COPY_SCALAR_FIELD(nowait);

	return newnode;
}

static ConstraintsSetStmt *
_copyConstraintsSetStmt(const ConstraintsSetStmt *from)
{
	ConstraintsSetStmt *newnode = makeNode(ConstraintsSetStmt);

	COPY_NODE_FIELD(constraints);
	COPY_SCALAR_FIELD(deferred);

	return newnode;
}

static ReindexStmt *
_copyReindexStmt(const ReindexStmt *from)
{
	ReindexStmt *newnode = makeNode(ReindexStmt);

	COPY_SCALAR_FIELD(kind);
	COPY_NODE_FIELD(relation);
	COPY_STRING_FIELD(name);
	COPY_NODE_FIELD(params);

	return newnode;
}

static CreateConversionStmt *
_copyCreateConversionStmt(const CreateConversionStmt *from)
{
	CreateConversionStmt *newnode = makeNode(CreateConversionStmt);

	COPY_NODE_FIELD(conversion_name);
	COPY_STRING_FIELD(for_encoding_name);
	COPY_STRING_FIELD(to_encoding_name);
	COPY_NODE_FIELD(func_name);
	COPY_SCALAR_FIELD(def);

	return newnode;
}

static CreateCastStmt *
_copyCreateCastStmt(const CreateCastStmt *from)
{
	CreateCastStmt *newnode = makeNode(CreateCastStmt);

	COPY_NODE_FIELD(sourcetype);
	COPY_NODE_FIELD(targettype);
	COPY_NODE_FIELD(func);
	COPY_SCALAR_FIELD(context);
	COPY_SCALAR_FIELD(inout);

	return newnode;
}

static CreateTransformStmt *
_copyCreateTransformStmt(const CreateTransformStmt *from)
{
	CreateTransformStmt *newnode = makeNode(CreateTransformStmt);

	COPY_SCALAR_FIELD(replace);
	COPY_NODE_FIELD(type_name);
	COPY_STRING_FIELD(lang);
	COPY_NODE_FIELD(fromsql);
	COPY_NODE_FIELD(tosql);

	return newnode;
}

static PrepareStmt *
_copyPrepareStmt(const PrepareStmt *from)
{
	PrepareStmt *newnode = makeNode(PrepareStmt);

	COPY_STRING_FIELD(name);
	COPY_NODE_FIELD(argtypes);
	COPY_NODE_FIELD(query);

	return newnode;
}

static ExecuteStmt *
_copyExecuteStmt(const ExecuteStmt *from)
{
	ExecuteStmt *newnode = makeNode(ExecuteStmt);

	COPY_STRING_FIELD(name);
	COPY_NODE_FIELD(params);

	return newnode;
}

static DeallocateStmt *
_copyDeallocateStmt(const DeallocateStmt *from)
{
	DeallocateStmt *newnode = makeNode(DeallocateStmt);

	COPY_STRING_FIELD(name);

	return newnode;
}

static DropOwnedStmt *
_copyDropOwnedStmt(const DropOwnedStmt *from)
{
	DropOwnedStmt *newnode = makeNode(DropOwnedStmt);

	COPY_NODE_FIELD(roles);
	COPY_SCALAR_FIELD(behavior);

	return newnode;
}

static ReassignOwnedStmt *
_copyReassignOwnedStmt(const ReassignOwnedStmt *from)
{
	ReassignOwnedStmt *newnode = makeNode(ReassignOwnedStmt);

	COPY_NODE_FIELD(roles);
	COPY_NODE_FIELD(newrole);

	return newnode;
}

static AlterTSDictionaryStmt *
_copyAlterTSDictionaryStmt(const AlterTSDictionaryStmt *from)
{
	AlterTSDictionaryStmt *newnode = makeNode(AlterTSDictionaryStmt);

	COPY_NODE_FIELD(dictname);
	COPY_NODE_FIELD(options);

	return newnode;
}

static AlterTSConfigurationStmt *
_copyAlterTSConfigurationStmt(const AlterTSConfigurationStmt *from)
{
	AlterTSConfigurationStmt *newnode = makeNode(AlterTSConfigurationStmt);

	COPY_SCALAR_FIELD(kind);
	COPY_NODE_FIELD(cfgname);
	COPY_NODE_FIELD(tokentype);
	COPY_NODE_FIELD(dicts);
	COPY_SCALAR_FIELD(override);
	COPY_SCALAR_FIELD(replace);
	COPY_SCALAR_FIELD(missing_ok);

	return newnode;
}

static PublicationTable *
_copyPublicationTable(const PublicationTable *from)
{
	PublicationTable *newnode = makeNode(PublicationTable);

	COPY_NODE_FIELD(relation);
	COPY_NODE_FIELD(whereClause);
	COPY_NODE_FIELD(columns);

	return newnode;
}

static PublicationObjSpec *
_copyPublicationObjSpec(const PublicationObjSpec *from)
{
	PublicationObjSpec *newnode = makeNode(PublicationObjSpec);

	COPY_SCALAR_FIELD(pubobjtype);
	COPY_STRING_FIELD(name);
	COPY_NODE_FIELD(pubtable);
	COPY_LOCATION_FIELD(location);

	return newnode;
}

static CreatePublicationStmt *
_copyCreatePublicationStmt(const CreatePublicationStmt *from)
{
	CreatePublicationStmt *newnode = makeNode(CreatePublicationStmt);

	COPY_STRING_FIELD(pubname);
	COPY_NODE_FIELD(options);
	COPY_NODE_FIELD(pubobjects);
	COPY_SCALAR_FIELD(for_all_tables);

	return newnode;
}

static AlterPublicationStmt *
_copyAlterPublicationStmt(const AlterPublicationStmt *from)
{
	AlterPublicationStmt *newnode = makeNode(AlterPublicationStmt);

	COPY_STRING_FIELD(pubname);
	COPY_NODE_FIELD(options);
	COPY_NODE_FIELD(pubobjects);
	COPY_SCALAR_FIELD(for_all_tables);
	COPY_SCALAR_FIELD(action);

	return newnode;
}

static CreateSubscriptionStmt *
_copyCreateSubscriptionStmt(const CreateSubscriptionStmt *from)
{
	CreateSubscriptionStmt *newnode = makeNode(CreateSubscriptionStmt);

	COPY_STRING_FIELD(subname);
	COPY_STRING_FIELD(conninfo);
	COPY_NODE_FIELD(publication);
	COPY_NODE_FIELD(options);

	return newnode;
}

static AlterSubscriptionStmt *
_copyAlterSubscriptionStmt(const AlterSubscriptionStmt *from)
{
	AlterSubscriptionStmt *newnode = makeNode(AlterSubscriptionStmt);

	COPY_SCALAR_FIELD(kind);
	COPY_STRING_FIELD(subname);
	COPY_STRING_FIELD(conninfo);
	COPY_NODE_FIELD(publication);
	COPY_NODE_FIELD(options);

	return newnode;
}

static DropSubscriptionStmt *
_copyDropSubscriptionStmt(const DropSubscriptionStmt *from)
{
	DropSubscriptionStmt *newnode = makeNode(DropSubscriptionStmt);

	COPY_STRING_FIELD(subname);
	COPY_SCALAR_FIELD(missing_ok);
	COPY_SCALAR_FIELD(behavior);

	return newnode;
}

static PathKey *
_copyPathKey(const PathKey *from)
{
	PathKey *newnode = makeNode(PathKey);

	COPY_SCALAR_FIELD(pk_eclass);
	COPY_SCALAR_FIELD(pk_opfamily);
	COPY_SCALAR_FIELD(pk_strategy);
	COPY_SCALAR_FIELD(pk_nulls_first);

	return newnode;
}

static RestrictInfo *
_copyRestrictInfo(const RestrictInfo *from)
{
	RestrictInfo *newnode = makeNode(RestrictInfo);

	COPY_NODE_FIELD(clause);
	COPY_SCALAR_FIELD(is_pushed_down);
	COPY_SCALAR_FIELD(can_join);
	COPY_SCALAR_FIELD(pseudoconstant);
	COPY_SCALAR_FIELD(has_clone);
	COPY_SCALAR_FIELD(is_clone);
	COPY_SCALAR_FIELD(leakproof);
	COPY_SCALAR_FIELD(has_volatile);
	COPY_SCALAR_FIELD(security_level);
	COPY_SCALAR_FIELD(num_base_rels);
	COPY_BITMAPSET_FIELD(clause_relids);
	COPY_BITMAPSET_FIELD(required_relids);
	COPY_BITMAPSET_FIELD(incompatible_relids);
	COPY_BITMAPSET_FIELD(outer_relids);
	COPY_BITMAPSET_FIELD(left_relids);
	COPY_BITMAPSET_FIELD(right_relids);
	COPY_NODE_FIELD(orclause);
	COPY_SCALAR_FIELD(rinfo_serial);
	COPY_SCALAR_FIELD(parent_ec);
	COPY_SCALAR_FIELD(eval_cost);
	COPY_SCALAR_FIELD(norm_selec);
	COPY_SCALAR_FIELD(outer_selec);
	COPY_NODE_FIELD(mergeopfamilies);
	COPY_SCALAR_FIELD(left_ec);
	COPY_SCALAR_FIELD(right_ec);
	COPY_SCALAR_FIELD(left_em);
	COPY_SCALAR_FIELD(right_em);
	newnode->scansel_cache = NIL;
	COPY_SCALAR_FIELD(outer_is_left);
	COPY_SCALAR_FIELD(hashjoinoperator);
	COPY_SCALAR_FIELD(left_bucketsize);
	COPY_SCALAR_FIELD(right_bucketsize);
	COPY_SCALAR_FIELD(left_mcvfreq);
	COPY_SCALAR_FIELD(right_mcvfreq);
	COPY_SCALAR_FIELD(left_hasheqoperator);
	COPY_SCALAR_FIELD(right_hasheqoperator);

	return newnode;
}

static PlaceHolderVar *
_copyPlaceHolderVar(const PlaceHolderVar *from)
{
	PlaceHolderVar *newnode = makeNode(PlaceHolderVar);

	COPY_NODE_FIELD(phexpr);
	COPY_BITMAPSET_FIELD(phrels);
	COPY_BITMAPSET_FIELD(phnullingrels);
	COPY_SCALAR_FIELD(phid);
	COPY_SCALAR_FIELD(phlevelsup);

	return newnode;
}

static SpecialJoinInfo *
_copySpecialJoinInfo(const SpecialJoinInfo *from)
{
	SpecialJoinInfo *newnode = makeNode(SpecialJoinInfo);

	COPY_BITMAPSET_FIELD(min_lefthand);
	COPY_BITMAPSET_FIELD(min_righthand);
	COPY_BITMAPSET_FIELD(syn_lefthand);
	COPY_BITMAPSET_FIELD(syn_righthand);
	COPY_SCALAR_FIELD(jointype);
	COPY_SCALAR_FIELD(ojrelid);
	COPY_BITMAPSET_FIELD(commute_above_l);
	COPY_BITMAPSET_FIELD(commute_above_r);
	COPY_BITMAPSET_FIELD(commute_below_l);
	COPY_BITMAPSET_FIELD(commute_below_r);
	COPY_SCALAR_FIELD(lhs_strict);
	COPY_SCALAR_FIELD(semi_can_btree);
	COPY_SCALAR_FIELD(semi_can_hash);
	COPY_NODE_FIELD(semi_operators);
	COPY_NODE_FIELD(semi_rhs_exprs);

	return newnode;
}

static AppendRelInfo *
_copyAppendRelInfo(const AppendRelInfo *from)
{
	AppendRelInfo *newnode = makeNode(AppendRelInfo);

	COPY_SCALAR_FIELD(parent_relid);
	COPY_SCALAR_FIELD(child_relid);
	COPY_SCALAR_FIELD(parent_reltype);
	COPY_SCALAR_FIELD(child_reltype);
	COPY_NODE_FIELD(translated_vars);
	COPY_SCALAR_FIELD(num_child_cols);
	COPY_POINTER_FIELD(parent_colnos, from->num_child_cols * sizeof(AttrNumber));
	COPY_SCALAR_FIELD(parent_reloid);

	return newnode;
}

static PlaceHolderInfo *
_copyPlaceHolderInfo(const PlaceHolderInfo *from)
{
	PlaceHolderInfo *newnode = makeNode(PlaceHolderInfo);

	COPY_SCALAR_FIELD(phid);
	COPY_NODE_FIELD(ph_var);
	COPY_BITMAPSET_FIELD(ph_eval_at);
	COPY_BITMAPSET_FIELD(ph_lateral);
	COPY_BITMAPSET_FIELD(ph_needed);
	COPY_SCALAR_FIELD(ph_width);

	return newnode;
}

static PlannedStmt *
_copyPlannedStmt(const PlannedStmt *from)
{
	PlannedStmt *newnode = makeNode(PlannedStmt);

	COPY_SCALAR_FIELD(commandType);
	COPY_SCALAR_FIELD(queryId);
	COPY_SCALAR_FIELD(hasReturning);
	COPY_SCALAR_FIELD(hasModifyingCTE);
	COPY_SCALAR_FIELD(canSetTag);
	COPY_SCALAR_FIELD(transientPlan);
	COPY_SCALAR_FIELD(dependsOnRole);
	COPY_SCALAR_FIELD(parallelModeNeeded);
	COPY_SCALAR_FIELD(jitFlags);
	COPY_NODE_FIELD(planTree);
	COPY_NODE_FIELD(rtable);
	COPY_NODE_FIELD(permInfos);
	COPY_NODE_FIELD(resultRelations);
	COPY_NODE_FIELD(appendRelations);
	COPY_NODE_FIELD(subplans);
	COPY_BITMAPSET_FIELD(rewindPlanIDs);
	COPY_NODE_FIELD(rowMarks);
	COPY_NODE_FIELD(relationOids);
	COPY_NODE_FIELD(invalItems);
	COPY_NODE_FIELD(paramExecTypes);
	COPY_NODE_FIELD(utilityStmt);
	COPY_LOCATION_FIELD(stmt_location);
	COPY_SCALAR_FIELD(stmt_len);

	return newnode;
}

static Result *
_copyResult(const Result *from)
{
	Result *newnode = makeNode(Result);

	COPY_SCALAR_FIELD(plan.startup_cost);
	COPY_SCALAR_FIELD(plan.total_cost);
	COPY_SCALAR_FIELD(plan.plan_rows);
	COPY_SCALAR_FIELD(plan.plan_width);
	COPY_SCALAR_FIELD(plan.parallel_aware);
	COPY_SCALAR_FIELD(plan.parallel_safe);
	COPY_SCALAR_FIELD(plan.async_capable);
	COPY_SCALAR_FIELD(plan.plan_node_id);
	COPY_NODE_FIELD(plan.targetlist);
	COPY_NODE_FIELD(plan.qual);
	COPY_NODE_FIELD(plan.lefttree);
	COPY_NODE_FIELD(plan.righttree);
	COPY_NODE_FIELD(plan.initPlan);
	COPY_BITMAPSET_FIELD(plan.extParam);
	COPY_BITMAPSET_FIELD(plan.allParam);
	COPY_NODE_FIELD(resconstantqual);

	return newnode;
}

static ProjectSet *
_copyProjectSet(const ProjectSet *from)
{
	ProjectSet *newnode = makeNode(ProjectSet);

	COPY_SCALAR_FIELD(plan.startup_cost);
	COPY_SCALAR_FIELD(plan.total_cost);
	COPY_SCALAR_FIELD(plan.plan_rows);
	COPY_SCALAR_FIELD(plan.plan_width);
	COPY_SCALAR_FIELD(plan.parallel_aware);
	COPY_SCALAR_FIELD(plan.parallel_safe);
	COPY_SCALAR_FIELD(plan.async_capable);
	COPY_SCALAR_FIELD(plan.plan_node_id);
	COPY_NODE_FIELD(plan.targetlist);
	COPY_NODE_FIELD(plan.qual);
	COPY_NODE_FIELD(plan.lefttree);
	COPY_NODE_FIELD(plan.righttree);
	COPY_NODE_FIELD(plan.initPlan);
	COPY_BITMAPSET_FIELD(plan.extParam);
	COPY_BITMAPSET_FIELD(plan.allParam);

	return newnode;
}

static ModifyTable *
_copyModifyTable(const ModifyTable *from)
{
	ModifyTable *newnode = makeNode(ModifyTable);

	COPY_SCALAR_FIELD(plan.startup_cost);
	COPY_SCALAR_FIELD(plan.total_cost);
	COPY_SCALAR_FIELD(plan.plan_rows);
	COPY_SCALAR_FIELD(plan.plan_width);
	COPY_SCALAR_FIELD(plan.parallel_aware);
	COPY_SCALAR_FIELD(plan.parallel_safe);
	COPY_SCALAR_FIELD(plan.async_capable);
	COPY_SCALAR_FIELD(plan.plan_node_id);
	COPY_NODE_FIELD(plan.targetlist);
	COPY_NODE_FIELD(plan.qual);
	COPY_NODE_FIELD(plan.lefttree);
	COPY_NODE_FIELD(plan.righttree);
	COPY_NODE_FIELD(plan.initPlan);
	COPY_BITMAPSET_FIELD(plan.extParam);
	COPY_BITMAPSET_FIELD(plan.allParam);
	COPY_SCALAR_FIELD(operation);
	COPY_SCALAR_FIELD(canSetTag);
	COPY_SCALAR_FIELD(nominalRelation);
	COPY_SCALAR_FIELD(rootRelation);
	COPY_SCALAR_FIELD(partColsUpdated);
	COPY_NODE_FIELD(resultRelations);
	COPY_NODE_FIELD(updateColnosLists);
	COPY_NODE_FIELD(withCheckOptionLists);
	COPY_NODE_FIELD(returningLists);
	COPY_NODE_FIELD(fdwPrivLists);
	COPY_BITMAPSET_FIELD(fdwDirectModifyPlans);
	COPY_NODE_FIELD(rowMarks);
	COPY_SCALAR_FIELD(epqParam);
	COPY_SCALAR_FIELD(onConflictAction);
	COPY_NODE_FIELD(arbiterIndexes);
	COPY_NODE_FIELD(onConflictSet);
	COPY_NODE_FIELD(onConflictCols);
	COPY_NODE_FIELD(onConflictWhere);
	COPY_SCALAR_FIELD(exclRelRTI);
	COPY_NODE_FIELD(exclRelTlist);
	COPY_NODE_FIELD(mergeActionLists);

	return newnode;
}

static Append *
_copyAppend(const Append *from)
{
	Append *newnode = makeNode(Append);

	COPY_SCALAR_FIELD(plan.startup_cost);
	COPY_SCALAR_FIELD(plan.total_cost);
	COPY_SCALAR_FIELD(plan.plan_rows);
	COPY_SCALAR_FIELD(plan.plan_width);
	COPY_SCALAR_FIELD(plan.parallel_aware);
	COPY_SCALAR_FIELD(plan.parallel_safe);
	COPY_SCALAR_FIELD(plan.async_capable);
	COPY_SCALAR_FIELD(plan.plan_node_id);
	COPY_NODE_FIELD(plan.targetlist);
	COPY_NODE_FIELD(plan.qual);
	COPY_NODE_FIELD(plan.lefttree);
	COPY_NODE_FIELD(plan.righttree);
	COPY_NODE_FIELD(plan.initPlan);
	COPY_BITMAPSET_FIELD(plan.extParam);
	COPY_BITMAPSET_FIELD(plan.allParam);
	COPY_BITMAPSET_FIELD(apprelids);
	COPY_NODE_FIELD(appendplans);
	COPY_SCALAR_FIELD(nasyncplans);
	COPY_SCALAR_FIELD(first_partial_plan);
	COPY_NODE_FIELD(part_prune_info);

	return newnode;
}

static MergeAppend *
_copyMergeAppend(const MergeAppend *from)
{
	MergeAppend *newnode = makeNode(MergeAppend);

	COPY_SCALAR_FIELD(plan.startup_cost);
	COPY_SCALAR_FIELD(plan.total_cost);
	COPY_SCALAR_FIELD(plan.plan_rows);
	COPY_SCALAR_FIELD(plan.plan_width);
	COPY_SCALAR_FIELD(plan.parallel_aware);
	COPY_SCALAR_FIELD(plan.parallel_safe);
	COPY_SCALAR_FIELD(plan.async_capable);
	COPY_SCALAR_FIELD(plan.plan_node_id);
	COPY_NODE_FIELD(plan.targetlist);
	COPY_NODE_FIELD(plan.qual);
	COPY_NODE_FIELD(plan.lefttree);
	COPY_NODE_FIELD(plan.righttree);
	COPY_NODE_FIELD(plan.initPlan);
	COPY_BITMAPSET_FIELD(plan.extParam);
	COPY_BITMAPSET_FIELD(plan.allParam);
	COPY_BITMAPSET_FIELD(apprelids);
	COPY_NODE_FIELD(mergeplans);
	COPY_SCALAR_FIELD(numCols);
	COPY_POINTER_FIELD(sortColIdx, from->numCols * sizeof(AttrNumber));
	COPY_POINTER_FIELD(sortOperators, from->numCols * sizeof(Oid));
	COPY_POINTER_FIELD(collations, from->numCols * sizeof(Oid));
	COPY_POINTER_FIELD(nullsFirst, from->numCols * sizeof(bool));
	COPY_NODE_FIELD(part_prune_info);

	return newnode;
}

static RecursiveUnion *
_copyRecursiveUnion(const RecursiveUnion *from)
{
	RecursiveUnion *newnode = makeNode(RecursiveUnion);

	COPY_SCALAR_FIELD(plan.startup_cost);
	COPY_SCALAR_FIELD(plan.total_cost);
	COPY_SCALAR_FIELD(plan.plan_rows);
	COPY_SCALAR_FIELD(plan.plan_width);
	COPY_SCALAR_FIELD(plan.parallel_aware);
	COPY_SCALAR_FIELD(plan.parallel_safe);
	COPY_SCALAR_FIELD(plan.async_capable);
	COPY_SCALAR_FIELD(plan.plan_node_id);
	COPY_NODE_FIELD(plan.targetlist);
	COPY_NODE_FIELD(plan.qual);
	COPY_NODE_FIELD(plan.lefttree);
	COPY_NODE_FIELD(plan.righttree);
	COPY_NODE_FIELD(plan.initPlan);
	COPY_BITMAPSET_FIELD(plan.extParam);
	COPY_BITMAPSET_FIELD(plan.allParam);
	COPY_SCALAR_FIELD(wtParam);
	COPY_SCALAR_FIELD(numCols);
	COPY_POINTER_FIELD(dupColIdx, from->numCols * sizeof(AttrNumber));
	COPY_POINTER_FIELD(dupOperators, from->numCols * sizeof(Oid));
	COPY_POINTER_FIELD(dupCollations, from->numCols * sizeof(Oid));
	COPY_SCALAR_FIELD(numGroups);

	return newnode;
}

static BitmapAnd *
_copyBitmapAnd(const BitmapAnd *from)
{
	BitmapAnd *newnode = makeNode(BitmapAnd);

	COPY_SCALAR_FIELD(plan.startup_cost);
	COPY_SCALAR_FIELD(plan.total_cost);
	COPY_SCALAR_FIELD(plan.plan_rows);
	COPY_SCALAR_FIELD(plan.plan_width);
	COPY_SCALAR_FIELD(plan.parallel_aware);
	COPY_SCALAR_FIELD(plan.parallel_safe);
	COPY_SCALAR_FIELD(plan.async_capable);
	COPY_SCALAR_FIELD(plan.plan_node_id);
	COPY_NODE_FIELD(plan.targetlist);
	COPY_NODE_FIELD(plan.qual);
	COPY_NODE_FIELD(plan.lefttree);
	COPY_NODE_FIELD(plan.righttree);
	COPY_NODE_FIELD(plan.initPlan);
	COPY_BITMAPSET_FIELD(plan.extParam);
	COPY_BITMAPSET_FIELD(plan.allParam);
	COPY_NODE_FIELD(bitmapplans);

	return newnode;
}

static BitmapOr *
_copyBitmapOr(const BitmapOr *from)
{
	BitmapOr *newnode = makeNode(BitmapOr);

	COPY_SCALAR_FIELD(plan.startup_cost);
	COPY_SCALAR_FIELD(plan.total_cost);
	COPY_SCALAR_FIELD(plan.plan_rows);
	COPY_SCALAR_FIELD(plan.plan_width);
	COPY_SCALAR_FIELD(plan.parallel_aware);
	COPY_SCALAR_FIELD(plan.parallel_safe);
	COPY_SCALAR_FIELD(plan.async_capable);
	COPY_SCALAR_FIELD(plan.plan_node_id);
	COPY_NODE_FIELD(plan.targetlist);
	COPY_NODE_FIELD(plan.qual);
	COPY_NODE_FIELD(plan.lefttree);
	COPY_NODE_FIELD(plan.righttree);
	COPY_NODE_FIELD(plan.initPlan);
	COPY_BITMAPSET_FIELD(plan.extParam);
	COPY_BITMAPSET_FIELD(plan.allParam);
	COPY_SCALAR_FIELD(isshared);
	COPY_NODE_FIELD(bitmapplans);

	return newnode;
}

static SeqScan *
_copySeqScan(const SeqScan *from)
{
	SeqScan *newnode = makeNode(SeqScan);

	COPY_SCALAR_FIELD(scan.plan.startup_cost);
	COPY_SCALAR_FIELD(scan.plan.total_cost);
	COPY_SCALAR_FIELD(scan.plan.plan_rows);
	COPY_SCALAR_FIELD(scan.plan.plan_width);
	COPY_SCALAR_FIELD(scan.plan.parallel_aware);
	COPY_SCALAR_FIELD(scan.plan.parallel_safe);
	COPY_SCALAR_FIELD(scan.plan.async_capable);
	COPY_SCALAR_FIELD(scan.plan.plan_node_id);
	COPY_NODE_FIELD(scan.plan.targetlist);
	COPY_NODE_FIELD(scan.plan.qual);
	COPY_NODE_FIELD(scan.plan.lefttree);
	COPY_NODE_FIELD(scan.plan.righttree);
	COPY_NODE_FIELD(scan.plan.initPlan);
	COPY_BITMAPSET_FIELD(scan.plan.extParam);
	COPY_BITMAPSET_FIELD(scan.plan.allParam);
	COPY_SCALAR_FIELD(scan.scanrelid);

	return newnode;
}

static SampleScan *
_copySampleScan(const SampleScan *from)
{
	SampleScan *newnode = makeNode(SampleScan);

	COPY_SCALAR_FIELD(scan.plan.startup_cost);
	COPY_SCALAR_FIELD(scan.plan.total_cost);
	COPY_SCALAR_FIELD(scan.plan.plan_rows);
	COPY_SCALAR_FIELD(scan.plan.plan_width);
	COPY_SCALAR_FIELD(scan.plan.parallel_aware);
	COPY_SCALAR_FIELD(scan.plan.parallel_safe);
	COPY_SCALAR_FIELD(scan.plan.async_capable);
	COPY_SCALAR_FIELD(scan.plan.plan_node_id);
	COPY_NODE_FIELD(scan.plan.targetlist);
	COPY_NODE_FIELD(scan.plan.qual);
	COPY_NODE_FIELD(scan.plan.lefttree);
	COPY_NODE_FIELD(scan.plan.righttree);
	COPY_NODE_FIELD(scan.plan.initPlan);
	COPY_BITMAPSET_FIELD(scan.plan.extParam);
	COPY_BITMAPSET_FIELD(scan.plan.allParam);
	COPY_SCALAR_FIELD(scan.scanrelid);
	COPY_NODE_FIELD(tablesample);

	return newnode;
}

static IndexScan *
_copyIndexScan(const IndexScan *from)
{
	IndexScan *newnode = makeNode(IndexScan);

	COPY_SCALAR_FIELD(scan.plan.startup_cost);
	COPY_SCALAR_FIELD(scan.plan.total_cost);
	COPY_SCALAR_FIELD(scan.plan.plan_rows);
	COPY_SCALAR_FIELD(scan.plan.plan_width);
	COPY_SCALAR_FIELD(scan.plan.parallel_aware);
	COPY_SCALAR_FIELD(scan.plan.parallel_safe);
	COPY_SCALAR_FIELD(scan.plan.async_capable);
	COPY_SCALAR_FIELD(scan.plan.plan_node_id);
	COPY_NODE_FIELD(scan.plan.targetlist);
	COPY_NODE_FIELD(scan.plan.qual);
	COPY_NODE_FIELD(scan.plan.lefttree);
	COPY_NODE_FIELD(scan.plan.righttree);
	COPY_NODE_FIELD(scan.plan.initPlan);
	COPY_BITMAPSET_FIELD(scan.plan.extParam);
	COPY_BITMAPSET_FIELD(scan.plan.allParam);
	COPY_SCALAR_FIELD(scan.scanrelid);
	COPY_SCALAR_FIELD(indexid);
	COPY_NODE_FIELD(indexqual);
	COPY_NODE_FIELD(indexqualorig);
	COPY_NODE_FIELD(indexorderby);
	COPY_NODE_FIELD(indexorderbyorig);
	COPY_NODE_FIELD(indexorderbyops);
	COPY_SCALAR_FIELD(indexorderdir);

	return newnode;
}

static IndexOnlyScan *
_copyIndexOnlyScan(const IndexOnlyScan *from)
{
	IndexOnlyScan *newnode = makeNode(IndexOnlyScan);

	COPY_SCALAR_FIELD(scan.plan.startup_cost);
	COPY_SCALAR_FIELD(scan.plan.total_cost);
	COPY_SCALAR_FIELD(scan.plan.plan_rows);
	COPY_SCALAR_FIELD(scan.plan.plan_width);
	COPY_SCALAR_FIELD(scan.plan.parallel_aware);
	COPY_SCALAR_FIELD(scan.plan.parallel_safe);
	COPY_SCALAR_FIELD(scan.plan.async_capable);
	COPY_SCALAR_FIELD(scan.plan.plan_node_id);
	COPY_NODE_FIELD(scan.plan.targetlist);
	COPY_NODE_FIELD(scan.plan.qual);
	COPY_NODE_FIELD(scan.plan.lefttree);
	COPY_NODE_FIELD(scan.plan.righttree);
	COPY_NODE_FIELD(scan.plan.initPlan);
	COPY_BITMAPSET_FIELD(scan.plan.extParam);
	COPY_BITMAPSET_FIELD(scan.plan.allParam);
	COPY_SCALAR_FIELD(scan.scanrelid);
	COPY_SCALAR_FIELD(indexid);
	COPY_NODE_FIELD(indexqual);
	COPY_NODE_FIELD(recheckqual);
	COPY_NODE_FIELD(indexorderby);
	COPY_NODE_FIELD(indextlist);
	COPY_SCALAR_FIELD(indexorderdir);

	return newnode;
}

static BitmapIndexScan *
_copyBitmapIndexScan(const BitmapIndexScan *from)
{
	BitmapIndexScan *newnode = makeNode(BitmapIndexScan);

	COPY_SCALAR_FIELD(scan.plan.startup_cost);
	COPY_SCALAR_FIELD(scan.plan.total_cost);
	COPY_SCALAR_FIELD(scan.plan.plan_rows);
	COPY_SCALAR_FIELD(scan.plan.plan_width);
	COPY_SCALAR_FIELD(scan.plan.parallel_aware);
	COPY_SCALAR_FIELD(scan.plan.parallel_safe);
	COPY_SCALAR_FIELD(scan.plan.async_capable);
	COPY_SCALAR_FIELD(scan.plan.plan_node_id);
	COPY_NODE_FIELD(scan.plan.targetlist);
	COPY_NODE_FIELD(scan.plan.qual);
	COPY_NODE_FIELD(scan.plan.lefttree);
	COPY_NODE_FIELD(scan.plan.righttree);
	COPY_NODE_FIELD(scan.plan.initPlan);
	COPY_BITMAPSET_FIELD(scan.plan.extParam);
	COPY_BITMAPSET_FIELD(scan.plan.allParam);
	COPY_SCALAR_FIELD(scan.scanrelid);
	COPY_SCALAR_FIELD(indexid);
	COPY_SCALAR_FIELD(isshared);
	COPY_NODE_FIELD(indexqual);
	COPY_NODE_FIELD(indexqualorig);

	return newnode;
}

static BitmapHeapScan *
_copyBitmapHeapScan(const BitmapHeapScan *from)
{
	BitmapHeapScan *newnode = makeNode(BitmapHeapScan);

	COPY_SCALAR_FIELD(scan.plan.startup_cost);
	COPY_SCALAR_FIELD(scan.plan.total_cost);
	COPY_SCALAR_FIELD(scan.plan.plan_rows);
	COPY_SCALAR_FIELD(scan.plan.plan_width);
	COPY_SCALAR_FIELD(scan.plan.parallel_aware);
	COPY_SCALAR_FIELD(scan.plan.parallel_safe);
	COPY_SCALAR_FIELD(scan.plan.async_capable);
	COPY_SCALAR_FIELD(scan.plan.plan_node_id);
	COPY_NODE_FIELD(scan.plan.targetlist);
	COPY_NODE_FIELD(scan.plan.qual);
	COPY_NODE_FIELD(scan.plan.lefttree);
	COPY_NODE_FIELD(scan.plan.righttree);
	COPY_NODE_FIELD(scan.plan.initPlan);
	COPY_BITMAPSET_FIELD(scan.plan.extParam);
	COPY_BITMAPSET_FIELD(scan.plan.allParam);
	COPY_SCALAR_FIELD(scan.scanrelid);
	COPY_NODE_FIELD(bitmapqualorig);

	return newnode;
}

static TidScan *
_copyTidScan(const TidScan *from)
{
	TidScan *newnode = makeNode(TidScan);

	COPY_SCALAR_FIELD(scan.plan.startup_cost);
	COPY_SCALAR_FIELD(scan.plan.total_cost);
	COPY_SCALAR_FIELD(scan.plan.plan_rows);
	COPY_SCALAR_FIELD(scan.plan.plan_width);
	COPY_SCALAR_FIELD(scan.plan.parallel_aware);
	COPY_SCALAR_FIELD(scan.plan.parallel_safe);
	COPY_SCALAR_FIELD(scan.plan.async_capable);
	COPY_SCALAR_FIELD(scan.plan.plan_node_id);
	COPY_NODE_FIELD(scan.plan.targetlist);
	COPY_NODE_FIELD(scan.plan.qual);
	COPY_NODE_FIELD(scan.plan.lefttree);
	COPY_NODE_FIELD(scan.plan.righttree);
	COPY_NODE_FIELD(scan.plan.initPlan);
	COPY_BITMAPSET_FIELD(scan.plan.extParam);
	COPY_BITMAPSET_FIELD(scan.plan.allParam);
	COPY_SCALAR_FIELD(scan.scanrelid);
	COPY_NODE_FIELD(tidquals);

	return newnode;
}

static TidRangeScan *
_copyTidRangeScan(const TidRangeScan *from)
{
	TidRangeScan *newnode = makeNode(TidRangeScan);

	COPY_SCALAR_FIELD(scan.plan.startup_cost);
	COPY_SCALAR_FIELD(scan.plan.total_cost);
	COPY_SCALAR_FIELD(scan.plan.plan_rows);
	COPY_SCALAR_FIELD(scan.plan.plan_width);
	COPY_SCALAR_FIELD(scan.plan.parallel_aware);
	COPY_SCALAR_FIELD(scan.plan.parallel_safe);
	COPY_SCALAR_FIELD(scan.plan.async_capable);
	COPY_SCALAR_FIELD(scan.plan.plan_node_id);
	COPY_NODE_FIELD(scan.plan.targetlist);
	COPY_NODE_FIELD(scan.plan.qual);
	COPY_NODE_FIELD(scan.plan.lefttree);
	COPY_NODE_FIELD(scan.plan.righttree);
	COPY_NODE_FIELD(scan.plan.initPlan);
	COPY_BITMAPSET_FIELD(scan.plan.extParam);
	COPY_BITMAPSET_FIELD(scan.plan.allParam);
	COPY_SCALAR_FIELD(scan.scanrelid);
	COPY_NODE_FIELD(tidrangequals);

	return newnode;
}

static SubqueryScan *
_copySubqueryScan(const SubqueryScan *from)
{
	SubqueryScan *newnode = makeNode(SubqueryScan);

	COPY_SCALAR_FIELD(scan.plan.startup_cost);
	COPY_SCALAR_FIELD(scan.plan.total_cost);
	COPY_SCALAR_FIELD(scan.plan.plan_rows);
	COPY_SCALAR_FIELD(scan.plan.plan_width);
	COPY_SCALAR_FIELD(scan.plan.parallel_aware);
	COPY_SCALAR_FIELD(scan.plan.parallel_safe);
	COPY_SCALAR_FIELD(scan.plan.async_capable);
	COPY_SCALAR_FIELD(scan.plan.plan_node_id);
	COPY_NODE_FIELD(scan.plan.targetlist);
	COPY_NODE_FIELD(scan.plan.qual);
	COPY_NODE_FIELD(scan.plan.lefttree);
	COPY_NODE_FIELD(scan.plan.righttree);
	COPY_NODE_FIELD(scan.plan.initPlan);
	COPY_BITMAPSET_FIELD(scan.plan.extParam);
	COPY_BITMAPSET_FIELD(scan.plan.allParam);
	COPY_SCALAR_FIELD(scan.scanrelid);
	COPY_NODE_FIELD(subplan);
	COPY_SCALAR_FIELD(scanstatus);

	return newnode;
}

static FunctionScan *
_copyFunctionScan(const FunctionScan *from)
{
	FunctionScan *newnode = makeNode(FunctionScan);

	COPY_SCALAR_FIELD(scan.plan.startup_cost);
	COPY_SCALAR_FIELD(scan.plan.total_cost);
	COPY_SCALAR_FIELD(scan.plan.plan_rows);
	COPY_SCALAR_FIELD(scan.plan.plan_width);
	COPY_SCALAR_FIELD(scan.plan.parallel_aware);
	COPY_SCALAR_FIELD(scan.plan.parallel_safe);
	COPY_SCALAR_FIELD(scan.plan.async_capable);
	COPY_SCALAR_FIELD(scan.plan.plan_node_id);
	COPY_NODE_FIELD(scan.plan.targetlist);
	COPY_NODE_FIELD(scan.plan.qual);
	COPY_NODE_FIELD(scan.plan.lefttree);
	COPY_NODE_FIELD(scan.plan.righttree);
	COPY_NODE_FIELD(scan.plan.initPlan);
	COPY_BITMAPSET_FIELD(scan.plan.extParam);
	COPY_BITMAPSET_FIELD(scan.plan.allParam);
	COPY_SCALAR_FIELD(scan.scanrelid);
	COPY_NODE_FIELD(functions);
	COPY_SCALAR_FIELD(funcordinality);

	return newnode;
}

static ValuesScan *
_copyValuesScan(const ValuesScan *from)
{
	ValuesScan *newnode = makeNode(ValuesScan);

	COPY_SCALAR_FIELD(scan.plan.startup_cost);
	COPY_SCALAR_FIELD(scan.plan.total_cost);
	COPY_SCALAR_FIELD(scan.plan.plan_rows);
	COPY_SCALAR_FIELD(scan.plan.plan_width);
	COPY_SCALAR_FIELD(scan.plan.parallel_aware);
	COPY_SCALAR_FIELD(scan.plan.parallel_safe);
	COPY_SCALAR_FIELD(scan.plan.async_capable);
	COPY_SCALAR_FIELD(scan.plan.plan_node_id);
	COPY_NODE_FIELD(scan.plan.targetlist);
	COPY_NODE_FIELD(scan.plan.qual);
	COPY_NODE_FIELD(scan.plan.lefttree);
	COPY_NODE_FIELD(scan.plan.righttree);
	COPY_NODE_FIELD(scan.plan.initPlan);
	COPY_BITMAPSET_FIELD(scan.plan.extParam);
	COPY_BITMAPSET_FIELD(scan.plan.allParam);
	COPY_SCALAR_FIELD(scan.scanrelid);
	COPY_NODE_FIELD(values_lists);

	return newnode;
}

static TableFuncScan *
_copyTableFuncScan(const TableFuncScan *from)
{
	TableFuncScan *newnode = makeNode(TableFuncScan);

	COPY_SCALAR_FIELD(scan.plan.startup_cost);
	COPY_SCALAR_FIELD(scan.plan.total_cost);
	COPY_SCALAR_FIELD(scan.plan.plan_rows);
	COPY_SCALAR_FIELD(scan.plan.plan_width);
	COPY_SCALAR_FIELD(scan.plan.parallel_aware);
	COPY_SCALAR_FIELD(scan.plan.parallel_safe);
	COPY_SCALAR_FIELD(scan.plan.async_capable);
	COPY_SCALAR_FIELD(scan.plan.plan_node_id);
	COPY_NODE_FIELD(scan.plan.targetlist);
	COPY_NODE_FIELD(scan.plan.qual);
	COPY_NODE_FIELD(scan.plan.lefttree);
	COPY_NODE_FIELD(scan.plan.righttree);
	COPY_NODE_FIELD(scan.plan.initPlan);
	COPY_BITMAPSET_FIELD(scan.plan.extParam);
	COPY_BITMAPSET_FIELD(scan.plan.allParam);
	COPY_SCALAR_FIELD(scan.scanrelid);
	COPY_NODE_FIELD(tablefunc);

	return newnode;
}

static CteScan *
_copyCteScan(const CteScan *from)
{
	CteScan *newnode = makeNode(CteScan);

	COPY_SCALAR_FIELD(scan.plan.startup_cost);
	COPY_SCALAR_FIELD(scan.plan.total_cost);
	COPY_SCALAR_FIELD(scan.plan.plan_rows);
	COPY_SCALAR_FIELD(scan.plan.plan_width);
	COPY_SCALAR_FIELD(scan.plan.parallel_aware);
	COPY_SCALAR_FIELD(scan.plan.parallel_safe);
	COPY_SCALAR_FIELD(scan.plan.async_capable);
	COPY_SCALAR_FIELD(scan.plan.plan_node_id);
	COPY_NODE_FIELD(scan.plan.targetlist);
	COPY_NODE_FIELD(scan.plan.qual);
	COPY_NODE_FIELD(scan.plan.lefttree);
	COPY_NODE_FIELD(scan.plan.righttree);
	COPY_NODE_FIELD(scan.plan.initPlan);
	COPY_BITMAPSET_FIELD(scan.plan.extParam);
	COPY_BITMAPSET_FIELD(scan.plan.allParam);
	COPY_SCALAR_FIELD(scan.scanrelid);
	COPY_SCALAR_FIELD(ctePlanId);
	COPY_SCALAR_FIELD(cteParam);

	return newnode;
}

static NamedTuplestoreScan *
_copyNamedTuplestoreScan(const NamedTuplestoreScan *from)
{
	NamedTuplestoreScan *newnode = makeNode(NamedTuplestoreScan);

	COPY_SCALAR_FIELD(scan.plan.startup_cost);
	COPY_SCALAR_FIELD(scan.plan.total_cost);
	COPY_SCALAR_FIELD(scan.plan.plan_rows);
	COPY_SCALAR_FIELD(scan.plan.plan_width);
	COPY_SCALAR_FIELD(scan.plan.parallel_aware);
	COPY_SCALAR_FIELD(scan.plan.parallel_safe);
	COPY_SCALAR_FIELD(scan.plan.async_capable);
	COPY_SCALAR_FIELD(scan.plan.plan_node_id);
	COPY_NODE_FIELD(scan.plan.targetlist);
	COPY_NODE_FIELD(scan.plan.qual);
	COPY_NODE_FIELD(scan.plan.lefttree);
	COPY_NODE_FIELD(scan.plan.righttree);
	COPY_NODE_FIELD(scan.plan.initPlan);
	COPY_BITMAPSET_FIELD(scan.plan.extParam);
	COPY_BITMAPSET_FIELD(scan.plan.allParam);
	COPY_SCALAR_FIELD(scan.scanrelid);
	COPY_STRING_FIELD(enrname);

	return newnode;
}

static WorkTableScan *
_copyWorkTableScan(const WorkTableScan *from)
{
	WorkTableScan *newnode = makeNode(WorkTableScan);

	COPY_SCALAR_FIELD(scan.plan.startup_cost);
	COPY_SCALAR_FIELD(scan.plan.total_cost);
	COPY_SCALAR_FIELD(scan.plan.plan_rows);
	COPY_SCALAR_FIELD(scan.plan.plan_width);
	COPY_SCALAR_FIELD(scan.plan.parallel_aware);
	COPY_SCALAR_FIELD(scan.plan.parallel_safe);
	COPY_SCALAR_FIELD(scan.plan.async_capable);
	COPY_SCALAR_FIELD(scan.plan.plan_node_id);
	COPY_NODE_FIELD(scan.plan.targetlist);
	COPY_NODE_FIELD(scan.plan.qual);
	COPY_NODE_FIELD(scan.plan.lefttree);
	COPY_NODE_FIELD(scan.plan.righttree);
	COPY_NODE_FIELD(scan.plan.initPlan);
	COPY_BITMAPSET_FIELD(scan.plan.extParam);
	COPY_BITMAPSET_FIELD(scan.plan.allParam);
	COPY_SCALAR_FIELD(scan.scanrelid);
	COPY_SCALAR_FIELD(wtParam);

	return newnode;
}

static ForeignScan *
_copyForeignScan(const ForeignScan *from)
{
	ForeignScan *newnode = makeNode(ForeignScan);

	COPY_SCALAR_FIELD(scan.plan.startup_cost);
	COPY_SCALAR_FIELD(scan.plan.total_cost);
	COPY_SCALAR_FIELD(scan.plan.plan_rows);
	COPY_SCALAR_FIELD(scan.plan.plan_width);
	COPY_SCALAR_FIELD(scan.plan.parallel_aware);
	COPY_SCALAR_FIELD(scan.plan.parallel_safe);
	COPY_SCALAR_FIELD(scan.plan.async_capable);
	COPY_SCALAR_FIELD(scan.plan.plan_node_id);
	COPY_NODE_FIELD(scan.plan.targetlist);
	COPY_NODE_FIELD(scan.plan.qual);
	COPY_NODE_FIELD(scan.plan.lefttree);
	COPY_NODE_FIELD(scan.plan.righttree);
	COPY_NODE_FIELD(scan.plan.initPlan);
	COPY_BITMAPSET_FIELD(scan.plan.extParam);
	COPY_BITMAPSET_FIELD(scan.plan.allParam);
	COPY_SCALAR_FIELD(scan.scanrelid);
	COPY_SCALAR_FIELD(operation);
	COPY_SCALAR_FIELD(resultRelation);
	COPY_SCALAR_FIELD(checkAsUser);
	COPY_SCALAR_FIELD(fs_server);
	COPY_NODE_FIELD(fdw_exprs);
	COPY_NODE_FIELD(fdw_private);
	COPY_NODE_FIELD(fdw_scan_tlist);
	COPY_NODE_FIELD(fdw_recheck_quals);
	COPY_BITMAPSET_FIELD(fs_relids);
	COPY_BITMAPSET_FIELD(fs_base_relids);
	COPY_SCALAR_FIELD(fsSystemCol);

	return newnode;
}

static CustomScan *
_copyCustomScan(const CustomScan *from)
{
	CustomScan *newnode = makeNode(CustomScan);

	COPY_SCALAR_FIELD(scan.plan.startup_cost);
	COPY_SCALAR_FIELD(scan.plan.total_cost);
	COPY_SCALAR_FIELD(scan.plan.plan_rows);
	COPY_SCALAR_FIELD(scan.plan.plan_width);
	COPY_SCALAR_FIELD(scan.plan.parallel_aware);
	COPY_SCALAR_FIELD(scan.plan.parallel_safe);
	COPY_SCALAR_FIELD(scan.plan.async_capable);
	COPY_SCALAR_FIELD(scan.plan.plan_node_id);
	COPY_NODE_FIELD(scan.plan.targetlist);
	COPY_NODE_FIELD(scan.plan.qual);
	COPY_NODE_FIELD(scan.plan.lefttree);
	COPY_NODE_FIELD(scan.plan.righttree);
	COPY_NODE_FIELD(scan.plan.initPlan);
	COPY_BITMAPSET_FIELD(scan.plan.extParam);
	COPY_BITMAPSET_FIELD(scan.plan.allParam);
	COPY_SCALAR_FIELD(scan.scanrelid);
	COPY_SCALAR_FIELD(flags);
	COPY_NODE_FIELD(custom_plans);
	COPY_NODE_FIELD(custom_exprs);
	COPY_NODE_FIELD(custom_private);
	COPY_NODE_FIELD(custom_scan_tlist);
	COPY_BITMAPSET_FIELD(custom_relids);
	COPY_SCALAR_FIELD(methods);

	return newnode;
}

static NestLoop *
_copyNestLoop(const NestLoop *from)
{
	NestLoop *newnode = makeNode(NestLoop);

	COPY_SCALAR_FIELD(join.plan.startup_cost);
	COPY_SCALAR_FIELD(join.plan.total_cost);
	COPY_SCALAR_FIELD(join.plan.plan_rows);
	COPY_SCALAR_FIELD(join.plan.plan_width);
	COPY_SCALAR_FIELD(join.plan.parallel_aware);
	COPY_SCALAR_FIELD(join.plan.parallel_safe);
	COPY_SCALAR_FIELD(join.plan.async_capable);
	COPY_SCALAR_FIELD(join.plan.plan_node_id);
	COPY_NODE_FIELD(join.plan.targetlist);
	COPY_NODE_FIELD(join.plan.qual);
	COPY_NODE_FIELD(join.plan.lefttree);
	COPY_NODE_FIELD(join.plan.righttree);
	COPY_NODE_FIELD(join.plan.initPlan);
	COPY_BITMAPSET_FIELD(join.plan.extParam);
	COPY_BITMAPSET_FIELD(join.plan.allParam);
	COPY_SCALAR_FIELD(join.jointype);
	COPY_SCALAR_FIELD(join.inner_unique);
	COPY_NODE_FIELD(join.joinqual);
	COPY_NODE_FIELD(nestParams);

	return newnode;
}

static NestLoopParam *
_copyNestLoopParam(const NestLoopParam *from)
{
	NestLoopParam *newnode = makeNode(NestLoopParam);

	COPY_SCALAR_FIELD(paramno);
	COPY_NODE_FIELD(paramval);

	return newnode;
}

static MergeJoin *
_copyMergeJoin(const MergeJoin *from)
{
	MergeJoin *newnode = makeNode(MergeJoin);

	COPY_SCALAR_FIELD(join.plan.startup_cost);
	COPY_SCALAR_FIELD(join.plan.total_cost);
	COPY_SCALAR_FIELD(join.plan.plan_rows);
	COPY_SCALAR_FIELD(join.plan.plan_width);
	COPY_SCALAR_FIELD(join.plan.parallel_aware);
	COPY_SCALAR_FIELD(join.plan.parallel_safe);
	COPY_SCALAR_FIELD(join.plan.async_capable);
	COPY_SCALAR_FIELD(join.plan.plan_node_id);
	COPY_NODE_FIELD(join.plan.targetlist);
	COPY_NODE_FIELD(join.plan.qual);
	COPY_NODE_FIELD(join.plan.lefttree);
	COPY_NODE_FIELD(join.plan.righttree);
	COPY_NODE_FIELD(join.plan.initPlan);
	COPY_BITMAPSET_FIELD(join.plan.extParam);
	COPY_BITMAPSET_FIELD(join.plan.allParam);
	COPY_SCALAR_FIELD(join.jointype);
	COPY_SCALAR_FIELD(join.inner_unique);
	COPY_NODE_FIELD(join.joinqual);
	COPY_SCALAR_FIELD(skip_mark_restore);
	COPY_NODE_FIELD(mergeclauses);
	COPY_POINTER_FIELD(mergeFamilies, list_length(from->mergeclauses) * sizeof(Oid));
	COPY_POINTER_FIELD(mergeCollations, list_length(from->mergeclauses) * sizeof(Oid));
	COPY_POINTER_FIELD(mergeStrategies, list_length(from->mergeclauses) * sizeof(int));
	COPY_POINTER_FIELD(mergeNullsFirst, list_length(from->mergeclauses) * sizeof(bool));

	return newnode;
}

static HashJoin *
_copyHashJoin(const HashJoin *from)
{
	HashJoin *newnode = makeNode(HashJoin);

	COPY_SCALAR_FIELD(join.plan.startup_cost);
	COPY_SCALAR_FIELD(join.plan.total_cost);
	COPY_SCALAR_FIELD(join.plan.plan_rows);
	COPY_SCALAR_FIELD(join.plan.plan_width);
	COPY_SCALAR_FIELD(join.plan.parallel_aware);
	COPY_SCALAR_FIELD(join.plan.parallel_safe);
	COPY_SCALAR_FIELD(join.plan.async_capable);
	COPY_SCALAR_FIELD(join.plan.plan_node_id);
	COPY_NODE_FIELD(join.plan.targetlist);
	COPY_NODE_FIELD(join.plan.qual);
	COPY_NODE_FIELD(join.plan.lefttree);
	COPY_NODE_FIELD(join.plan.righttree);
	COPY_NODE_FIELD(join.plan.initPlan);
	COPY_BITMAPSET_FIELD(join.plan.extParam);
	COPY_BITMAPSET_FIELD(join.plan.allParam);
	COPY_SCALAR_FIELD(join.jointype);
	COPY_SCALAR_FIELD(join.inner_unique);
	COPY_NODE_FIELD(join.joinqual);
	COPY_NODE_FIELD(hashclauses);
	COPY_NODE_FIELD(hashoperators);
	COPY_NODE_FIELD(hashcollations);
	COPY_NODE_FIELD(hashkeys);

	return newnode;
}

static Material *
_copyMaterial(const Material *from)
{
	Material *newnode = makeNode(Material);

	COPY_SCALAR_FIELD(plan.startup_cost);
	COPY_SCALAR_FIELD(plan.total_cost);
	COPY_SCALAR_FIELD(plan.plan_rows);
	COPY_SCALAR_FIELD(plan.plan_width);
	COPY_SCALAR_FIELD(plan.parallel_aware);
	COPY_SCALAR_FIELD(plan.parallel_safe);
	COPY_SCALAR_FIELD(plan.async_capable);
	COPY_SCALAR_FIELD(plan.plan_node_id);
	COPY_NODE_FIELD(plan.targetlist);
	COPY_NODE_FIELD(plan.qual);
	COPY_NODE_FIELD(plan.lefttree);
	COPY_NODE_FIELD(plan.righttree);
	COPY_NODE_FIELD(plan.initPlan);
	COPY_BITMAPSET_FIELD(plan.extParam);
	COPY_BITMAPSET_FIELD(plan.allParam);

	return newnode;
}

static Memoize *
_copyMemoize(const Memoize *from)
{
	Memoize *newnode = makeNode(Memoize);

	COPY_SCALAR_FIELD(plan.startup_cost);
	COPY_SCALAR_FIELD(plan.total_cost);
	COPY_SCALAR_FIELD(plan.plan_rows);
	COPY_SCALAR_FIELD(plan.plan_width);
	COPY_SCALAR_FIELD(plan.parallel_aware);
	COPY_SCALAR_FIELD(plan.parallel_safe);
	COPY_SCALAR_FIELD(plan.async_capable);
	COPY_SCALAR_FIELD(plan.plan_node_id);
	COPY_NODE_FIELD(plan.targetlist);
	COPY_NODE_FIELD(plan.qual);
	COPY_NODE_FIELD(plan.lefttree);
	COPY_NODE_FIELD(plan.righttree);
	COPY_NODE_FIELD(plan.initPlan);
	COPY_BITMAPSET_FIELD(plan.extParam);
	COPY_BITMAPSET_FIELD(plan.allParam);
	COPY_SCALAR_FIELD(numKeys);
	COPY_POINTER_FIELD(hashOperators, from->numKeys * sizeof(Oid));
	COPY_POINTER_FIELD(collations, from->numKeys * sizeof(Oid));
	COPY_NODE_FIELD(param_exprs);
	COPY_SCALAR_FIELD(singlerow);
	COPY_SCALAR_FIELD(binary_mode);
	COPY_SCALAR_FIELD(est_entries);
	COPY_BITMAPSET_FIELD(keyparamids);

	return newnode;
}

static Sort *
_copySort(const Sort *from)
{
	Sort *newnode = makeNode(Sort);

	COPY_SCALAR_FIELD(plan.startup_cost);
	COPY_SCALAR_FIELD(plan.total_cost);
	COPY_SCALAR_FIELD(plan.plan_rows);
	COPY_SCALAR_FIELD(plan.plan_width);
	COPY_SCALAR_FIELD(plan.parallel_aware);
	COPY_SCALAR_FIELD(plan.parallel_safe);
	COPY_SCALAR_FIELD(plan.async_capable);
	COPY_SCALAR_FIELD(plan.plan_node_id);
	COPY_NODE_FIELD(plan.targetlist);
	COPY_NODE_FIELD(plan.qual);
	COPY_NODE_FIELD(plan.lefttree);
	COPY_NODE_FIELD(plan.righttree);
	COPY_NODE_FIELD(plan.initPlan);
	COPY_BITMAPSET_FIELD(plan.extParam);
	COPY_BITMAPSET_FIELD(plan.allParam);
	COPY_SCALAR_FIELD(numCols);
	COPY_POINTER_FIELD(sortColIdx, from->numCols * sizeof(AttrNumber));
	COPY_POINTER_FIELD(sortOperators, from->numCols * sizeof(Oid));
	COPY_POINTER_FIELD(collations, from->numCols * sizeof(Oid));
	COPY_POINTER_FIELD(nullsFirst, from->numCols * sizeof(bool));

	return newnode;
}

static IncrementalSort *
_copyIncrementalSort(const IncrementalSort *from)
{
	IncrementalSort *newnode = makeNode(IncrementalSort);

	COPY_SCALAR_FIELD(sort.plan.startup_cost);
	COPY_SCALAR_FIELD(sort.plan.total_cost);
	COPY_SCALAR_FIELD(sort.plan.plan_rows);
	COPY_SCALAR_FIELD(sort.plan.plan_width);
	COPY_SCALAR_FIELD(sort.plan.parallel_aware);
	COPY_SCALAR_FIELD(sort.plan.parallel_safe);
	COPY_SCALAR_FIELD(sort.plan.async_capable);
	COPY_SCALAR_FIELD(sort.plan.plan_node_id);
	COPY_NODE_FIELD(sort.plan.targetlist);
	COPY_NODE_FIELD(sort.plan.qual);
	COPY_NODE_FIELD(sort.plan.lefttree);
	COPY_NODE_FIELD(sort.plan.righttree);
	COPY_NODE_FIELD(sort.plan.initPlan);
	COPY_BITMAPSET_FIELD(sort.plan.extParam);
	COPY_BITMAPSET_FIELD(sort.plan.allParam);
	COPY_SCALAR_FIELD(sort.numCols);
	COPY_POINTER_FIELD(sort.sortColIdx, from->sort.numCols * sizeof(AttrNumber));
	COPY_POINTER_FIELD(sort.sortOperators, from->sort.numCols * sizeof(Oid));
	COPY_POINTER_FIELD(sort.collations, from->sort.numCols * sizeof(Oid));
	COPY_POINTER_FIELD(sort.nullsFirst, from->sort.numCols * sizeof(bool));
	COPY_SCALAR_FIELD(nPresortedCols);

	return newnode;
}

static Group *
_copyGroup(const Group *from)
{
	Group *newnode = makeNode(Group);

	COPY_SCALAR_FIELD(plan.startup_cost);
	COPY_SCALAR_FIELD(plan.total_cost);
	COPY_SCALAR_FIELD(plan.plan_rows);
	COPY_SCALAR_FIELD(plan.plan_width);
	COPY_SCALAR_FIELD(plan.parallel_aware);
	COPY_SCALAR_FIELD(plan.parallel_safe);
	COPY_SCALAR_FIELD(plan.async_capable);
	COPY_SCALAR_FIELD(plan.plan_node_id);
	COPY_NODE_FIELD(plan.targetlist);
	COPY_NODE_FIELD(plan.qual);
	COPY_NODE_FIELD(plan.lefttree);
	COPY_NODE_FIELD(plan.righttree);
	COPY_NODE_FIELD(plan.initPlan);
	COPY_BITMAPSET_FIELD(plan.extParam);
	COPY_BITMAPSET_FIELD(plan.allParam);
	COPY_SCALAR_FIELD(numCols);
	COPY_POINTER_FIELD(grpColIdx, from->numCols * sizeof(AttrNumber));
	COPY_POINTER_FIELD(grpOperators, from->numCols * sizeof(Oid));
	COPY_POINTER_FIELD(grpCollations, from->numCols * sizeof(Oid));

	return newnode;
}

static Agg *
_copyAgg(const Agg *from)
{
	Agg *newnode = makeNode(Agg);

	COPY_SCALAR_FIELD(plan.startup_cost);
	COPY_SCALAR_FIELD(plan.total_cost);
	COPY_SCALAR_FIELD(plan.plan_rows);
	COPY_SCALAR_FIELD(plan.plan_width);
	COPY_SCALAR_FIELD(plan.parallel_aware);
	COPY_SCALAR_FIELD(plan.parallel_safe);
	COPY_SCALAR_FIELD(plan.async_capable);
	COPY_SCALAR_FIELD(plan.plan_node_id);
	COPY_NODE_FIELD(plan.targetlist);
	COPY_NODE_FIELD(plan.qual);
	COPY_NODE_FIELD(plan.lefttree);
	COPY_NODE_FIELD(plan.righttree);
	COPY_NODE_FIELD(plan.initPlan);
	COPY_BITMAPSET_FIELD(plan.extParam);
	COPY_BITMAPSET_FIELD(plan.allParam);
	COPY_SCALAR_FIELD(aggstrategy);
	COPY_SCALAR_FIELD(aggsplit);
	COPY_SCALAR_FIELD(numCols);
	COPY_POINTER_FIELD(grpColIdx, from->numCols * sizeof(AttrNumber));
	COPY_POINTER_FIELD(grpOperators, from->numCols * sizeof(Oid));
	COPY_POINTER_FIELD(grpCollations, from->numCols * sizeof(Oid));
	COPY_SCALAR_FIELD(numGroups);
	COPY_SCALAR_FIELD(transitionSpace);
	COPY_BITMAPSET_FIELD(aggParams);
	COPY_NODE_FIELD(groupingSets);
	COPY_NODE_FIELD(chain);

	return newnode;
}

static WindowAgg *
_copyWindowAgg(const WindowAgg *from)
{
	WindowAgg *newnode = makeNode(WindowAgg);

	COPY_SCALAR_FIELD(plan.startup_cost);
	COPY_SCALAR_FIELD(plan.total_cost);
	COPY_SCALAR_FIELD(plan.plan_rows);
	COPY_SCALAR_FIELD(plan.plan_width);
	COPY_SCALAR_FIELD(plan.parallel_aware);
	COPY_SCALAR_FIELD(plan.parallel_safe);
	COPY_SCALAR_FIELD(plan.async_capable);
	COPY_SCALAR_FIELD(plan.plan_node_id);
	COPY_NODE_FIELD(plan.targetlist);
	COPY_NODE_FIELD(plan.qual);
	COPY_NODE_FIELD(plan.lefttree);
	COPY_NODE_FIELD(plan.righttree);
	COPY_NODE_FIELD(plan.initPlan);
	COPY_BITMAPSET_FIELD(plan.extParam);
	COPY_BITMAPSET_FIELD(plan.allParam);
	COPY_SCALAR_FIELD(winref);
	COPY_SCALAR_FIELD(partNumCols);
	COPY_POINTER_FIELD(partColIdx, from->partNumCols * sizeof(AttrNumber));
	COPY_POINTER_FIELD(partOperators, from->partNumCols * sizeof(Oid));
	COPY_POINTER_FIELD(partCollations, from->partNumCols * sizeof(Oid));
	COPY_SCALAR_FIELD(ordNumCols);
	COPY_POINTER_FIELD(ordColIdx, from->ordNumCols * sizeof(AttrNumber));
	COPY_POINTER_FIELD(ordOperators, from->ordNumCols * sizeof(Oid));
	COPY_POINTER_FIELD(ordCollations, from->ordNumCols * sizeof(Oid));
	COPY_SCALAR_FIELD(frameOptions);
	COPY_NODE_FIELD(startOffset);
	COPY_NODE_FIELD(endOffset);
	COPY_NODE_FIELD(runCondition);
	COPY_NODE_FIELD(runConditionOrig);
	COPY_SCALAR_FIELD(startInRangeFunc);
	COPY_SCALAR_FIELD(endInRangeFunc);
	COPY_SCALAR_FIELD(inRangeColl);
	COPY_SCALAR_FIELD(inRangeAsc);
	COPY_SCALAR_FIELD(inRangeNullsFirst);
	COPY_SCALAR_FIELD(topWindow);

	return newnode;
}

static Unique *
_copyUnique(const Unique *from)
{
	Unique *newnode = makeNode(Unique);

	COPY_SCALAR_FIELD(plan.startup_cost);
	COPY_SCALAR_FIELD(plan.total_cost);
	COPY_SCALAR_FIELD(plan.plan_rows);
	COPY_SCALAR_FIELD(plan.plan_width);
	COPY_SCALAR_FIELD(plan.parallel_aware);
	COPY_SCALAR_FIELD(plan.parallel_safe);
	COPY_SCALAR_FIELD(plan.async_capable);
	COPY_SCALAR_FIELD(plan.plan_node_id);
	COPY_NODE_FIELD(plan.targetlist);
	COPY_NODE_FIELD(plan.qual);
	COPY_NODE_FIELD(plan.lefttree);
	COPY_NODE_FIELD(plan.righttree);
	COPY_NODE_FIELD(plan.initPlan);
	COPY_BITMAPSET_FIELD(plan.extParam);
	COPY_BITMAPSET_FIELD(plan.allParam);
	COPY_SCALAR_FIELD(numCols);
	COPY_POINTER_FIELD(uniqColIdx, from->numCols * sizeof(AttrNumber));
	COPY_POINTER_FIELD(uniqOperators, from->numCols * sizeof(Oid));
	COPY_POINTER_FIELD(uniqCollations, from->numCols * sizeof(Oid));

	return newnode;
}

static Gather *
_copyGather(const Gather *from)
{
	Gather *newnode = makeNode(Gather);

	COPY_SCALAR_FIELD(plan.startup_cost);
	COPY_SCALAR_FIELD(plan.total_cost);
	COPY_SCALAR_FIELD(plan.plan_rows);
	COPY_SCALAR_FIELD(plan.plan_width);
	COPY_SCALAR_FIELD(plan.parallel_aware);
	COPY_SCALAR_FIELD(plan.parallel_safe);
	COPY_SCALAR_FIELD(plan.async_capable);
	COPY_SCALAR_FIELD(plan.plan_node_id);
	COPY_NODE_FIELD(plan.targetlist);
	COPY_NODE_FIELD(plan.qual);
	COPY_NODE_FIELD(plan.lefttree);
	COPY_NODE_FIELD(plan.righttree);
	COPY_NODE_FIELD(plan.initPlan);
	COPY_BITMAPSET_FIELD(plan.extParam);
	COPY_BITMAPSET_FIELD(plan.allParam);
	COPY_SCALAR_FIELD(num_workers);
	COPY_SCALAR_FIELD(rescan_param);
	COPY_SCALAR_FIELD(single_copy);
	COPY_SCALAR_FIELD(invisible);
	COPY_BITMAPSET_FIELD(initParam);

	return newnode;
}

static GatherMerge *
_copyGatherMerge(const GatherMerge *from)
{
	GatherMerge *newnode = makeNode(GatherMerge);

	COPY_SCALAR_FIELD(plan.startup_cost);
	COPY_SCALAR_FIELD(plan.total_cost);
	COPY_SCALAR_FIELD(plan.plan_rows);
	COPY_SCALAR_FIELD(plan.plan_width);
	COPY_SCALAR_FIELD(plan.parallel_aware);
	COPY_SCALAR_FIELD(plan.parallel_safe);
	COPY_SCALAR_FIELD(plan.async_capable);
	COPY_SCALAR_FIELD(plan.plan_node_id);
	COPY_NODE_FIELD(plan.targetlist);
	COPY_NODE_FIELD(plan.qual);
	COPY_NODE_FIELD(plan.lefttree);
	COPY_NODE_FIELD(plan.righttree);
	COPY_NODE_FIELD(plan.initPlan);
	COPY_BITMAPSET_FIELD(plan.extParam);
	COPY_BITMAPSET_FIELD(plan.allParam);
	COPY_SCALAR_FIELD(num_workers);
	COPY_SCALAR_FIELD(rescan_param);
	COPY_SCALAR_FIELD(numCols);
	COPY_POINTER_FIELD(sortColIdx, from->numCols * sizeof(AttrNumber));
	COPY_POINTER_FIELD(sortOperators, from->numCols * sizeof(Oid));
	COPY_POINTER_FIELD(collations, from->numCols * sizeof(Oid));
	COPY_POINTER_FIELD(nullsFirst, from->numCols * sizeof(bool));
	COPY_BITMAPSET_FIELD(initParam);

	return newnode;
}

static Hash *
_copyHash(const Hash *from)
{
	Hash *newnode = makeNode(Hash);

	COPY_SCALAR_FIELD(plan.startup_cost);
	COPY_SCALAR_FIELD(plan.total_cost);
	COPY_SCALAR_FIELD(plan.plan_rows);
	COPY_SCALAR_FIELD(plan.plan_width);
	COPY_SCALAR_FIELD(plan.parallel_aware);
	COPY_SCALAR_FIELD(plan.parallel_safe);
	COPY_SCALAR_FIELD(plan.async_capable);
	COPY_SCALAR_FIELD(plan.plan_node_id);
	COPY_NODE_FIELD(plan.targetlist);
	COPY_NODE_FIELD(plan.qual);
	COPY_NODE_FIELD(plan.lefttree);
	COPY_NODE_FIELD(plan.righttree);
	COPY_NODE_FIELD(plan.initPlan);
	COPY_BITMAPSET_FIELD(plan.extParam);
	COPY_BITMAPSET_FIELD(plan.allParam);
	COPY_NODE_FIELD(hashkeys);
	COPY_SCALAR_FIELD(skewTable);
	COPY_SCALAR_FIELD(skewColumn);
	COPY_SCALAR_FIELD(skewInherit);
	COPY_SCALAR_FIELD(rows_total);

	return newnode;
}

static SetOp *
_copySetOp(const SetOp *from)
{
	SetOp *newnode = makeNode(SetOp);

	COPY_SCALAR_FIELD(plan.startup_cost);
	COPY_SCALAR_FIELD(plan.total_cost);
	COPY_SCALAR_FIELD(plan.plan_rows);
	COPY_SCALAR_FIELD(plan.plan_width);
	COPY_SCALAR_FIELD(plan.parallel_aware);
	COPY_SCALAR_FIELD(plan.parallel_safe);
	COPY_SCALAR_FIELD(plan.async_capable);
	COPY_SCALAR_FIELD(plan.plan_node_id);
	COPY_NODE_FIELD(plan.targetlist);
	COPY_NODE_FIELD(plan.qual);
	COPY_NODE_FIELD(plan.lefttree);
	COPY_NODE_FIELD(plan.righttree);
	COPY_NODE_FIELD(plan.initPlan);
	COPY_BITMAPSET_FIELD(plan.extParam);
	COPY_BITMAPSET_FIELD(plan.allParam);
	COPY_SCALAR_FIELD(cmd);
	COPY_SCALAR_FIELD(strategy);
	COPY_SCALAR_FIELD(numCols);
	COPY_POINTER_FIELD(dupColIdx, from->numCols * sizeof(AttrNumber));
	COPY_POINTER_FIELD(dupOperators, from->numCols * sizeof(Oid));
	COPY_POINTER_FIELD(dupCollations, from->numCols * sizeof(Oid));
	COPY_SCALAR_FIELD(flagColIdx);
	COPY_SCALAR_FIELD(firstFlag);
	COPY_SCALAR_FIELD(numGroups);

	return newnode;
}

static LockRows *
_copyLockRows(const LockRows *from)
{
	LockRows *newnode = makeNode(LockRows);

	COPY_SCALAR_FIELD(plan.startup_cost);
	COPY_SCALAR_FIELD(plan.total_cost);
	COPY_SCALAR_FIELD(plan.plan_rows);
	COPY_SCALAR_FIELD(plan.plan_width);
	COPY_SCALAR_FIELD(plan.parallel_aware);
	COPY_SCALAR_FIELD(plan.parallel_safe);
	COPY_SCALAR_FIELD(plan.async_capable);
	COPY_SCALAR_FIELD(plan.plan_node_id);
	COPY_NODE_FIELD(plan.targetlist);
	COPY_NODE_FIELD(plan.qual);
	COPY_NODE_FIELD(plan.lefttree);
	COPY_NODE_FIELD(plan.righttree);
	COPY_NODE_FIELD(plan.initPlan);
	COPY_BITMAPSET_FIELD(plan.extParam);
	COPY_BITMAPSET_FIELD(plan.allParam);
	COPY_NODE_FIELD(rowMarks);
	COPY_SCALAR_FIELD(epqParam);

	return newnode;
}

static Limit *
_copyLimit(const Limit *from)
{
	Limit *newnode = makeNode(Limit);

	COPY_SCALAR_FIELD(plan.startup_cost);
	COPY_SCALAR_FIELD(plan.total_cost);
	COPY_SCALAR_FIELD(plan.plan_rows);
	COPY_SCALAR_FIELD(plan.plan_width);
	COPY_SCALAR_FIELD(plan.parallel_aware);
	COPY_SCALAR_FIELD(plan.parallel_safe);
	COPY_SCALAR_FIELD(plan.async_capable);
	COPY_SCALAR_FIELD(plan.plan_node_id);
	COPY_NODE_FIELD(plan.targetlist);
	COPY_NODE_FIELD(plan.qual);
	COPY_NODE_FIELD(plan.lefttree);
	COPY_NODE_FIELD(plan.righttree);
	COPY_NODE_FIELD(plan.initPlan);
	COPY_BITMAPSET_FIELD(plan.extParam);
	COPY_BITMAPSET_FIELD(plan.allParam);
	COPY_NODE_FIELD(limitOffset);
	COPY_NODE_FIELD(limitCount);
	COPY_SCALAR_FIELD(limitOption);
	COPY_SCALAR_FIELD(uniqNumCols);
	COPY_POINTER_FIELD(uniqColIdx, from->uniqNumCols * sizeof(AttrNumber));
	COPY_POINTER_FIELD(uniqOperators, from->uniqNumCols * sizeof(Oid));
	COPY_POINTER_FIELD(uniqCollations, from->uniqNumCols * sizeof(Oid));

	return newnode;
}

static PlanRowMark *
_copyPlanRowMark(const PlanRowMark *from)
{
	PlanRowMark *newnode = makeNode(PlanRowMark);

	COPY_SCALAR_FIELD(rti);
	COPY_SCALAR_FIELD(prti);
	COPY_SCALAR_FIELD(rowmarkId);
	COPY_SCALAR_FIELD(markType);
	COPY_SCALAR_FIELD(allMarkTypes);
	COPY_SCALAR_FIELD(strength);
	COPY_SCALAR_FIELD(waitPolicy);
	COPY_SCALAR_FIELD(isParent);

	return newnode;
}

static PartitionPruneInfo *
_copyPartitionPruneInfo(const PartitionPruneInfo *from)
{
	PartitionPruneInfo *newnode = makeNode(PartitionPruneInfo);

	COPY_NODE_FIELD(prune_infos);
	COPY_BITMAPSET_FIELD(other_subplans);

	return newnode;
}

static PartitionedRelPruneInfo *
_copyPartitionedRelPruneInfo(const PartitionedRelPruneInfo *from)
{
	PartitionedRelPruneInfo *newnode = makeNode(PartitionedRelPruneInfo);

	COPY_SCALAR_FIELD(rtindex);
	COPY_BITMAPSET_FIELD(present_parts);
	COPY_SCALAR_FIELD(nparts);
	COPY_POINTER_FIELD(subplan_map, from->nparts * sizeof(int));
	COPY_POINTER_FIELD(subpart_map, from->nparts * sizeof(int));
	COPY_POINTER_FIELD(relid_map, from->nparts * sizeof(Oid));
	COPY_NODE_FIELD(initial_pruning_steps);
	COPY_NODE_FIELD(exec_pruning_steps);
	COPY_BITMAPSET_FIELD(execparamids);

	return newnode;
}

static PartitionPruneStepOp *
_copyPartitionPruneStepOp(const PartitionPruneStepOp *from)
{
	PartitionPruneStepOp *newnode = makeNode(PartitionPruneStepOp);

	COPY_SCALAR_FIELD(step.step_id);
	COPY_SCALAR_FIELD(opstrategy);
	COPY_NODE_FIELD(exprs);
	COPY_NODE_FIELD(cmpfns);
	COPY_BITMAPSET_FIELD(nullkeys);

	return newnode;
}

static PartitionPruneStepCombine *
_copyPartitionPruneStepCombine(const PartitionPruneStepCombine *from)
{
	PartitionPruneStepCombine *newnode = makeNode(PartitionPruneStepCombine);

	COPY_SCALAR_FIELD(step.step_id);
	COPY_SCALAR_FIELD(combineOp);
	COPY_NODE_FIELD(source_stepids);

	return newnode;
}

static PlanInvalItem *
_copyPlanInvalItem(const PlanInvalItem *from)
{
	PlanInvalItem *newnode = makeNode(PlanInvalItem);

	COPY_SCALAR_FIELD(cacheId);
	COPY_SCALAR_FIELD(hashValue);

	return newnode;
}

static Integer *
_copyInteger(const Integer *from)
{
	Integer *newnode = makeNode(Integer);

	COPY_SCALAR_FIELD(ival);

	return newnode;
}

static Float *
_copyFloat(const Float *from)
{
	Float *newnode = makeNode(Float);

	COPY_STRING_FIELD(fval);

	return newnode;
}

static Boolean *
_copyBoolean(const Boolean *from)
{
	Boolean *newnode = makeNode(Boolean);

	COPY_SCALAR_FIELD(boolval);

	return newnode;
}

static String *
_copyString(const String *from)
{
	String *newnode = makeNode(String);

	COPY_STRING_FIELD(sval);

	return newnode;
}

static BitString *
_copyBitString(const BitString *from)
{
	BitString *newnode = makeNode(BitString);

	COPY_STRING_FIELD(bsval);

	return newnode;
}

static ForeignKeyCacheInfo *
_copyForeignKeyCacheInfo(const ForeignKeyCacheInfo *from)
{
	ForeignKeyCacheInfo *newnode = makeNode(ForeignKeyCacheInfo);

	COPY_SCALAR_FIELD(conoid);
	COPY_SCALAR_FIELD(conrelid);
	COPY_SCALAR_FIELD(confrelid);
	COPY_SCALAR_FIELD(nkeys);
	COPY_ARRAY_FIELD(conkey);
	COPY_ARRAY_FIELD(confkey);
	COPY_ARRAY_FIELD(conpfeqop);

	return newnode;
}
