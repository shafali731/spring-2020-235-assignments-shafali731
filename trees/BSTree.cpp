#include <iostream>
#include "Node.h"
#include "BSTree.h"
#include <string>

BSTree::BSTree(){
  root = nullptr;
}

void BSTree::insert(int d){
  // insert new nodes as a leaf
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
std::string BSTree::gds_helper(Node *n){
  std::string a,b,c;

  if (n==nullptr){
    return "";
  } else {
    a =  gds_helper(n->getLeft());
    b = std::to_string(n->getData());
    c =  gds_helper(n->getRight());
    return a + ", " + b+ ", " + c;


  }
}
std::string BSTree::get_debug_string(){
  std::string ret = "";
  if (root == nullptr){
    return "";
  }
  else{
    // return get_debug_string_helper(root);
    return gds_helper(root);
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
void BSTree::delete_a(int value){
  delete_h(root, value);
}

void BSTree::delete_h(Node *n,int value){
  if (root==nullptr){
    return;
  }
  Node *t = n;
  Node *t2 = nullptr;
  while (t!=nullptr && t->getData()  != value){ // t is the value u want to remove, t2 is the parent
    t2 = t;

    if (t->getData() < value)
      t = t->getRight();
    else
      t = t->getLeft();
  }
  if (t== nullptr || t->getData()!=value){ // if the value doesn't exist
    return;
  }
  else if(t->getData()==value && t->getLeft()==nullptr && t->getRight()==nullptr){ // if t is a leaf
    if(t2 != nullptr &&t2->getLeft()== t){
      t2->setLeft(nullptr);
    }
    else if(t2 != nullptr &&t2->getRight()== t){
      t2->setRight(nullptr);
    }
    else{
      delete t;
    }
  }
  //if t has one child
  else if((t->getLeft()==nullptr && t->getRight()!=nullptr)|| (t->getLeft()!=nullptr && t->getRight()==nullptr)){
    Node * temp;
    if (t2->getRight()== t){ //if t is to the right of the parent node
      if(t->getLeft()!=nullptr){
        temp = t->getLeft();
        t2->setRight(temp);
      }
      else{
        temp = t->getRight();
        t2->setRight(temp);
      }

      // t->setLeft(nullptr);
      delete t;
    }
    else{ // if t is to the left of the parent node 
      if(t->getLeft()!=nullptr){
        temp = t->getLeft();
        t2->setLeft(temp);
      }
      else{
        temp = t->getRight();
        t2->setLeft(temp);
      }
      // t->setRight(nullptr);
      delete t;
    }
    }
  else{
   //get the largest on left subtree

      Node * temp = t->getLeft();
      while(temp != nullptr && temp->getRight()!= nullptr){
        temp = temp->getRight();
      } //temp is the node we are going to replace t with
      t->setData(temp->getData());
      // std::cout << "DELETING " << t->getLeft()->getData() << " " << temp->getData() << '\n';
      if(t->getLeft()->getData() == temp->getData()){ // if the directly next one is the one to be deleted, set it to null
        t->setLeft(nullptr);
      }
      else{delete_h(t->getLeft(), temp->getData());}
    }
}
