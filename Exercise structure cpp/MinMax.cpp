#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n,m,r,value,r1,r2,c1,c2;
    cin >> n >> m >> r;
    vector<vector<int>> v;
    vector<int> vin,group;
    for (int i=0; i<n ;i++){
        for (int k=0; k<m ; k++){
            cin >> value;
            vin.push_back(value);
        }
        v.push_back(vin);
        vin = {};
    }

    for (int j=0; j<r ; j++){
        cin >> r1 >> c1 >> r2 >> c2;
        if (r1 > r2 || c1 > c2){
            cout << "INVALID"<< endl;
        }
        else if (r1 > n || c1 > m){
            cout << "OUTSIDE" << endl;
        }
        else{
            if(r2 > n){r2=n;}
            if(c2 > m){c2=m;}
            for (int l = r1; l<=r2 ; l++){
                for (int p = c1; p<=c2;p++){
                    group.push_back(v[l-1][p-1]);
                }
            }
            cout << *max_element(group.begin(),group.end()) << endl;
            group = {};
        }
    }

   return 0;
}



