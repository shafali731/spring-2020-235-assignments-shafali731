#pragma once

#include <string>
#include "Node.h"

class List{
 private:
  Node *head;
  int len;
 public:
  List();
  ~List();
  void insert(int data);
  void pushback(int s);
  std::string getDebugString();
  int length();
  void remove(int i);
  int operator[](int i);
  // void number_list(int num);


};
