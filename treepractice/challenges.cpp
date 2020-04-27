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
  // else{
  //   if(n->getLeft() == nullptr){
  //     return num_leaves(n->getRight());
  //   }
  //   else if(n->getRight() == nullptr){
  //     return num_leaves(n->getLeft());
  //   }
    else{
      return num_leaves(n->getLeft()) + num_leaves(n->getRight());
    }
  // }

}
