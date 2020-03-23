#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <iostream>
#include <string>
#include<vector>
#include "doctest.h"
#include "Node.h"
#include "List.h"
#include "stack.h"

TEST_CASE("is empty"){
  stack *a = new stack;
  CHECK(a->is_empty() ==1);
  a->push(0);
  CHECK(a->is_empty()==0);
}
TEST_CASE("push and top"){
  stack *a = new stack;
  CHECK(a->top() == -1);
  a->push(0);
  a->push(1);
  CHECK(a->top()==1);
}

TEST_CASE("pop and get_vector and top"){
  stack *a = new stack;
  CHECK(a->top() == -1);
  a->push(0);
  a->push(1);
  std::vector<int> v;
  v.push_back(1);
  v.push_back(0);
  CHECK(a->get_vector()==v);
  CHECK(a->pop() == 1);
  CHECK(a->top()==0);
}

TEST_CASE("initialize and swap"){
  stack *a = new stack;
  std::vector<int> v;
  v.push_back(0);
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  a->initialize(v);
  std::vector<int> c;
  c.push_back(3);
  c.push_back(2);
  c.push_back(1);
  c.push_back(0);
  CHECK(a->get_vector() == c);
  a->swap();
  std::vector<int> e;
  e.push_back(2);
  e.push_back(3);
  e.push_back(1);
  e.push_back(0);
  CHECK(a->get_vector() == e);
}
