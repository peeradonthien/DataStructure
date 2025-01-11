#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::extract(const T& value,iterator a, iterator b,CP::list<T>& output) {
  //write your code here
  if(a==b || size()==0) return;
  auto itoutput = output.begin();
  for(iterator i=a;i!=b;i++){
    if(*i == value){
      i.ptr->prev->next = i.ptr->next;
      i.ptr->next->prev = i.ptr->prev;
      node *n = new node(value,itoutput.ptr->prev, itoutput.ptr);
      itoutput.ptr->prev->next = n;
      itoutput.ptr->prev = n;
      output.mSize++;
      delete i.ptr;
      mSize--;
    }
  }
}

#endif
