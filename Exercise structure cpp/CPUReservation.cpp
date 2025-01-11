#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main(){
    int n,s,e;
    cin >> n;
    map<int,int> m;
    for(int i=0 ;i<n;i++){
        cin >> s >> e;
        auto it = m.lower_bound(s);
        if(it == m.end() || it->second > e){
            cout << i+1 << " ";
            m[e] = s;
        }
    }
    cout << endl;
}
