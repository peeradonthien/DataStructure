#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>


template <typename T>
void CP::queue<T>::move_to_back(size_t pos) {
  //write your code here
  T b = mData[(mFront+pos)%mCap];
  for(int i = pos;i<mSize;i++){
    mData[(mFront+i)%mCap] = mData[(mFront+i+1)%mCap];
  }
  mData[(mFront+mSize-1)%mCap] = b;
}
// 10 20 30 40 50 60
//           -      
#endif
