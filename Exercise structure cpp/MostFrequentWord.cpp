#include <iostream>
#include <map>
using namespace std;
int main() {
    int n;
    string name;
    map<string,int> m;
    map<string,int> :: iterator it;
    cin >> n ;
    for(int i = 0 ;i<n ;i++){
        cin >> name;
        if ((it = m.find(name)) != m.end()){ // if true = found name in m
            m[name] += 1 ;
        }
        else{
            m[name] = 1;
        }
    }

    int max= 0;
    string nmax ;
    for (auto &x :m){
        if(x.second >=max){
            max = x.second;
            nmax = x.first;
        }
    }
    cout << nmax << " " << max << endl;
    return 0;
}