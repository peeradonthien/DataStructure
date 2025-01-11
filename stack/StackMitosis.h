#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

template <typename T>
void CP::stack<T>::mitosis(int a, int b)
{
    CP::stack<T> s;
    for(int i=0;i<a;i++){
        s.push(top());
        pop();
    }
    for(int i =0;i<b-a+1;i++){
        s.push(top());
        s.push(top());
        pop();
    }
    while(!s.empty()){
        push(s.top());
        s.pop();
    }
}

#endif