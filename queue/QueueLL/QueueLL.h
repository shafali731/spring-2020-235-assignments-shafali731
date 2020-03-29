#pragma once

class QueueLL{
 private:
   Node *head, *tail;
   int len;
 public:
  QueueLL();
  ~QueueLL();
  void enqueue(int data);
  int dequeue();
  bool is_empty();
  std::string getDebugString();
};
 /*
 implement enqueue(int data) which adds an item to the back of the queue
implement int dequeue() which removes and returns the item from the front of the queue
implement the necessary constructor
implement a destructor for the linked list version
implement bool is_empty() for both versions
*/
