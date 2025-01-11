#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m) {
  //write your code here
  int A = a-begin();
  int B = b-begin();
  if(m<=0 || A<0 || A >= mSize ||  B < 0 || B>= mSize){
    return false;
  }
  else if(A+m-1 >= mSize || B+m-1 >= mSize || A+m-1<0 || B+m-1<0){
    return false;
  }
  else if(!((B > A+m-1 && B>A) || (A>B+m-1 && A>B)) || A == B || A+m-1 == B+m-1){
    return false;
  }
  else{
    for(int i = 0 ;i<m ;i++){
      int s1 = mData[A+i];
      int s2 = mData[B+i];
      mData[A+i] = s2;
      mData[B+i] = s1;
    }
  }
  return true;
}

#endif
