#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
int main() {
    int n,m,value1,value2;
    vector<int> v1,v2,intersec;
    cin >> n >> m;
    for(int i =0; i<n ;i++){
        cin >> value1;
        v1.push_back(value1);
    }
    for(int j =0; j<m ;j++){
        cin >> value2;
        v2.push_back(value2);
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), back_inserter(intersec));
    set<int> final;
    for (int k =0; k < intersec.size(); k++){
        final.insert(intersec[k]);
    }
    for(int x : final) {
        cout << x << " ";
    }

    return 0;
}
