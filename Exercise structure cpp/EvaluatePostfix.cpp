#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <vector>
#include <stack>
#include <iostream>
using namespace std;

void printvecter(vector<int> v){
    for(auto x : v){
        cout << x << " ";
    }
    cout << endl;
}

int eval_postfix(vector<pair<int,int>> v) {
    stack<int> s;

    // วนลูปในเวกเตอร์โพสต์ฟิก
    for(int i = 0; i < v.size(); i++) {
        if (v[i].first == 1) {  // ถ้าเป็น operand
            s.push(v[i].second);  // เก็บตัวเลขลงใน stack
        } else {  // ถ้าเป็น operator
            int b = s.top(); s.pop();  // ดึงตัวเลขที่สองออกจาก stack
            int a = s.top(); s.pop();  // ดึงตัวเลขที่หนึ่งออกจาก stack
            int result = 0;

            if (v[i].second == 0) {  // เครื่องหมาย "+"
                result = a + b;
            } else if (v[i].second == 1) {  // เครื่องหมาย "-"
                result = a - b;
            } else if (v[i].second == 2) {  // เครื่องหมาย "*"
                result = a * b;
            } else if (v[i].second == 3) {  // เครื่องหมาย "/"
                result = a / b;
            }

            s.push(result);  // นำผลลัพธ์กลับไปใส่ใน stack
        }
    }

    // ค่าที่เหลืออยู่ใน stack คือผลลัพธ์สุดท้าย
    return s.top();
}

#endif
