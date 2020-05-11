#pragma once
#include <string>
class MinHeap {
private:
  int * minHeap;
  int size;
public:
  MinHeap();
  void insert(int val);
  int getSize();
  int getRoot();
  void removeRoot();
  void siftUp();
  void siftUpHelper(int index, int g);
  void sortHelp(int index, int remaining);
  std::string printHeap();


};
