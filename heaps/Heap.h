#pragma once
#include <string>
class Heap {
private:
  int * heap;
  int size;
public:
  Heap(int * arr, int num);
  void siftUp();
  void siftUpHelper(int index, int g);
  void sortHelp(int index, int remaining);
  void removeMin();
  void removeMinHelper(int index, int * arr);
  // void removeMinHelper(int index, int * arr, int s);
  std::string printHeap();

};
