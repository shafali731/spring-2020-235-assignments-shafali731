#pragma once
#include <string>

class QueueA{
 private:
   int head;
   int tail;
   int *arr;
   int cap;
   int size;
 public:
  QueueA();
  void enqueue(int data);
  int dequeue();
  bool is_empty();
  std::string prin();
};
 /*
 implement enqueue(int data) which adds an item to the back of the queue
implement int dequeue() which removes and returns the item from the front of the queue
implement the necessary constructor
implement bool is_empty() for both versions
*/
