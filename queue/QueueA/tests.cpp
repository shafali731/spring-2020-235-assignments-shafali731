#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <iostream>
#include <string>
#include "doctest.h"
#include "Node.h"
#include "QueueA.h"

TEST_CASE("empty queue"){
  QueueA *a = new QueueA();
  CHECK(a->is_empty() == 1);
  try{
    a->dequeue();
  }
  catch(int e){
    CHECK(e == 20);
  }
}

TEST_CASE("enqueue"){
  QueueA *a = new QueueA();
  a->enqueue(1);
  CHECK(a->prin() == "1| 0| 0| 0| 0| ");
  a->enqueue(2);
  CHECK(a->prin() == "1| 2| 0| 0| 0| ");
  a->enqueue(3);
  CHECK(a->prin() == "1| 2| 3| 0| 0| ");
  a->enqueue(4);
  CHECK(a->prin() == "1| 2| 3| 4| 0| ");
  a->enqueue(5);
  CHECK(a->prin() == "1| 2| 3| 4| 5| ");

}
TEST_CASE("dequeue"){
  QueueA *a = new QueueA();
  a->enqueue(1);
  a->enqueue(2);
  a->enqueue(3);
  a->enqueue(4);
  a->enqueue(5);
  CHECK(a->dequeue() == 1);
  CHECK(a->prin() == "0| 2| 3| 4| 5| ");
  CHECK(a->dequeue() == 2);
  CHECK(a->prin() == "0| 0| 3| 4| 5| ");
  CHECK(a->dequeue() == 3);
  CHECK(a->prin() == "0| 0| 0| 4| 5| ");
  CHECK(a->dequeue() == 4);
  CHECK(a->prin() == "0| 0| 0| 0| 5| ");
  CHECK(a->dequeue() == 5);
  CHECK(a->prin() == "0| 0| 0| 0| 0| ");
}

TEST_CASE("rotation"){
  QueueA *a = new QueueA();
  a->enqueue(1);
  a->enqueue(2);
  a->enqueue(3);
  a->enqueue(4);
  a->enqueue(5);
  a->dequeue();
  a->dequeue();
  a->dequeue();
  CHECK(a->prin() == "0| 0| 0| 4| 5| ");
  a->enqueue(6);
  CHECK(a->prin() == "6| 0| 0| 4| 5| ");
  a->enqueue(7);
  CHECK(a->prin() == "6| 7| 0| 4| 5| ");
  a->enqueue(8);
  CHECK(a->prin() == "6| 7| 8| 4| 5| ");
  a->enqueue(9);
  CHECK(a->prin() == "4| 5| 6| 7| 8| 9| 0| 0| 0| 0| ");
  a->enqueue(10);
  CHECK(a->prin() == "4| 5| 6| 7| 8| 9| 10| 0| 0| 0| ");
  a->enqueue(11);
  CHECK(a->prin() == "4| 5| 6| 7| 8| 9| 10| 11| 0| 0| ");
  a->enqueue(12);
  CHECK(a->prin() == "4| 5| 6| 7| 8| 9| 10| 11| 12| 0| ");
}
