#pragma once
#include <string>
class MaxHeap {
private:
  int * maxHeap;
  int size;
public:
  MaxHeap();
  void insert(int val);
  int getSize();
  int getRoot();
  void removeRoot();
  void siftUp();
  void siftUpHelper(int index, int g);
  void sortHelp(int index, int remaining);
  void removeMin();
  void removeMinHelper(int index, int * arr);
  int getVal(int index);
  // void removeMinHelper(int index, int * arr, int s);
  std::string printHeap();

};
