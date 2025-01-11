#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n,m,sizes,per;
    vector<int> v;
    cin >> n >> m;
    for(int i = 0 ; i<n;i++){
        cin >> sizes;
        v.push_back(sizes);
    }
    sort(v.begin(),v.end());
    for(int j=0; j<m;j++){
        cin >> per;
        if(per >= v[v.size()-1]){
            cout << v[v.size()-1] << " ";
        }
        else if(per <= v[0]){
            cout << v[0] << " ";
        }
        else{
            auto it = lower_bound(v.begin(),v.end(),per);
            if(*it == per){
                cout << *it << " ";
            }
            else{
                if(abs(*(it-1)-per) < abs(*it-per)){
                    cout << *(it-1) << " ";
                }
                else if(abs(*(it-1)-per) == abs(*it-per)){
                    cout << *it << " ";
                }
                else{
                    cout << *it << " ";
                }
            }
//6 10
        }
    }
    cout << endl;
    
}