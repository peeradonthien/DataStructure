#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>

template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::height() const {
  //write your code here
  if(mSize==0){
    return -1;
  }
  int ans = 0;
  int run = mSize-1;
  while(run > 0){
    run = (run-1)/2;
    ans +=1;
  }
  return ans;
}

#endif

