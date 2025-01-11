#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <vector>

template <typename T>
template <typename Comp>
T CP::queue<T>::min_element(std::vector<size_t> pos,Comp comp) const {
  //your code here
  int index;
  for(int i=0;i<pos.size();i++){
    if(pos[i] < mSize){
      index = pos[i];
    }
  }
  T min = mData[(index+mFront)%mCap];
  for(auto &x : pos){
    if(x<mSize){
      if(comp(mData[(x+mFront)%mCap],min)){
        min = mData[(x+mFront)%mCap];
      }
    }
  }
  //should return something
  return min;
}

#endif
