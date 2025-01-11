#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
void CP::stack<T>::moveInsert(int k,CP::stack<T> &s2, int m) {
  //your code here
  CP::stack<T> s,inrange;
  for(int i =0;i<k;i++){
    s.push(top());
    pop();
  }
  for(int i =0;i<m;i++){
    inrange.push(s2.top());
    s2.pop();
  }
  while(!inrange.empty()){
    push(inrange.top());
    inrange.pop();
  }
  while(!s.empty()){
    push(s.top());
    s.pop();
  }

}
#endif
