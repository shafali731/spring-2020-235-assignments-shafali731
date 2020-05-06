#include <iostream>
#include "Heap.h"
#include <string>

Heap::Heap(int * arr, int num){
  heap = arr;
  size = num;
}
void Heap::siftUpHelper(int index, int s){
  if(index == s-1){
    return;
  }
  int curr = index;
  int left = index*2+1;
  int right = index*2+2;
  if(left<s && heap[curr]> heap[left]){
    curr = left;
  }
  if(right<s && heap[curr]> heap[right]){
    curr = right;
  }
  if(curr!= index){
    int temp = heap[index];
    heap[index]= heap[curr];
    heap[curr] = temp;
    siftUpHelper(curr, s);
  }
}
void Heap::siftUp(){
  for(int i =(size/2-1); i>=0; i--){
    siftUpHelper(i, size);
  }
}
// void Heap::removeMinHelper(int index, int * arr, int g){
//   if(g <0){
//     return;
//   }
//   arr[index] = heap[0];
//   heap[0] = heap[g];
//   heap[g] = arr[index];
//   for(int i =(g/2)-1; i>=0; i--){
//     siftUpHelper(i, g);
//   }
//   removeMinHelper(index+=1, arr, g-=1);
// }
void Heap::removeMinHelper(int index, int * arr){
  if(size-1 <0){
    return;
  }
  arr[index] = heap[0];
  heap[0] = heap[size-1];
  heap[size-1] = arr[index];
  for(int i =(size/2)-1; i>=0; i--){
    siftUpHelper(i, size-1);
  }
  size -=1;
  removeMinHelper(index+=1, arr);
}
void Heap::removeMin(){
  int s = size;
  int * sortedArr = new int[size];
  removeMinHelper(0, sortedArr);
  heap = sortedArr;
  size = s;
}
std::string Heap::printHeap(){
  std::string ret = "";
  for(int i =0; i< size; i++){
    // std::cout << heap[i] << '\n';
    ret += std::to_string(heap[i]);
    ret += " ";
  }
  return ret;

}
