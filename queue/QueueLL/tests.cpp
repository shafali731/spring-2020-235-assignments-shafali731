#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <iostream>
#include <string>
#include "doctest.h"
#include "Node.h"
#include "QueueLL.h"

TEST_CASE("constructor"){
  QueueLL *l = new QueueLL();
  CHECK(l->is_empty() == 1);
}

TEST_CASE("enqueue"){
  QueueLL *l = new QueueLL();
  l->enqueue(1);
  CHECK(l->getDebugString() == "1-->null");
  l->enqueue(2);
  CHECK(l->getDebugString() == "1-->2-->null");
  l->enqueue(3);
  CHECK(l->getDebugString() == "1-->2-->3-->null");
  l->enqueue(4);
  CHECK(l->getDebugString() == "1-->2-->3-->4-->null");
  l->enqueue(5);
  CHECK(l->getDebugString() == "1-->2-->3-->4-->5-->null");
  CHECK(l->is_empty()== 0);
}

TEST_CASE("dequeue"){
  QueueLL *l = new QueueLL();
  l->enqueue(1);
  l->enqueue(2);
  l->enqueue(3);
  l->enqueue(4);
  l->enqueue(5);
  CHECK(l->dequeue() == 1);
  CHECK(l->getDebugString() == "2-->3-->4-->5-->null");
  CHECK(l->dequeue() == 2);
  CHECK(l->getDebugString() == "3-->4-->5-->null");
  CHECK(l->dequeue() == 3);
  CHECK(l->getDebugString() == "4-->5-->null");
  CHECK(l->dequeue() == 4);
  CHECK(l->getDebugString() == "5-->null");
  CHECK(l->dequeue() == 5);
  CHECK(l->getDebugString() == "null");
  CHECK(l->is_empty() == 1);
  try{
    l->dequeue();
  }
  catch(int e){
    CHECK(e == 20);
  }
}

TEST_CASE("deconstructor"){
  QueueLL *l = new QueueLL();
  l->enqueue(1);
  l->enqueue(2);
  l->enqueue(3);
  l->enqueue(4);
  l->enqueue(5);
  l->~QueueLL();
  CHECK(l->is_empty() == 1);
}
