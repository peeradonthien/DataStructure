#include "stack.h"
#include "queue.h"

namespace CP {
    template<typename T>
    void stack<T>::appendStack(stack<T> s) {
        CP::stack<T> s1;
        while(!empty()){
            s1.push(top());
            pop();
        }
        for(int i =0;i<s.mSize;i++){
            push(s.mData[i]);
        }
        while(!s1.empty()){
            push(s1.top());
            s1.pop();
        }
    }

    template<typename T>
    void stack<T>::appendQueue(queue<T> q) {
        CP::stack<T> s1,s2;
        while(!q.empty()){
            s1.push(q.front());
            q.pop();
        }
        while(!empty()){
            s2.push(top());
            pop();
        }
        while(!s1.empty()){
            push(s1.top());
            s1.pop();
        }
        while(!s2.empty()){
            push(s2.top());
            s2.pop();
        }


    }

    template<typename T>
    void queue<T>::appendStack(stack<T> s) {
        while(!s.empty()){
            push(s.top());
            s.pop();
        }
    }

    template<typename T>
    void queue<T>::appendQueue(queue<T> q) {
        while(!q.empty()){
            push(q.front());
            q.pop();
        }
    }
}
