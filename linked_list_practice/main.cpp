#include <iostream>
#include "Node.h"
#include "funcs.h"

int main()
{
  Node *a = new Node(1);
  Node *b = new Node(3);
  Node *c = new Node(6);
  Node *d = new Node(8);
  a->setNext(b);
  b->setNext(c);
  c->setNext(d);
  std::cout << getString(a) << '\n';
  // std::cout << (reverse(a))->getData()<< '\n';
   // std::cout << getString(d) << '\n';
   Node *e = new Node(2);
   Node *f = new Node(3);
   Node *g = new Node(4);
   Node *h = new Node(5);
   e->setNext(f);
   f->setNext(g);
   g->setNext(h);
   std::cout << getString(e) << '\n';
   Node * res = merge(a,e);
   std::cout << getString(res) << '\n';
   Node * rev = reverse(res);
   std::cout << getString(rev) << '\n';

   // std::cout << getString(a) << '\n';
   // std::cout << l->getDebugString() << '\n';

   return 0;
}
