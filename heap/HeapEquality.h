#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::operator==(const CP::priority_queue<T,Comp> &other) const {
  CP::priority_queue<T,Comp> q(*this);
  CP::priority_queue<T,Comp> qother(other);
  if(size() != other.size()) return false;
  while(!q.empty() && !qother.empty()){
    if(q.top() != qother.top()) return false;
    q.pop();
    qother.pop();
  }
  //write your code here
  return true; // you can change this line
}

#endif
