#include <iostream>
#include <string>
#include "Node.h"
#include "QueueA.h"
#define EMPTY_QUEUE 20

/*
implement enqueue(int data) which adds an item to the back of the queue
implement int dequeue() which removes and returns the item from the front of the queue
implement the necessary constructor
implement bool is_empty() for both versions
*/

QueueA::QueueA(){
  head = 0;
  tail = 0;
  size = 0;
  cap = 5;
  arr = new int[5];
  for(int i = 0; i< cap; i++){
    arr[i] = 0;
  }
}

void QueueA::enqueue(int data){
  if(is_empty()){
    arr[0] = data;
    tail = 1;
    head = 0;
    for(int i = 1; i<cap ; i++){
      arr[i] = 0;
    }
  }
  else if(size == cap){
    int *b = new int[cap*2];
    cap = cap *2;
    int nex = 0;
    // std::cout << "BBBBBB" << '\n';
    for(int i = 0; i < size-head; i++){
      b[i] = arr[head+i];
      nex++;
      // std::cout << b[i] << " ||";
      // std::cout << "arr: " <<b[i] << " |";
    }
    // std::cout << "nexxxxx" << nex << '\n';
    // std::cout << '\n';
    // std::cout << "uefhiuhefiuhwiufhihwfuhuhweuiiu_________________" << '\n';
    if(tail <= head){
      // std::cout << "HUFIIFEHIUHERiuHFIUHRIUFH+++++++  " << '\n';
      for(int t = 0; t < tail; t++){
        b[nex] = arr[t];
        // std::cout << b[nex] << " ||";

        nex++;
      }
      // std::cout << "nexx" <<nex << '\n';
      // std::cout  << '\n';
    }
    b[nex] = data;
    for(int u = nex+1; u<cap; u++){
      b[u] = 0;
    }
    // std::cout << "BBB ARRAY " << '\n';
    // for(int i =0; i<cap; i++){
    //   // std::cout << b[i] << '\n';
    // }
    // b[size] = data;
    tail = nex + 1;
    head = 0;
    delete[] arr;
    arr = b;
  }
  else if(tail == cap){
    arr[0] = data;
    tail =1;
  }
  else{
    arr[tail] = data;
    // std::cout << "tail "  << tail << '\n';
    tail +=1;
  }
  size = size +1;
  // std::cout << "size" << size << '\n';
  // std::cout << "size: " << size << '\n';
  // std::cout << "headd: " << head<< '\n';
  // std::cout << "ttail: " << tail << '\n';
}

int QueueA::dequeue(){

  // int ret = arr[tail-1];
  // arr[tail-1] = 0;
  // tail -=1;
  // return ret;
  int ret = -1;
  if(is_empty()){
    throw EMPTY_QUEUE;
    // return ret;
  }
  if(head == cap && size !=0){
    // std::cout << "ehufuehiu" << '\n';
    ret = arr[0];
    arr[0] = 0;
    head = 1;
  }
  else{
    // std::cout << "ijdoiwjoij" << '\n';
    ret = arr[head];
    // std::cout << "RET = " << ret << '\n';
    arr[head] = 0;
    head +=1;
  }
  size = size -1;
  // std::cout << "HEAD: " << head << '\n';
  // std::cout << "SIZE: " << size <<  '\n';
  // std::cout << "TAIL::" << tail << '\n';

  return ret;
}
bool QueueA::is_empty(){
  return (size ==0);
}

std::string QueueA::prin(){
  std::string ret = "";
  for(int i = 0; i < cap; i++){
    ret += std::to_string(arr[i]) + "| ";
  }
  return ret;
  // std::cout << '\n';
}
