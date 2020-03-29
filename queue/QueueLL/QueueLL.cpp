#include <iostream>
#include <string>
#include "Node.h"
#include "QueueLL.h"
#define EMPTY_QUEUE 20

/*
implement enqueue(int data) which adds an item to the back of the queue
implement int dequeue() which removes and returns the item from the front of the queue
implement the necessary constructor
implement a destructor for the linked list version
implement bool is_empty() for both versions
*/

QueueLL::QueueLL(){
  head = nullptr;
  tail = nullptr;
  len = 0;
}

QueueLL::~QueueLL(){
  std::cout << "In the destructor\n";
  Node *t;
  int u = len;
  while (u != 0){
    t = head;
    head=head->getNext();
    delete t;
    len --;
    u--;
    }
}

void QueueLL::enqueue(int data){
  Node *n = new Node(data);
  if(len == 0){
    head = n;
    tail = n;
  }
  else{
  tail->setNext(n);
  tail = tail->getNext(); }
  len +=1;
}

int QueueLL::dequeue(){
  if(len == 0){
    throw EMPTY_QUEUE; 
  }
  Node *t = head;
  int ret = t->getData();
  head = head->getNext();
  delete t;
  len -=1;
  return ret;

}

bool QueueLL::is_empty(){
  return (len ==0);
}
std::string QueueLL::getDebugString(){
  Node *t;
  t = head;
  int u = len;
  std::string result="";
  while (u != 0){
    result = result + std::to_string(t->getData()) + "-->";
    t = t->getNext();
    u--;
  }
  result = result + "null";

  return result;
}
