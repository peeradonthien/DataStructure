#include <iostream>
#include <vector>
using namespace std;
vector<string> punch(vector<string> &v, vector<string>::iterator it,int k) {
 //write some code here
 //don’t forget to return something
    //find range of index
    int index = it-v.begin();
    int first,last;{}
    if (index-k <0){
        first = 0;
    }
    else{
        first = index-k;
    }
    if (index+k >v.size()-1){
        last = v.size()-1;
    }
    else{
        last = index+k;
    }
    // erase in range first to last
    while (first <= last){
        v.erase(v.begin()+first);
        last--;
    }
    return v;

}
int main() {
    int n,j,k;
    cin >> n >> j >> k;
    vector<string> v(n);
    for (int i = 0;i < n;i++) {
        cin >> v[i];
    }
    cout << "Result after punch" << endl;
    vector<string> result = punch(v, v.begin() + j, k);
    for (auto &x : result) {
        cout << x << endl;
    }
}
