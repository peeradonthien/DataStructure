#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
std::vector<T> CP::queue<T>::to_vector(int k) const {
  std::vector<T> res;
  //write your code only here
  if(k>mSize){
    k = mSize;
  }
  for(int i =0;i<k;i++){
    res.push_back(mData[(mFront+i)%mCap]);
  }
  
  return res;
}

template <typename T>
CP::queue<T>::queue(iterator from,iterator to) {
  //write your code only here
  mData = new T[1];
  mSize=0;
  mCap = 1;
  mFront=0;
  while(from != to){
    push(*from);
    from++;
  }
}

#endif
