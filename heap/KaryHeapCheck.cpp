#include <iostream>
#include <vector>
using namespace std;
int main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(0); 
    int m;
    cin >>m;
    for(int i =0;i<m;i++){
        int n,k;
        cin >> n >> k;
        vector<int> v(n) ;
        int data;
        for(int j =0;j<n;j++){
            cin >> data;
            v[j] = data;
        }
        bool check =true;
        for(int a = 1;a<v.size();a++){
            int parent = (a-1)/k;
            if(v[a] > v[parent]) {
                check = false;
            }
        }
        if(check){
            cout << "true" << endl;
        }
        else{
            cout << "false" << endl;
        }

    }



}