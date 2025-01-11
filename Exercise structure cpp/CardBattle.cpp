#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    int term =0;
    int N,M,n,m,count,c;
    cin >> N >> M;
    vector<int> toa;
    for(int i =0 ;i<N;i++){
        cin >> n;
        toa.push_back(n);
    }
    sort(toa.begin(),toa.end());
    for(int j=0 ;j<M ;j++){
        bool found = true;
        cin >> count;
        for(int k = 0;k<count;k++){
            cin >> c;
            auto it = upper_bound(toa.begin(),toa.end(),c);
            //cout << "c : " << c << endl;
            if(it != toa.end()){ // found
                toa.erase(it);
                //cout << "erase : " << *it << endl;
            }
            else{ // not found
                found = false;
            }
            
        }
        if(found){
            term += 1;
        }
        else{
            break;
        }
    }
    cout << term+1 << endl;
}