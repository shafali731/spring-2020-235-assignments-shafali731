#include <iostream>
#include "Node.h"
#include "BSTree.h"

int main(){
  //Node *t = new Node(10);
  // Node * a = new Node(20);
  // t->setLeft(a);
  // std::cout << t->getData() << '\n';
  // std::cout << (t->getLeft())->getData() << '\n';
  // Node *a2 = new Node(50);
  // t->setRight(a2);
  // std::cout << (t->getRight())->getData() << '\n';
  // Node * b = new Node(30);
  // a->setLeft(b);
  // std::cout << (t->getLeft()->getLeft())->getData() << '\n';
  // Node * c = new Node(60);
  // a2->setLeft(c);
  // std::cout << (t->getRight()->getLeft())->getData() << '\n';
  // Node * d = new Node(40);
  // b->setLeft(d);
  // std::cout << (t->getLeft()->getLeft()->getLeft())->getData() << '\n';
  //
  // BSTree *f = new BSTree();
  // f->setup();
  // std::cout << f->get_debug_string() << "\n";
  BSTree * s = new BSTree();
  s->insert(10);
  s->insert(20);
  s->insert(30);
  s->insert(5);
  s->insert(17);
  s->insert(22);
  s->insert(35);
  s->insert(40);
  s->insert(8);
  s->insert(2);
  s->insert(9);
  s->insert(3);
  s->insert(4);
  std::cout<<s->get_debug_string()<<"\n";
  // std::cout << t->gds_helper() << '\n';

  // t->delete_a(10);
  s->delete_a(20);
  // std::cout << t->gds_helper() << '\n';
  std::cout<<s->get_debug_string()<<"\n";
  return 0;
}
