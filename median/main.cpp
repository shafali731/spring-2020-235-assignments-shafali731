#include <iostream>
#include "MinHeap.h"
#include "MaxHeap.h"
#include <string>

void addNumber(int number, MaxHeap * lowers, MinHeap * highers){
  if(lowers->getSize()==0|| number < lowers->getRoot()){
    lowers->insert(number);
  }
  else{
    highers->insert(number);
  }
}
void rebalance(MaxHeap* lowers, MinHeap * highers){
  if((lowers->getSize()- highers->getSize()) >=2){
    highers->insert(lowers->getRoot());
    lowers->removeRoot();
  }
  else if((highers->getSize()- lowers->getSize()) >=2){
    lowers->insert(highers->getRoot());
    highers->removeRoot();
  }
}
double getMedian(MaxHeap * lowers, MinHeap * highers){
  if(lowers->getSize()== highers->getSize()){
    return ((lowers->getRoot()+highers->getRoot())/2.0);
  }
  else if(lowers->getSize() > highers->getSize()){
    return (double)lowers->getRoot();
  }
    return (double)highers->getRoot();
}
std::string printArr(double arr[], int size){
  std::string ret = "";
  for(int i =0; i< size; i++){
    ret += std::to_string(arr[i]);
    ret += " ";
  }
  return ret;

}
std::string printArr(int arr[], int size){
  std::string ret = "";
  for(int i =0; i< size; i++){
    ret += std::to_string(arr[i]);
    ret += " ";
  }
  return ret;

}
double* getMedians(int num, int size, double * medians, MaxHeap * lowers, MinHeap * highers){
    int number = num;
    addNumber(number, lowers, highers);
    rebalance(lowers, highers);
    medians[size-1] = getMedian(lowers, highers);
  return medians;
}

int main(){
  int * a = new int[6];
  double medians[6];
  MaxHeap * lowers = new MaxHeap();
  MinHeap * highers = new MinHeap();
  for(int i =0; i < 6; i++){
    a[i] = (i+9)%10;
    std::cout<< printArr(getMedians(a[i], i+1, medians, lowers, highers),i+1)<< '\n';
  }
}
