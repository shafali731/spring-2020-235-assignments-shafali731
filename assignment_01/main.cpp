#include <iostream>
#include "List.h"
int main()
{
  List *l = new List();

  // l->insert("one");
  // l->insert("two");
  // l->insert("three");
  //  l->insert("four");
  //
  //  std::cout << l->length() << " items in the list.\n";
  //  std::cout << l->getDebugString() << "\n";
  //
  //   l->insert("five");
  //  l->insert("six");
  //  l->insert("seven");

   // std::cout << l->length() << " items in the list.\n";
   // std::cout << l->getDebugString() << "\n";
   // int i = 3;

   l->pushback("one");
   std::cout << l->getDebugString() << "\n";
   l->pushback("two");
   std::cout << l->getDebugString() << "\n";
   l->pushback("three");
   std::cout << l->getDebugString() << "\n";
   l->pushback("four");
   std::cout << l->getDebugString() << "\n";
   l->remove(0);
   std::cout << l->getDebugString() << "\n";
    std::string temp = (*l)[3];
   std::cout << temp << '\n';
   std::cout << (*l)[2] << '\n';

   delete l;
   std::cout << "The end\n";
   return 0;
}
