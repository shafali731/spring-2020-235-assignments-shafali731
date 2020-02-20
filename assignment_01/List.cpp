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
*/

#include <iostream>
#include <string>
#include "List.h"
#include "Node.h"

List::List(){
  head = nullptr;
  len=0;
}

List::~List(){

  std::cout << "In the destructor\n";
  Node *t;
  while (head != nullptr){
    t = head;
    head=head->getNext();
    delete t;
    }
}
void List::insert(std::string data){
  // make the new node
  Node *t = new Node(data);

  // insert it into the list
  t->setNext(head);
  head = t;
  // update the length
  len++;
}
void List::pushback(std::string s){
  Node *t = new Node(s);
  Node *i;
  if (len ==0){
    head = t;
  }
  else{
    i = head;
    while(i->getNext() != nullptr){
      i= i->getNext();
    }
    i->setNext(t);
  }
  len++;
}
void List::remove(int i){
  Node *t;

  if(len ==0){
    // t= head->getNext();
    // delete head;
    return;
  }
  std::cout << "t "<< head <<"t get next" <<  head->getNext() << '\n';
  if (i==0){head= (head->getNext());}

  else{
    t= head;

    for(int a = 0; a<i-1; a++){
      std::cout << a << '\n';
      std::cout << t->getData() << '\n';
      t = (t->getNext());
    }
  if(t->getNext()== nullptr){
    return;
  }
    t->setNext(t->getNext()->getNext());

  }
  len--;
}

 std::string List::operator[](int i){
  Node *t;
  t = head;
  std::string n = "";
  if(i >=len || i <0){
    return n;
  }
  for(int a = 0; a < i; a++){
    t= t->getNext();
  }
  n = t -> getData();
    return n;
}

std::string List::getDebugString(){
  Node *t;
  t = head;
  std::string result="";
  while (t != nullptr){
    result = result + t->getData() + "-->";
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
