#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
  std::vector<int> sorted_pos = pos;

  std::sort(sorted_pos.begin(), sorted_pos.end(),std::greater<int>());

  for (int x : sorted_pos) {
    erase(begin() + x);
  }
}

#endif
