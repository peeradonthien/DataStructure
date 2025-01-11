#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <set>
template <typename T>
bool CP::vector<T>::valid_iterator(CP::vector<T>::iterator it) const {
  //write your code here
  std::set<iterator> its ;
  for(auto i = &mData[0];i!=&mData[mSize];i++){
    its.insert(i);
  }
  if(its.find(it) != its.end()){
    return true;
  }
  return false;

}

#endif
