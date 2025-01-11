#include <iostream>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;
string changepass (vector<int> &v,string password,int l){
    string word = "abcdefghijklmnopqrstuvwxyz";
    string newpass = "";
    int newindex;
    for(int i=0;i<l;i++){
        int index = password[i]-'a';
        int move = index + v[i];
        if(move >0 && move <26){
            newpass += word[move];
        }
        else{
            int sed = move%26;
            newpass += word[sed];
        }
    }
    return newpass;
}
int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N,M,L,l;
    string n,m;
    cin >> N >> M >> L;
    set<string> s;
    vector<int> v;
    for(int k=0;k<L;k++){
        cin >> l;
        v.push_back(l);
    }
    for(int i=0 ;i<N;i++){
        cin >> n;
        s.insert(n);
    }
    for(int j=0;j<M;j++){
        cin >> m;
        string newpass = changepass(v,m,L);
        if(s.find(newpass) != s.end()){
            cout << "Match \n" ;
        }
        else{
            cout << "Unknown \n" ;
        }
    }
}

