#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n,a;
    cin >> n >> a;
    vector<int> v;
    v.push_back(a);
    for(int i = a+1;i<n;i++){
        int parent = i;
        while(parent>a){
            parent = (parent-1)/2;
        }
        if(parent == a) v.push_back(i);
    }
    cout << v.size() << endl;
    for(auto &x : v){
        cout << x << " " ;
    }
    cout << endl;


}