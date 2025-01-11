#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <map>
#include <vector>

template <typename T>
std::vector<std::pair<T, size_t>> CP::queue<T>::count_multi(std::vector<T> &k) const {
    std::vector<std::pair<T, size_t>> ans;
    std::map<T, size_t> m;

    // เริ่มต้นแผนที่ด้วยคีย์จากเวกเตอร์ k และตั้งค่าจำนวนเป็น 0
    for (const auto &x : k) {
        m[x] = 0;
    }

    // นับจำนวนการเกิดขึ้นขององค์ประกอบในคิว
    for (int i = 0; i < mSize; i++) {
        T target = mData[(mFront + i) % mCap];
        if (m.find(target) != m.end()) {
            m[target]++;
        }
    }

    // สร้างเวกเตอร์ผลลัพธ์ด้วยจำนวนจากแผนที่
    for (const auto &x : k) {
        ans.push_back({x, m[x]});
    }

    return ans;
}

#endif
