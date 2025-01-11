#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void member_multiply(vector<int> &v,vector<pair<vector<int>::iterator,int>> &multiply) {
    int plus = 0;
    vector<int> x = v;
    vector<int> itvalue;
    for(int j=0 ;j<multiply.size();j++){
        itvalue.push_back(*multiply[j].first);
    }
    for(int i =0; i<multiply.size();i++){
        //int index = multiply[i].first - x.begin();
        //int value = x[index];
        int value = itvalue[i];
        auto it =  find(v.begin(),v.end(),value);
        v.insert(it,multiply[i].second,value);
    }
    
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n,m;
    cin >> n >> m;
    vector<int> v(n);
    vector<pair<vector<int>::iterator,int>> multiply(m);
    for (int i = 0;i < n;i++) cin >> v[i];
    for (int i = 0;i < m;i++) {
        int a,b;
        cin >> a >> b;
        multiply[i].first = v.begin()+a;
        multiply[i].second = b;
    }
    member_multiply(v,multiply);
    cout << "======= result ========" << endl;
    cout << v.size() << endl;
    for (auto &x : v) {
        cout << x << " ";
    }
    cout << endl;
}