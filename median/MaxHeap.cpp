#include <iostream>
#include "MaxHeap.h"
#include <string>

MaxHeap::MaxHeap(){
  maxHeap = new int[10];
  size = 0;
}
int MaxHeap::getRoot(){
  return maxHeap[0];
}
void MaxHeap::insert(int val){
  maxHeap[size] = val;
  size++;
  siftUp();
}
int MaxHeap::getSize(){
  return size;
}
void MaxHeap::removeRoot(){
  int temp = maxHeap[0];
  maxHeap[0] = maxHeap[size-1];
  maxHeap[size-1] = temp;
  size--;
  siftUp();
}
void MaxHeap::siftUpHelper(int index, int s){
  if(index == s-1){
    return;
  }
  int curr = index;
  int left = index*2+1;
  int right = index*2+2;
  if(left<s && maxHeap[curr]< maxHeap[left]){
    curr = left;
  }
  if(right<s && maxHeap[curr]< maxHeap[right]){
    curr = right;
  }
  if(curr!= index){
    int temp = maxHeap[index];
    maxHeap[index]= maxHeap[curr];
    maxHeap[curr] = temp;
    siftUpHelper(curr, s);
  }
}
void MaxHeap::siftUp(){
  for(int i =(size/2-1); i>=0; i--){
    siftUpHelper(i, size);
  }
}
std::string MaxHeap::printHeap(){
  std::string ret = "";
  for(int i =0; i< size; i++){
    ret += std::to_string(maxHeap[i]);
    ret += " ";
  }
  return ret;

}
