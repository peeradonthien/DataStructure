#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::rotate(iterator first, iterator last, size_t k) {
  //write your code here
  int First = first- begin();
  int Last = last-begin();
  int range = last-first;
  T arr [k];
  int index =0;
  for(int i =First;i< First+k;i++){
    arr[index++] = mData[i];
  }
  index=0;
  for(int i =First+k ; i<Last;i++){
    mData[First+index] = mData[i];
    index ++;
  }
  for(int i = 0;i<k;i++){
    mData[First+index] = arr[i];
    index++;
  }

}

#endif
