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

int sum_at_level(Node * n, int level){
  if(n == nullptr){
    return 0;
  }
  if(level == 0){
    return n->getData();
  }
  else{
    return sum_at_level(n->getLeft(), level-1) + sum_at_level(n->getRight(), level-1);
  }
}

int root_to_leaf(Node *n){
  if (n == nullptr){
      return 0;
    }
  int left = root_to_leaf(n->getLeft());
  int right = root_to_leaf(n->getRight());
  int path;

  if (right > left){
    path = right;
  }
  else {
    path = left;
  }

  return n->getData() + path;
}
