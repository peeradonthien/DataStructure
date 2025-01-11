#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <map>
template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int,T>> data) {
  //write your code here
  std::map<int,T> m;
  vector<T> v;
  for(auto x : data){
    m[x.first] = x.second;
  }
  for(int i =0;i<mSize;i++){
    if(m.find(i) != m.end()){
      v.push_back(m[i]);
    }
    v.push_back(mData[i]);
  }
  if(m.find(mSize) != m.end()){
    v.push_back(m[mSize]);
  }
  *this = v;



}

#endif
