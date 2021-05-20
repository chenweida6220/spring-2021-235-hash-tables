#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "List.h"
#include "HTable.h"

HTable *table = new HTable(5);

TEST_CASE("testing hash") {
  CHECK(table->hash("a") == 2);
  CHECK(table->hash("b") == 3);
  CHECK(table->hash("c") == 4);
}

TEST_CASE("testing insert and has_key") {
  table->insert("d");
  table->insert("e");

  CHECK(table->has_key("d") == true);
  CHECK(table->has_key("e") == 1);

  CHECK(table->has_key("a") == false);
  CHECK(table->has_key("b") == 0);
  CHECK(table->has_key("c") == false);
}
