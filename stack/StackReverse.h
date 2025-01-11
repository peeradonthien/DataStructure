#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "stack.h"

template <typename T>
void CP::stack<T>::reverse(size_t first, size_t last){
	// write your code here
	if(first < last){
		if(last >= mSize) last = mSize-1;
		int nums = (last - first +1)/2;
		int top = mSize - first -1;
		int back = mSize - last -1;
		for(int i = 0 ;i<nums ;i++){
			T t = mData[top]; 
			T b = mData[back];
			mData[back] = t;
			mData[top] = b;
			top --;
			back ++;
		}


	}

}

#endif
