#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <vector>
#include "queue.h"

template <typename T>
void CP::queue<T>::v_split(std::vector<std::queue<T>> &output, size_t k) const
{
  // your code here
  int amount = mSize / k;
  int sed = mSize % k;
  int index = 0;
  for(int i =0;i<k;i++){
    std::queue<T> q;
    for(int j = 0 ; j<amount ;j++){
      q.push(mData[(mFront+index)%mCap]);
      index++;
    }
    if(sed != 0){
      q.push(mData[(mFront+index)%mCap]);
      index++;
      sed--;
    }
    output.push_back(q);
  }
  output.resize(k);
}

#endif
