#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

//DO NOT INCLUDE ANYTHING


template <typename T>
CP::stack<T>::stack(typename std::set<T>::iterator first,typename std::set<T>::iterator last) {
  //write your code ONLY here
  CP::stack<T> s;
  CP::stack<T> a;
  while(first != last){
    s.push(*first);
    first++;
  }
  while(!s.empty()){
    a.push(s.top());
    s.pop();
  }
  this->mData = new T[a.mCap]();
  this->mCap = a.mCap;
  this->mSize = a.size();
  for (size_t i = 0;i < a.size();i++) {
    mData[i] = a.mData[i];
  }
}

#endif
