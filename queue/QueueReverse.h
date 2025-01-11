#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <cassert>
#include <vector>

template <typename T>
void CP::queue<T>::reverse(int a,int b) {
  //your code here
  std::vector<T> v(b-a+1);
  int index = 0;
  for(int i = b;i>=a;i--){
    v[index++] = mData[(mFront+i)%mCap];
  }
  int index2 = 0;
  for(int i =a;i<=b;i++){
    mData[(mFront+i)%mCap] = v[index2++];
  }

}

#endif
