#pragma once
#include <stdio.h>

class BSTree{
 private:
  Node *root;

 public:
  BSTree();
  Node * getRoot();
  void insert(int d);
  void insert_help(Node* c, int val);
  void delete_h(Node *n,int value);
  void delete_a(int value);
  std::string get_debug_string();
  std::string get_debug_string_helper(Node * n);
  std::string gds_helper(Node * n);
  void setup();
};
