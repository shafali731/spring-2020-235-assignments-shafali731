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

TEST_CASE("remove"){
  List *l = new List();
  l->pushback("one");
  l->pushback("two");
  l->pushback("three");
  l->pushback("four");
  l->pushback("five");

  l->remove(4);
  CHECK(l->getDebugString() == "one-->two-->three-->four-->null");
  l->remove(1);
  CHECK(l->getDebugString() == "one-->three-->four-->null");
  l->remove(2);
  CHECK(l->getDebugString() == "one-->three-->null");
  l->remove(0);
  CHECK(l->getDebugString() == "three-->null");


}
