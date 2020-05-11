#include <iostream>
#include "MinHeap.h"

MinHeap::MinHeap(){
  minHeap = new int[10] ;
  size = 0;
}
int MinHeap::getRoot(){
  return minHeap[0];
}
void MinHeap::insert(int val){
  minHeap[size] = val;
  size++;
  siftUp();
}
int MinHeap::getSize(){
  return size;
}
void MinHeap::removeRoot(){
  int temp = minHeap[0];
  minHeap[0] = minHeap[size-1];
  minHeap[size-1] = temp;
  size--;
  siftUp();
}
void MinHeap::siftUpHelper(int index, int s){
  if(index == s-1){
    return;
  }
  int curr = index;
  int left = index*2+1;
  int right = index*2+2;
  if(left<s && minHeap[curr]> minHeap[left]){
    curr = left;
  }
  if(right<s && minHeap[curr]> minHeap[right]){
    curr = right;
  }
  if(curr!= index){
    int temp = minHeap[index];
    minHeap[index]= minHeap[curr];
    minHeap[curr] = temp;
    siftUpHelper(curr, s);
  }
}
void MinHeap::siftUp(){
  for(int i =(size/2-1); i>=0; i--){
    siftUpHelper(i, size);
  }
}
std::string MinHeap::printHeap(){
  std::string ret = "";
  for(int i =0; i< size; i++){
    ret += std::to_string(minHeap[i]);
    ret += " ";
  }
  return ret;

}
