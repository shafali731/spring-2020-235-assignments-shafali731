/*
Assignment:

Take the linked list code we wrote in class and add the following
features:

1. overload [] to access and return the nth element from the list.

2. pushback(std::string s) which will add s to the end of the list (as
opposed to what our insert did.

3. remove(int i) which will remove the iden at location i. If the
location doesn't exist the function will do nothing.

4. Optional - make the overloaded [] return a reference parameter so it
can be used to change a value as well - see the code we wrote last
semester as an example.

These routines just have to do something reasonable for error condiitons
(return an empty string or just return for instance).


Use a Makefile and have a target "tests" which will build docstring
tests that show your code works.
*************************************************************************
copy over your linked list code or use the reference code from classcode
and convert it to a doubly linked list.

Specifically, instead of head, you should have either a pointer just to
current (the current node) or if you want, current, front, and back.

Rewrite the code for the methods that operate on the list.
**************************************************************************
*/

#include <iostream>
#include <string>
#include "List.h"
#include "Node.h"

List::List(){
  // head = nullptr;
  len=0;
  curr = nullptr;
}

List::~List(){

  std::cout << "In the destructor\n";
  // Node *t;
  // while (head != nullptr){
  //   t = head;
  //   head=head->getNext();
  //   delete t;
  //   }
  while(curr->getPrev() != nullptr){
    curr = curr->getPrev();
  }
  Node *t;
  // while (curr != nullptr){
    t = curr;
    curr=curr->getNext();
    delete t;
    // }
}
void List::insert(std::string data){
  // // make the new node
  // Node *t = new Node(data);
  //
  // // insert it into the list
  // t->setNext(head);
  // head = t;
  // // update the length
  // len++;
  // make the new node
  Node *t = new Node(data);
  Node *i;
  i = curr;
  // insert it into the list
  // std::cout << "len: "<<len << '\n';
  if(len==0){
    curr = t;
  }
  else{
  while(i->getPrev() != nullptr){
    // std::cout << "hi"<<i->getPrev()->getData() << '\n';
    i = i->getPrev();
  }
  i->setPrev(t);
  t->setNext(i);
  curr = t;
}
  // update the length
  len++;
}
void List::pushback(std::string s){
  Node *t = new Node(s);
  Node *i;
  if (len ==0){
    curr = t;
  }
  else{
    i = curr;
    while(i->getNext() != nullptr){
      i= i->getNext();
    }
    i->setNext(t);
    t->setPrev(i);
    curr = t;
  }
  len++;
  // Node *t = new Node(s);
  // Node *i;
  // if (len ==0){
  //   head = t;
  // }
  // else{
  //   i = head;
  //   while(i->getNext() != nullptr){
  //     i= i->getNext();
  //   }
  //   i->setNext(t);
  // }
  // len++;
}
int List::findIndex(){
  Node *t;
  int i = 0;
  t = curr;
  while(t->getPrev() != nullptr){
    i ++;
    t = t->getPrev();
  }
  return i;
}
void List::remove(int i){
  Node *t;
  // curr= curr->getNext()->getNext();
  int a = findIndex();
  // std::cout << "current index: "<< a<< "index want: " << i<< '\n';

  if(len ==0 || i> len-1){
    return;
  }
  // std::cout << "t "<< head <<"t get next" <<  head->getNext() << '\n';
  if (i==0){
    if(a==0){ // if curr is at the start
      t = curr;
      curr = curr->getNext();
      curr->setPrev(nullptr);
      // std::cout << "curr data: " << curr->getData()<< '\n';
      delete t;
    }
    else{
      while(a!=1){
        curr = curr->getPrev();
        t = curr;
        a--;
      }
      t = t->getPrev();
      curr->setPrev(nullptr);
      delete t;
    }
    }

  else{
    t= curr;
    if(a < i){
      while(a != i-1){
        t = t->getNext();
        // std::cout << t->getData() << '\n';
        a++;
      }
      if(t->getNext()->getNext() == nullptr){ // if removing at the end
        t->setNext(nullptr);
      }
      else{
        t->setNext(t->getNext()->getNext());
        // std::cout << "t next " << t->getNext()->getData() << '\n';
        (t->getNext())->setPrev(t);
        // std::cout << "t prev " << t->getPrev()->getData() << '\n';
      }
    }
    else{
      while(a != i+1){
        t = t->getPrev();
        a--;
      }
        t->setPrev(t->getPrev()->getPrev());
        (t->getPrev())->setNext(t);
    }
  }
  // std::cout << "curr: " <<findIndex()  << curr->getData()<< '\n';
  len--;
}
//
 std::string List::operator[](int i){
   Node *t;
   t = curr;
   std::string n = "";
   if(i >=len || i <0){
     return n;
   }
   int a = findIndex();
   if(a<i){
     while(a!=i){
       t= t->getNext();
       a++;
     }
   }
   else{
     while(a!=i){
       t=t->getPrev();
       a--;
     }
   }
   n = t->getData();
   return n;
  // Node *t;
  // t = head;
  // std::string n = "";
  // if(i >=len || i <0){
  //   return n;
  // }
  // for(int a = 0; a < i; a++){
  //   t= t->getNext();
  // }
  // n = t -> getData();
  //   return n;
}

std::string List::getDebugString(){
  // Node *t;
  // t = head;
  // std::string result="";
  // while (t != nullptr){
  //   result = result + t->getData() + "-->";
  //   t = t->getNext();
  // }
  // result = result + "null";
  //
  // return result;
  Node *t;
  // std::cout << " curr  " << curr->getData() << '\n';
  // std::cout << "curr" << curr->getNext()->getData() << '\n';

  while(curr->getPrev() != nullptr){
    // std::cout << "curr 22xs" << curr->getData() << '\n';
    curr= curr->getPrev();
  }
  t = curr;
  // std::cout << "curr is now " << t->getData() << '\n';
  // std::cout << "after curr " << t->getNext()->getData() << '\n';
  std::string result="null<--";
  while (t != nullptr){
    result = result + t->getData() + "<-->";
    t = t->getNext();
  }
  result = result + "null";

  return result;
}

int List::length(){
  // Node *t = head;
  // int l = 0;
  // while (t!=nullptr){
  //   t=t->getNext();
  //   l++;
  // }
  // return l;
  return len;
}
