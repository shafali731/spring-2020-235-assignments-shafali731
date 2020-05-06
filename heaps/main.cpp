#include <iostream>
#include "Heap.h"

int main(){
  // int arr[6] = {7, 4, 6, 3, 5, 2};
  // Heap * h = new Heap(arr, 6);
  // // std::cout << "fehf" << '\n';
  // h->siftUp();
  // // std::cout << "fehf" << '\n';
  // for(int i = 0; (i<sizeof(arr)/sizeof(arr[0]));i++){
  //   std::cout << arr[i] << '\n';
  // }
  // std::cout << "=========" << '\n';
  // h->removeMin();
  // // for(int i = 0; (i<sizeof(arr)/sizeof(arr[0]));i++){
  // //   std::cout << arr[i] << '\n';
  // // }
  // std::cout << h->printHeap();
  int arr[7] = {7, 4, 6,0, 3, 4, 6};
  Heap * h = new Heap(arr, 7);
  // std::cout << "fehf" << '\n';
  h->siftUp();
  // std::cout << "fehf" << '\n';
  for(int i = 0; (i<sizeof(arr)/sizeof(arr[0]));i++){
    std::cout << arr[i] << '\n';
  }
  std::cout << "=========" << '\n';
  h->removeMin();
  // for(int i = 0; (i<sizeof(arr)/sizeof(arr[0]));i++){
  //   std::cout << arr[i] << '\n';
  // }
  std::cout << h->printHeap();
  // int arr[8] = {7, 4, 6, 3, 5, 2, 1, 9};
  // Heap * h = new Heap(arr, 8);
  // // std::cout << "fehf" << '\n';
  // h->siftUp();
  // // std::cout << "fehf" << '\n';
  // for(int i = 0; (i<sizeof(arr)/sizeof(arr[0]));i++){
  //   std::cout << arr[i] << '\n';
  // }
  // std::cout << "=========" << '\n';
  // h->removeMin();
  // // for(int i = 0; (i<sizeof(arr)/sizeof(arr[0]));i++){
  // //   std::cout << arr[i] << '\n';
  // // }
  // std::cout << h->printHeap();
  // return 0;
}
