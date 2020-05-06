#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <iostream>
#include <string>
#include "doctest.h"
#include "Heap.h"

TEST_CASE("sift up"){
  int arr[7] = {7, 4, 6,0, 3, 4, 6};
  Heap * h = new Heap(arr, 7);
  // std::cout << "fehf" << '\n';
  h->siftUp();
  CHECK(h->printHeap() == "0 3 4 4 7 6 6 ");
}
TEST_CASE("remove min"){
  int arr[7] = {7, 4, 6,0, 3, 4, 6};
  Heap * h = new Heap(arr, 7);
  // std::cout << "fehf" << '\n';
  h->siftUp();
  h->removeMin();
  CHECK(h->printHeap() == "0 3 4 4 6 6 7 ");
}
