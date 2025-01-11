#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <vector>
#include <algorithm>
#include "queue.h"

template <typename T>
void CP::queue<T>::remove_many(std::vector<size_t> pos)
{
  std::sort(pos.begin(), pos.end());
  CP::queue<T> q;
  int index = 0;

  for (int i = 0; i < mSize; i++) {
    if (index < pos.size() && i == pos[index]) {
      index++;
    } else {
      q.push(mData[(mFront + i) % mCap]);
    }
  }

  *this = q;
}

#endif
