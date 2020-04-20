#pragma once
#include <stdio.h>

class BSTree{
 private:
  Node *root;

 public:
  BSTree();
  void insert(int d);
  void insert_help(Node* c, int val);

  std::string get_debug_string();
  std::string get_debug_string_helper(Node * n);
  void setup();
};
