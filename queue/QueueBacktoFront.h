#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>


template <typename T>
void CP::queue<T>::back_to_front() {
  //write your code here
  // |  | 1 | 2 | 3 | 4 |
  mData[(mFront+mCap-1)%mCap] = back();
  mFront = (mFront+mCap-1)%mCap;

}

#endif
