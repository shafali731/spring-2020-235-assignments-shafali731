#include <iostream>
#include "Node.h"
#include "BSTree.h"

int main(){
  Node *t = new Node(10);
  Node * a = new Node(20);
  t->setLeft(a);
  std::cout << t->getData() << '\n';
  std::cout << (t->getLeft())->getData() << '\n';
  Node *a2 = new Node(50);
  t->setRight(a2);
  std::cout << (t->getRight())->getData() << '\n';
  Node * b = new Node(30);
  a->setLeft(b);
  std::cout << (t->getLeft()->getLeft())->getData() << '\n';
  Node * c = new Node(60);
  a2->setLeft(c);
  std::cout << (t->getRight()->getLeft())->getData() << '\n';
  Node * d = new Node(40);
  b->setLeft(d);
  std::cout << (t->getLeft()->getLeft()->getLeft())->getData() << '\n';

  BSTree *f = new BSTree();
  f->setup();
  std::cout << f->get_debug_string() << "\n";
  return 0;
}
