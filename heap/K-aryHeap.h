#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "priority_queue.h"
#include <iostream>


template <typename T,typename Comp >
void CP::priority_queue<T,Comp>::fixUp(size_t idx) {
    T tmp = mData[idx];
    while(idx > 0){
        size_t p = (idx-1)/4;
        if(mLess(tmp,mData[p])) break;
        mData[idx] = mData[p];
        idx = p;
    }
    mData[idx] = tmp;
}

template <typename T,typename Comp >
void CP::priority_queue<T,Comp>::fixDown(size_t idx) {
    T tmp = mData[idx];
    size_t c;
    while((c=idx*4+1)<mSize){
        size_t next = c;
        if(c+1 < mSize && mLess(mData[next],mData[c+1])) next = c+1;
        if(c+2 < mSize && mLess(mData[next],mData[c+2])) next = c+2;
        if(c+3 < mSize && mLess(mData[next],mData[c+3])) next = c+3;
        if(mLess(mData[next],tmp)) break;
        mData[idx] = mData[next];
        idx = next;
    }
    mData[idx] = tmp;
}

#endif

