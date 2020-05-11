#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <iostream>
#include <string>
#include "doctest.h"
#include "MinHeap.h"
#include "MaxHeap.h"
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


TEST_CASE("getMedians"){
  int arr[5]={1,3,7,5,8};
  MaxHeap * lowers = new MaxHeap();
  MinHeap * highers = new MinHeap();
  double medians[5];
  std::string median_string;
  for(int i = 0; i<5; i++){
    median_string+=(printArr(getMedians(arr[i], i+1, medians, lowers, highers), i+1))+",";
  }
  CHECK(median_string=="1.000000 ,1.000000 2.000000 ,1.000000 2.000000 3.000000 ,1.000000 2.000000 3.000000 4.000000 ,1.000000 2.000000 3.000000 4.000000 5.000000 ,");
}
TEST_CASE("getMedians"){
  int arr[4]={1,3,7,5};
  MaxHeap * lowers = new MaxHeap();
  MinHeap * highers = new MinHeap();
  double medians[4];
  std::string median_string;
  for(int i = 0; i<4; i++){
    median_string+=(printArr(getMedians(arr[i], i+1, medians, lowers, highers), i+1))+",";
  }
  CHECK(median_string=="1.000000 ,1.000000 2.000000 ,1.000000 2.000000 3.000000 ,1.000000 2.000000 3.000000 4.000000 ,");
}
