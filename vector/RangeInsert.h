#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::insert(iterator position,iterator first,iterator last) {
  //write your code here
  int range = last-first;
  int pos=position - begin();
  ensureCapacity(mSize + range);
  for(int i = mSize+range-1;i >= pos+range-1;i--) {
    mData[i] = mData[i-range];
  }
  int index = 0;
  for(int i =pos;i<pos+range;i++){
    mData[i] = *(first+index);
    index++;
  }
  mSize+=range;

}

#endif
