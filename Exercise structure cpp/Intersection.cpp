#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isUnique(vector<int>& v, int value) {
    for (int item : v) {
        if (item == value) {
            return false;  
        }
    }
    return true;  
}

int main() {
    int N, M,n,m;
    vector<int> v,ans;
    cin >> N >> M;
    for (int i = 0;i<N ;i++){
        cin >> n ;
        if(isUnique(v,n)){
            v.push_back(n);
        }
    }
    for (int j = 0;j<M;j++){
        cin >> m;
        for (int k : v){
            if(m==k){
                if(isUnique(ans,m)){
                    ans.push_back(m);
                }
                break;
            }
        }
    }
    sort(ans.begin(),ans.end());
    for(int xx : ans){
        cout << xx << " ";
    }
    cout << endl;


    return 0;
}