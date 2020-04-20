#include <iostream>
#include "Node.h"
#include "BSTree.h"
#include <string>

BSTree::BSTree(){
  root = nullptr;
}

void BSTree::insert(int d){
  // insert new nodes as a leaf
  // std::cout << "auhfiuhe" << '\n';
  Node *n = new Node(d);

  if (root==nullptr){
    root = n;
    return;
    }
  insert_help(root, d);
  }
void BSTree::insert_help(Node * c, int val){
    Node *n=new Node(val);
    if(c->getData()>val){
      if(c->getLeft()==nullptr){
         c->setLeft(n);
      }
      else{
         return insert_help(c->getLeft(),val);
      }
   }
   else{
      if(c->getRight()==nullptr){
         c->setRight(n);
      }
      else{
         return insert_help(c->getRight(),val);
      }
  }
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
