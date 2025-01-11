#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"
#include <math.h>

template <typename T,typename Comp >
T CP::priority_queue<T,Comp>::get_kth(size_t k) const {
  //write your code here
  //can include anything
  if(k==1) return mData[0];
  else if(k==2){
    if(mLess(mData[1],mData[2])){
      return mData[2];
    }
    return mData[1];
  }
  else{
    if(mLess(mData[1],mData[2])){
      T tung = mData[1];  //mData 2 มากกว่า
      for(int i =5;i<=6;i++){
        if(mLess(tung,mData[i])) tung = mData[i];
      }
      return tung;

    }
    else{
      T tung = mData[2];
      for(int i =3;i<=4;i++){
        if(mLess(tung,mData[i])){
          tung = mData[i];
        }
      }
      return tung;

    }
  }
}

#endif
