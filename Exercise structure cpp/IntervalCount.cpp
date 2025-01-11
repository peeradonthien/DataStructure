#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int N,M,k,n,m,nummin,nummax,indexmin,indexmax;
    vector<int> v;
    cin >> N >> M >> k;
    for(int i =0;i<N;i++){
        cin >> n;
        v.push_back(n);
    }
    sort(v.begin(),v.end());
    for(int j = 0;j<M;j++){
        cin >> m;
        if(m-k > v[v.size()-1]){
            cout << 0 << " ";
            continue;
        }
        else{
            nummin = max(m-k,0);
        }
        nummax = min(v[v.size()-1],m+k);
        //cout << "nummin : " << nummin << endl;
        //cout << "nummax : " << nummax << endl;
        auto itmin = lower_bound(v.begin(),v.end(),nummin);
        indexmin = itmin-v.begin();
        auto itmax = lower_bound(v.begin(),v.end(),nummax);
        if(*itmax > nummax){ 
            indexmax = itmax-v.begin()-1;
        }
        else{
            indexmax = itmax-v.begin();
        }
        if (indexmax>=indexmin){
            cout << indexmax-indexmin+1 << " ";
        }
        else{
            cout << 0 << " ";
        }

        //cout << indexmin << " " << indexmax << endl;
    }
}