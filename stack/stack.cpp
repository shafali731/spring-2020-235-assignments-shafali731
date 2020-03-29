#include <iostream>
#include <vector>
#include "stack.h"
#include "List.h"
#include "Node.h"


/*
Implement the stack using a singly linked list.
Implement the following routines:
void push(int)
int pop()
int top()
bool is_empty()
int[] get_vector()
int[] initialize(int[] a] <– adds all the elements in a to the stack
void swap() <– swaps the top two elements of the stack.
*/
/* what a stack does:
- first in last out
- push -> inserts to the relative top, but that becomes the bottom for others stacked on top
- pop -> removes top element
*/
void stack::push(int item){
  l.insert(item);
  leng++;
  // topindex++;
}

int stack::pop(){
  // int tmp = a[topindex-1];
  // topindex--;
  if(leng >0){
    int temp = top();
    l.remove(0);
    leng--;
    // std::cout << "TEMP" << temp << '\n';
    return temp;
  }
  return -1;
}

int stack::top(){
  if(leng ==0){
    return -1;
  }
  // std::cout << "L OF 0"<<l[0] << '\n';
  return l[0];
}
bool stack::is_empty(){
  return (leng == 0);
}
std::vector<int> stack::get_vector(){
  std::vector<int> v;
  int temp =0;
  // std::cout << "iuhue" << '\n';
  // std::cout << "/* message */" << '\n';
  while(temp != leng){
    // std::cout << "u" << '\n';
    v.push_back(l[temp]);
    temp++;
  }
  return v;
}
std::vector<int> stack::initialize(std::vector<int> a){
  // std::cout << "fhehi" << '\n';
  for(int i =0; i<a.size(); i++){
    // std::cout << "/* message */" << '\n';
    push(a[i]);
  }
  return a;
}
void stack::swap(){
  if(leng >=2){
    int temp0 = l[0];
    int temp1 = l[1];
    // std::cout << "TEMP " << temp << '\n';
    pop();
    pop();
    push(temp0);
    push(temp1);
  }
}
