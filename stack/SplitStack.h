#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"
#include <vector>

template <typename T>
std::vector<std::vector<T>> CP::stack<T>::split_stack(int k) const {
  std::vector<std::vector<T>> ans(k);
  for (int i = 0; i < mSize; ++i) {
    ans[i % k].insert(ans[i % k].begin(), mData[mSize - 1 - i]);  // ใส่ข้อมูลที่จุดเริ่มต้นเพื่อให้ top อยู่ด้านขวา
  }
  return ans;
}

#endif


