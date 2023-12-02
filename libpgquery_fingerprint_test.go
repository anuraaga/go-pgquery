package pg_query_test

import (
	"strings"
	"testing"

	pg_query "github.com/wasilibs/go-pgquery"
)

// https://github.com/pganalyze/libpg_query/blob/15-latest/test/fingerprint_tests.c
var libpgqueryFingerprintTests = []string{
	"SELECT 1",
	"50fde20626009aba",
	"SELECT 2",
	"50fde20626009aba",
	"SELECT $1",
	"50fde20626009aba",
	"SELECT 1; SELECT a FROM b",
	"3efa3b10d558d06d",
	"SELECT COUNT(DISTINCT id), * FROM targets WHERE something IS NOT NULL AND elsewhere::interval < now()",
	"26b6553101185d22",
	"INSERT INTO test (a, b) VALUES ($1, $2)",
	"51e63b8083b48bdd",
	"INSERT INTO test (b, a) VALUES ($1, $2)",
	"51e63b8083b48bdd",
	"INSERT INTO test (a, b) VALUES (ARRAY[$1, $2, $3, $4], $5::timestamptz), (ARRAY[$6, $7, $8, $9], $10::timestamptz), ($11, $12::timestamptz)",
	"4dfdd5260cac5acf",
	"SELECT b AS x, a AS y FROM z",
	"1a8bf5d7614de3a5",
	"SELECT * FROM x WHERE y = $1",
	"4ff39426bd074231",
	"SELECT * FROM x WHERE y = ANY ($1)",
	"4ff39426bd074231",
	"SELECT * FROM x WHERE y IN ($1)",
	"4ff39426bd074231",
	"SELECT * FROM x WHERE y IN ($1, $2, $3)",
	"4ff39426bd074231",
	"SELECT * FROM x WHERE y IN ( $1::uuid )",
	"4ff39426bd074231",
	"SELECT * FROM x WHERE y IN ( $1::uuid, $2::uuid, $3::uuid )",
	"4ff39426bd074231",
	"PREPARE a123 AS SELECT a",
	"9b5e6ead8be993e8",
	"EXECUTE a123",
	"44ef1d2beabd53e8",
	"DEALLOCATE a123",
	"d8a65a814fbc5f95",
	"DEALLOCATE ALL",
	"d8a65a814fbc5f95",
	"EXPLAIN ANALYZE SELECT a",
	"82845c1b5c6102e5",
	"WITH a AS (SELECT * FROM x WHERE x.y = $1 AND x.z = 1) SELECT * FROM a",
	"6831e38bbb3dd18c",
	"CREATE TABLE types (a float(2), b float(49), c NUMERIC(2, 3), d character(4), e char(5), f varchar(6), g character varying(7))",
	"008d6ba4aa0f4c6e",
	"CREATE VIEW view_a (a, b) AS WITH RECURSIVE view_a (a, b) AS (SELECT * FROM a(1)) SELECT \"a\", \"b\" FROM \"view_a\"",
	"c6ef6b9f498feda4",
	"VACUUM FULL my_table",
	"fdf2f4127644f4d8",
	"SELECT * FROM x AS a, y AS b",
	"4e9acae841dae228",
	"SELECT * FROM y AS a, x AS b",
	"4e9acae841dae228",
	"SELECT x AS a, y AS b FROM x",
	"65dff5f5e9a643ad",
	"SELECT y AS a, x AS b FROM x",
	"65dff5f5e9a643ad",
	"SELECT x, y FROM z",
	"330267237da5535f",
	"SELECT y, x FROM z",
	"330267237da5535f",
	"INSERT INTO films (code, title, did) VALUES ('UA502', 'Bananas', 105), ('T_601', 'Yojimbo', DEFAULT)",
	"459fdc70778b841e",
	"INSERT INTO films (code, title, did) VALUES ($1, $2, $3)",
	"459fdc70778b841e",
	"SELECT * FROM a",
	"fcf44da7b597ef43",
	"SELECT * FROM a AS b",
	"fcf44da7b597ef43",
	"UPDATE users SET one_thing = $1, second_thing = $2 WHERE users.id = $1",
	"a0ea386c1cfd1e69",
	"UPDATE users SET something_else = $1 WHERE users.id = $1",
	"3172bc3e0d631d55",
	"UPDATE users SET something_else = (SELECT a FROM x WHERE uid = users.id LIMIT 1) WHERE users.id = $1",
	"f1127a8b91fbecbf",
	"SAVEPOINT some_id",
	"8ebd566ea1bf947b",
	"RELEASE some_id",
	"60d618658252d2af",
	"PREPARE TRANSACTION 'some_id'",
	"d993959a33d627d4",
	"START TRANSACTION READ WRITE",
	"4ca25828c835d55a",
	"DECLARE cursor_123 CURSOR FOR SELECT * FROM test WHERE id = 123",
	"d2bec62d2a7ec7cb",
	"FETCH 1000 FROM cursor_123",
	"37f4d2f6a957ae48",
	"CLOSE cursor_123",
	"2c7963684fc2bad9",
	"-- nothing",
	"d8d13f8b2da6c9ad",
	"CREATE FOREIGN TABLE ft1 () SERVER no_server",
	"74481c4af7c76be1",
	"UPDATE x SET a = 1, b = 2, c = 3",
	"fd5c248c0e642ce4",
	"UPDATE x SET z = now()",
	"a222eaabaa1e7cb1",
	"CREATE TEMPORARY TABLE my_temp_table (test_id integer NOT NULL) ON COMMIT DROP",
	"1407ed5c5bb00967",
	"CREATE TEMPORARY TABLE my_temp_table AS SELECT 1",
	"695ebe73a3abc45c",
	"SELECT INTERVAL (0) $2",
	"50fde20626009aba",
	"SELECT INTERVAL (2) $2",
	"50fde20626009aba",
	"SELECT * FROM t WHERE t.a IN (1, 2) AND t.b = 3",
	"346aea01be9173b6",
	"SELECT * FROM t WHERE t.b = 3 AND t.a IN (1, 2)",
	"346aea01be9173b6",
	"SELECT * FROM t WHERE a && '[1,2]'",
	"673f199f13dfe665",
	"SELECT * FROM t WHERE a && '[1,2]'::int4range",
	"673f199f13dfe665",
	"SELECT * FROM t_20210301_x",
	"6f8169980cd70a25",
	"SELECT * FROM t_20210302_x",
	"6f8169980cd70a25",
	"SELECT * FROM t_20210302_y",
	"d357dac4a24fcf1b",
	"SELECT * FROM t_1",
	"018bd9230646143e",
	"SELECT * FROM t_2",
	"3f1444da570c1a66",
	"CREATE OR REPLACE FUNCTION pg_temp.testfunc(OUT response \"mytable\", OUT sequelize_caught_exception text) RETURNS RECORD AS $func_12345$ BEGIN INSERT INTO \"mytable\" (\"mycolumn\") VALUES ('myvalue') RETURNING * INTO response; EXCEPTION WHEN unique_violation THEN GET STACKED DIAGNOSTICS sequelize_caught_exception = PG_EXCEPTION_DETAIL; END $func_12345$ LANGUAGE plpgsql; SELECT (testfunc.response).\"mycolumn\", testfunc.sequelize_caught_exception FROM pg_temp.testfunc(); DROP FUNCTION IF EXISTS pg_temp.testfunc();",
	"18e71bc17baea13b",
	"CREATE PROCEDURE insert_data(a integer, b integer) LANGUAGE SQL AS $$ INSERT INTO tbl VALUES (a); INSERT INTO tbl VALUES (b); $$;",
	"a0ac17049fee8e96",
	"DO $$DECLARE r record; BEGIN FOR r IN SELECT table_schema, table_name FROM information_schema.tables WHERE table_type = 'VIEW' AND table_schema = 'public' LOOP EXECUTE 'GRANT ALL ON ' || quote_ident(r.table_schema) || '.' || quote_ident(r.table_name) || ' TO webuser'; END LOOP; END$$;",
	"f936eab75b8c1b90",
	"LISTEN virtual",
	"6e5bf26e5fc272a5",
	"UNLISTEN virtual",
	"9348a760200458ff",
	"UNLISTEN *",
	"9348a760200458ff",
	"NOTIFY virtual",
	"92f42ef7b6fa8f62",
	"UPDATE tbl SET doc = jsonb_set(jsonb_set(jsonb_set(jsonb_set(jsonb_set(jsonb_set(jsonb_set(jsonb_set(jsonb_set(jsonb_set(jsonb_set(jsonb_set(jsonb_set(jsonb_set(jsonb_set(jsonb_set(jsonb_set(jsonb_set(jsonb_set(jsonb_set(jsonb_set(jsonb_set(jsonb_set(jsonb_set(jsonb_set(jsonb_set(jsonb_set(jsonb_set(jsonb_set(jsonb_set(jsonb_set(jsonb_set(jsonb_set(jsonb_set(jsonb_set(jsonb_set(doc, ARRAY[$1], $2, $3), ARRAY[$4], $5, $6), ARRAY[$7], $8, $9), ARRAY[$10], $11, $12), ARRAY[$13], $14, $15), ARRAY[$16], $17, $18), ARRAY[$19], $20, $21), ARRAY[$22], $23, $24), ARRAY[$25], $26, $27), ARRAY[$28], $29, $30), ARRAY[$31], $32, $33), ARRAY[$34], $35, $36), ARRAY[$37], $38, $39), ARRAY[$40], $41, $42), ARRAY[$43], $44, $45), ARRAY[$46], $47, $48), ARRAY[$49], $50, $51), ARRAY[$52], $53, $54), ARRAY[$55], $56, $57), ARRAY[$58], $59, $60), ARRAY[$61], $62, $63), ARRAY[$64], $65, $66), ARRAY[$67], $68, $69), ARRAY[$70], $71, $72), ARRAY[$73], $74, $75), ARRAY[$76], $77, $78), ARRAY[$79], $80, $81), ARRAY[$82], $83, $84), ARRAY[$85], $86, $87), ARRAY[$88], $89, $90), ARRAY[$91], $92, $93), ARRAY[$94], $95, $96), ARRAY[$97], $98, $99), ARRAY[$100], $101, $102), ARRAY[$103], $104, $105), ARRAY[$106], $107, $108)",
	"b7dbf54ce62af0ca",
	"SELECT DISTINCT id FROM mytable",
	"3a7e897d3710fa93",
	"SELECT DISTINCT ON (id) id FROM mytable",
	"44bc30469a1802ea",
	"SELECT id FROM mytable",
	"40991573eb85c5f6",
	"4a6db94fbada8341",
	"MERGE into measurement m USING new_measurement nm ON (m.city_id = nm.city_id and m.logdate=nm.logdate) WHEN MATCHED AND nm.peaktemp IS NULL THEN DELETE WHEN MATCHED THEN UPDATE SET peaktemp = greatest(m.peaktemp, nm.peaktemp), unitsales = m.unitsales + coalesce(nm.unitsales, 0) WHEN NOT MATCHED THEN INSERT (city_id, logdate, peaktemp, unitsales) VALUES (city_id, logdate, peaktemp, unitsales)",
	"3a5494404465d0f9",
	"ALTER TABLE ALL IN TABLESPACE foo OWNED BY bar, quux SET TABLESPACE fred NOWAIT",
	"1bcfca993d29bc0f",
	"CREATE PUBLICATION foo FOR TABLES IN SCHEMA bar",
	"7dfa0872d08125e6",
	"COPY vistest FROM stdin FREEZE CSV",
	"25de297c6377cb74",
	"MERGE INTO customer_account ca USING (VALUES (1, 42), (2, 99)) t(customer_id, transaction_value) ON t.customer_id = ca.customer_id WHEN MATCHED THEN UPDATE SET balance = balance + transaction_value + 1 WHEN NOT MATCHED THEN INSERT (customer_id, balance) VALUES (t.customer_id, t.transaction_value)",
	"1cca3f304295181c",
}

// https://github.com/pganalyze/libpg_query/blob/15-latest/test/fingerprint.c
func TestLibPgqueryFingerprint(t *testing.T) {
	tests := libpgqueryFingerprintTests
	for i := 0; i < len(tests); i += 2 {
		input := tests[i]
		expected := tests[i+1]
		name := input
		if len(name) > 60 {
			name = input[:60]
		}
		t.Run(name, func(t *testing.T) {
			actual, err := pg_query.Fingerprint(input)
			if err != nil {
				t.Errorf("unexpected error: %v", err)
			} else if actual != expected {
				t.Errorf("expected %q, got %q", expected, actual)
			}
		})
	}

	errInput := "SELECT !"
	t.Run(errInput, func(t *testing.T) {
		_, err := pg_query.Fingerprint(errInput)
		if err == nil {
			t.Errorf("expected error, got nil")
		} else if !strings.Contains(err.Error(), "syntax error at end of input") {
			t.Errorf("unexpected error: %v", err)
		}
	})
}