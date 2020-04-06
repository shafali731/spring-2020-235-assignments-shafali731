#include <iostream>
#include "Node.h"
#include "funcs.h"
#include <string>

Node *reverse(Node *l){
  Node *temp = l;
  Node * prev = nullptr;
  Node * next = nullptr;
  while(temp!= nullptr){
    next = temp->getNext();
    temp->setNext(prev);
    prev = temp;
    temp = next;
    }
  return prev;
}

Node *merge(Node *a, Node *b){
  Node * head = nullptr;
  Node * temp = nullptr;
  if(a->getData() <= b->getData()){
    head = a;
    a = a->getNext();
  }
  else{
    head = b;
    b = b->getNext();
  }
  temp = head;
  while(a!= nullptr && b!= nullptr){
    if(a->getData() <= b->getData()){
      temp->setNext(a);
      a = a->getNext();
    }
    else{
      temp->setNext(b);
      b = b->getNext();
    }
    temp = temp->getNext();
  }
  if (a == nullptr){
      temp->setNext(b);
    }
  else {
      temp->setNext(a);
  }
  return head;
}

std::string getString(Node*a){
  std::string s = "";
  Node * temp = a;
  while(temp !=nullptr){
    s+= std::to_string(temp->getData()) + "-->";
    temp = temp->getNext();
  }
  s+= "null";
  return s;
}
