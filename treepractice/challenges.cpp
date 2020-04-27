#include <iostream>
#include "Node.h"
#include "BSTree.h"
#include "challenges.h"

int num_nodes(Node * n){
  if(n == nullptr){
    return 0;
  }
  else{
    return 1 + num_nodes(n->getLeft()) + num_nodes(n->getRight());
  }
}

int sum_nodes(Node * n){
  if(n == nullptr){
    return 0;
  }
  else{
    return n->getData() + sum_nodes(n->getLeft()) + sum_nodes(n->getRight());
  }
}

int num_leaves(Node * n){
  if(n==nullptr){
    return 0;
  }
  if(n->getLeft() == nullptr && n->getRight() == nullptr){
    return 1;
  }
  else{
    return num_leaves(n->getLeft()) + num_leaves(n->getRight());
  }
}

int height(Node * n){
  if(n==nullptr){
    return 0;
  }
  int right = height(n->getRight());
  int left = height(n->getLeft());
  int height;
  if (right> left){
    height = right;
  }
  else{
    height = left;
  }
  return 1 + height; 
}
