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
  void insert(std::string data);
  void pushback(std::string s);
  std::string getDebugString();
  int length();
  void remove(int i);
  std::string operator[](int i);


};
