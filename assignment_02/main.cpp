#include <iostream>
#include "List.h"
int main()
{
  List *l = new List();

   l->insert("one");
   // std::cout << l->getDebugString() << '\n';
   l->insert("two");
   l->insert("three");
   l->pushback("four");
   std::cout << l->getDebugString() << '\n';
   l->remove(3);
   std::cout << l->getDebugString() << '\n';
   std::cout << (*l)[0] << '\n';
   std::cout << (*l)[1] << '\n';
   std::cout << (*l)[2] << '\n';
   l->remove(1);
   std::cout << l->getDebugString() << '\n';
   std::cout << (*l)[1] << '\n';

   l->pushback("one");
   l->pushback("two");
   l->pushback("three");
   l->pushback("four");
   l->pushback("five");
   std::cout << l->getDebugString() << '\n';

   l->remove(4);
   std::cout << l->getDebugString() << '\n';
   l->insert("one");
   l->insert("two");
   l->insert("three");
   l->insert("four");
   l->insert("five");
   std::cout << l->getDebugString() << '\n';

   delete l;
   std::cout << "The end\n";
   return 0;
}
