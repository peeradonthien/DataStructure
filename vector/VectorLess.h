#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::operator<(const CP::vector<T> &other) const {
  //write your code here
  // if you use std::vector, your score will be half (grader will report score BEFORE halving)
  if(mSize == 0 && other.mSize != 0){
    return true;
  }
  else if(mSize > 0 && other.mSize > 0 && mData[0] < other.mData[0]){
    return true;
  }
  
  else if(mSize > 0 && other.mSize > 0 &&mData[0] == other.mData[0] )
  {
    if(mSize == other.mSize){
      for(int i=1;i<mSize;i++){
        if(mData[i] > other.mData[i]){
          return false;
        }
        else if (mData[i] < other.mData[i]){
          return true;
        }
      }
    }
    else{
      return mSize < other.mSize;
    }
  }
  
  return false;
}

#endif
