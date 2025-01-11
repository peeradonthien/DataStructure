#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::mirror() {
  //write your code here
  ensureCapacity(2*mSize);
  int start = mSize;
  for(int i=mSize-1 ; i>=0 ;i--){
    mData[start++] = mData[i];
  }
  mSize *= 2;
}

#endif
