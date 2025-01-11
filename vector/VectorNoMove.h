#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
T& CP::vector_no_move<T>::operator[](int idx) {
  //your code here
  int pos = upper_bound(aux.begin(),aux.end(),idx) - aux.begin();
 if (pos == 0) {
  return mData[0][idx];
} else {
  return mData[pos][idx - aux[pos-1]];
}

}

template <typename T>
void CP::vector_no_move<T>::expand_hook() {
  //your code here
  //you MAY need this function
  aux.push_back(mCap);
  //debug();
}

#endif
