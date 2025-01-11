#include <iostream>
using namespace std;
#include <vector>

int main() {
    int n,m;
    cin >> n>> m;
    vector<int> v;
    for(int i =0 ;i<n;i++){
        int parent = i;
        while(parent > m){
            parent = (parent-1)/2;
        }

        if(parent!=m){
            v.push_back(i);
        }
    }
    cout << v.size() <<endl;
    for(auto x : v){
        cout << x << " ";
    }
    cout << endl;
}