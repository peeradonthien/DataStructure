#include <iostream>
#include <map>
using namespace std;
int main() {
    int n;
    string data;
    cin >> n;
    map<string,int> m;
    for (int i=0 ; i<n; i++){
        cin >> data;
        if(m.find(data) != m.end()){
            m[data] += 1;
        }
        else{
            m[data] =1;
        }
    }
    for (auto &x : m){
        if(x.second != 1){
            cout << x.first << " " << x.second << endl;
        }
    }

    return 0;
}