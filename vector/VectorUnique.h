#ifndef __STUDENT_H_
#define __STUDENT_H_

//you can include any other file here
//you are allow to use any data structure
#include <set>
#include <vector>
#include <algorithm>
template <typename T>
void CP::vector<T>::uniq() {
  //do someting here
  std::set<T> s;
  std::vector<T> v;
  for(int i =0;i<mSize;i++){
    if(s.find(mData[i]) == s.end()){
      s.insert(mData[i]);
      v.push_back(mData[i]);
    }
  }
  mSize = v.size();
  
  for(int i =0;i<v.size();i++){
    mData[i] = v[i];
  }
  

}

#endif
