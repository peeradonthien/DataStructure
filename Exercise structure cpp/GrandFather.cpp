#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    long long n,m,dad,son,p1,p2;
    map<long long,long long> mofdad,sonmapgrand;
    map<long long,vector<long long>> mofgrand;

    cin >> n >> m;
    for(int i=0;i<n;i++){
        cin >> dad >> son ;
        mofdad[son] = dad;
        if(mofdad.find(dad) != mofdad.end()){
            mofgrand[mofdad[dad]].push_back(son);
            sonmapgrand[son] = mofdad[dad];
        }
    }
    

   for(int j= 0;j<m;j++){
        cin >> p1 >> p2;
        long long grandofp1 = sonmapgrand[p1];
        vector<long long> grandchild = mofgrand[grandofp1];
        auto it = find(grandchild.begin(),grandchild.end(),p2);
        if(it != grandchild.end() && p1 != p2){
            cout << "YES"<< endl;
        }
        else{
            cout << "NO" << endl;
        }
   }
    
}