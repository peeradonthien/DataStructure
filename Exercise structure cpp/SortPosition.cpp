#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,m;
    cin >> n;
    vector<pair<int,int>> v;
    vector<int> ans(n);
    for(int i =0;i<n;i++){
        cin >> m;
        v.push_back({m,i});
    }
    sort(v.begin(),v.end());
    for(int i =0;i<n;i++){
        ans[v[i].second] = i+1;
    }
    for(int &x : ans){
        cout << x << " ";
    }
    cout << "\n";
}
