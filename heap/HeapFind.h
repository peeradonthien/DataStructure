#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>

template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::find(T k) const {
  //your code here
  for(int i =0;i<mSize;i++){
    if(mData[i] == k){
      return true;
    }
  }
  return false;
}

template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::find_level(T k) const {
  //your code here
  bool found = false;
  int index =0;
  for(int i=0;i<mSize;i++){
    if(mData[i] == k){
        found = true;
        index =i;
      }
    }
  if(found){
    int height =0;
    while(index != 0){
      index = (index-1)/2;
      height ++;
    }
    return height;
  }
  return -1;

}

#endif

