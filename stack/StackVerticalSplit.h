#ifndef __STUDENT_H_
#define __STUDENT_H_

// You can include library here
#include "stack.h"

template <typename T>
void CP::stack<T>::v_split(std::vector<std::stack<T>> &output, size_t k) const {
  // Write code here
  int amount = mSize / k;
  int sed = mSize % k;
  int size = mSize;
  for(int i =0;i<k;i++){
    std::stack<T> s ;
    for(int i = 0 ; i<amount ;i++){
      s.push(mData[size-1]);
      size--;
    }
    if(sed != 0){
      s.push(mData[size-1]);
      size--;
      sed--;
    }
    std::stack<T> sreverse;
    while(!s.empty()){
      sreverse.push(s.top());
      s.pop();
    }
    output.push_back(sreverse);
  }
  output.resize(k);
}

#endif
