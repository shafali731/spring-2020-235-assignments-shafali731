#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <iostream>
#include <string>
#include "doctest.h"
#include "Node.h"
#include "List.h"

TEST_CASE("[] and pushback"){
  List *l = new List();
  l->pushback("one");
  l->pushback("two");
  l->pushback("three");
  l->pushback("four");
  l->pushback("five");

  CHECK((*l)[0] == "one");
  CHECK((*l)[1] == "two");
  CHECK((*l)[2] == "three");
  CHECK((*l)[3] == "four");
  CHECK((*l)[4] == "five");
  CHECK((*l)[5] == "");
  CHECK((*l)[-1] == "");

}
TEST_CASE("insert"){
  List *l = new List();
  l->insert("one");
  l->insert("two");
  l->insert("three");
  l->insert("four");
  l->insert("five");

  CHECK((*l)[0] == "five");
  CHECK((*l)[1] == "four");
  CHECK((*l)[2] == "three");
  CHECK((*l)[3] == "two");
  CHECK((*l)[4] == "one");
  CHECK((*l)[5] == "");
  CHECK((*l)[-1] == "");

}

TEST_CASE("remove"){
  List *l = new List();
  l->pushback("one");
  l->pushback("two");
  l->pushback("three");
  l->pushback("four");
  l->pushback("five");
  CHECK(l->getDebugString() == "null<--one<-->two<-->three<-->four<-->five<-->null");
  l->remove(4);
  CHECK(l->getDebugString() == "null<--one<-->two<-->three<-->four<-->null");
  l->remove(1);
  CHECK(l->getDebugString() == "null<--one<-->three<-->four<-->null");
  l->remove(2);
  CHECK(l->getDebugString() == "null<--one<-->three<-->null");
  l->remove(0);
  CHECK(l->getDebugString() == "null<--three<-->null");
}
TEST_CASE("remove"){
  List *l = new List();
  l->insert("one");
  l->insert("two");
  l->insert("three");
  l->insert("four");
  l->insert("five");
  CHECK(l->getDebugString() == "null<--five<-->four<-->three<-->two<-->one<-->null");
  l->remove(4);
  CHECK(l->getDebugString() == "null<--five<-->four<-->three<-->two<-->null");
  l->remove(1);
  CHECK(l->getDebugString() == "null<--five<-->three<-->two<-->null");
  l->remove(2);
  CHECK(l->getDebugString() == "null<--five<-->three<-->null");
  l->remove(0);
  CHECK(l->getDebugString() == "null<--three<-->null");
}
