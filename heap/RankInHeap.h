#ifndef STUDENT_H
#define STUDENT_H

using namespace std;
template <typename T,typename Comp>

size_t CP::priority_queue<T,Comp>::get_rank(size_t pos) const {
  //write your code here
  T check = mData[pos];
  int index = 0;
  for(int i = 0;i<mSize;i++){
    if(mLess(check,mData[i])){
      index++;
    }
  }
  return index;
}

#endif
