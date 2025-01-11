#include <iostream>
using namespace std;
#include <vector>

int main() {
    int n,m;
    cin >> n>>m;
    for(int i =0;i<m;i++){
        int want,child;
        cin >> want >> child;
        if(want == child){
            cout << "a and b are the same node" << endl;
            continue;
        }
        else if(want < child){
            int parent = child;
            while(parent>want){
                parent = (parent-1)/2;
            }
            if(parent == want){
                cout << "a is an ancestor of b" << endl;
                continue;
            }
            else{
                cout << "a and b are not related" << endl;
            }
        }
        else{
            int parent = want;
            while(parent>child){
                parent = (parent-1)/2;
            }
            if(parent == child){
                cout << "b is an ancestor of a" << endl;
                continue;
            }
            else{
                cout << "a and b are not related" << endl;
            }
        }

    }
}