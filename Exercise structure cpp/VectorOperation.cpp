#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
void printvector(vector<int> v){
    for (int i = 0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl ;

}
*/
int main() {
    int n,x,index;
    string ins;
    vector<int> v;
    cin >> n;
    for (int i =0; i<n;i++){
        cin >> ins ;
        if (ins == "pb"){
            cin >> x;
            v.push_back(x);

        }

        else if (ins == "sa"){
            sort(v.begin(),v.end());

        }
        else if (ins == "sd"){
            sort(v.begin(),v.end(),greater<int>());

        }
        else if (ins == "r"){
            vector<int> z;
            for (int j=v.size()-1; j>=0;j--){
                z.push_back(v[j]);
            }
            v=z;
            

        }
        else if (ins == "d"){
            cin >> index;
            v.erase(v.begin() + index);

        }
   }
   for(int num :v){
        cout << num << " ";
   }
   cout <<endl;
   return 0;
}


