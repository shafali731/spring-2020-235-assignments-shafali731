#include <iostream>
#include "Node.h"
#include "BSTree.h"
#include <string>

BSTree::BSTree(){
  root = nullptr;
}

void BSTree::insert(int d){
  // Node* temp = root;
  // Node * n = new Node(d);
  // if(temp->getLeft() == nullptr && temp->getRight()== nullptr){ // if there are no children
  //   temp->setLeft(n);
  // }
  // else if(temp->getLeft() == nullptr && temp->getRight()!= nullptr){ // if only has a right child
  //   temp->setLeft(n);
  // }
  // else if(temp->getLeft() != nullptr && temp->getRight()== nullptr){ // if only has a left child
  //   temp->setRight(n);
  // }
  // else{
  //   while(temp->getLeft() != nullptr && temp->getRight() != nullptr){
  //     temp->setLeft(n);
  //   }
  //   while(temp->getLeft() != nullptr && temp->getRight() == nullptr){
  //     temp->setRight(n);
  //   }
  //   while(temp->getLeft() == nullptr && temp->getRight() == nullptr){
  //
  //   }
}
std::string BSTree::get_debug_string_helper(Node * n){
  if(n == nullptr){
    return "";
  }
  return (std::to_string(n->getData()) + " " + get_debug_string_helper(n->getLeft()) + get_debug_string_helper(n->getRight()));
}
std::string BSTree::get_debug_string(){
  std::string ret = "";
  if (root == nullptr){
    return "";
  }
  else{
    return get_debug_string_helper(root);
  }
  // ret +=  " " + std::to_string(root->getData()) + "\n";
  // if (root->getLeft() != nullptr){
  //    ret += std::to_string(root->getLeft()->getData()) + " ";
  // }
  // if (root->getRight() != nullptr){
  //      ret += std::to_string(root->getRight()->getData()) + " ";
  //   }
  //   return ret;
}
void BSTree::setup(){
  Node *n = new Node(10);
  root = n;
  n = new Node(20);
  root->setLeft(n);
  n = new Node(30);
  root->setRight(n);
  Node * h = new Node(40);
  n->setLeft(h);
  Node * g = new Node(50);
  n->setRight(g);

}
