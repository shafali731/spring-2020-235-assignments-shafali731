#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <iostream>
#include <string>
#include "doctest.h"
#include "Node.h"
#include "funcs.h"

TEST_CASE("REVERSE"){
  Node *a = new Node(1);
  Node *b = new Node(3);
  Node *c = new Node(6);
  Node *d = new Node(8);
  a->setNext(b);
  b->setNext(c);
  c->setNext(d);
  CHECK(getString(a) == "1-->3-->6-->8-->null");
  Node * rev = reverse(a);
  CHECK(getString(rev) == "8-->6-->3-->1-->null");

}

TEST_CASE("MERGE"){
  Node *a = new Node(1);
  Node *b = new Node(3);
  Node *c = new Node(6);
  Node *d = new Node(8);
  a->setNext(b);
  b->setNext(c);
  c->setNext(d);
  CHECK(getString(a) == "1-->3-->6-->8-->null");
  Node *e = new Node(2);
  Node *f = new Node(3);
  Node *g = new Node(4);
  Node *h = new Node(5);
  e->setNext(f);
  f->setNext(g);
  g->setNext(h);
  CHECK(getString(e) =="2-->3-->4-->5-->null");
  Node * res = merge(a,e);
  CHECK(getString(res)== "1-->2-->3-->3-->4-->5-->6-->8-->null" );

}
