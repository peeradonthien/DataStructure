#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main() {
    int n,k;
    string name;
    cin >> n >> k;
    //store in map
    map<string,int> m;
    map<string,int> :: iterator it;
    for (int i = 0; i<n ;i++){
        cin >> name;
        if((it = m.find(name)) != m.end()){
            m[name] ++;
        }
        else{
            m[name] = 1;
        }
    }
    if(m.size()<k){
        int min = m[name];
        for(auto x : m){
            if(x.second < min){
                min = x.second;
            }
        }
        cout << min << endl;
    }
    else{
        int max ;
        for(int j=0;j<k;j++){
            max=0;
            string nmax = " ";
            for(auto l :m){
                if(l.second >= max){
                    max=l.second;
                    nmax=l.first;
                }
            }
            m.erase(nmax);
        }
        cout << max << endl;

    }
    return 0;
}