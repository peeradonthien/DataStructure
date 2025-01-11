#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int N,M,m,n1,n2;
    vector<pair<int,int>> v;
    vector<int> vmax;
    cin >> N >> M;
    for(int i=0;i<N;i++){
        cin >> n1 >> n2;
        v.push_back({n1,n2});
    }
    sort(v.begin(),v.end());
    for(auto x : v){
        vmax.push_back(x.second);
    }
    sort(vmax.begin(),vmax.end());
    for(int j=0;j<M;j++){
        cin >> m;
        pair<int,int> mm= {m,0};
        auto itmin = lower_bound(v.begin(),v.end(),mm);
        if (m>=v[0].first && m<=v[v.size()-1].first){
            if ((*itmin).first == m){
                cout << 1 << " ";
            }
            else if (v[itmin-v.begin()-1].second >= m){
                cout << 1 << " ";
            }
            else{
                cout << 0 << " ";
            }
        }
        else if (m < v[0].first){
            cout << 0 << " ";
        }
        else { // m เกินตัวหน้า
            if(m>vmax[vmax.size()-1]){
                cout << 0 << " ";
            }
            else{
                cout << 1 << " ";
            }
        }
    }
    cout << endl;

}