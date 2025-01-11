#ifndef __STUDENT_H__
#define __STUDENT_H__
//#include <vector>
template <typename T>
std::vector<std::vector<T>> CP::stack<T>::distribute(size_t k) const {
  //write your code here
  int d = mSize/k;
  int sed = mSize%k;
  std::vector<std::vector<T>> ans(k);
  int index = mSize-1;
  for(int j=0;j<sed;j++){
    for(int i=0 ;i<d+1;i++){
      ans[j].push_back(mData[index--]);
    }
  }
  for(int i =sed;i<k;i++){
    for(int j=0;j<d;j++){
      ans[i].push_back(mData[index--]);
    }
  }
  return ans;
}
#endif
