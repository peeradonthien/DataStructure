#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <algorithm>
#include <set>
using namespace std;
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int N,M;
    string pass,seat;
    set<pair<string,string>> s;
    cin >> N >> M;
    for(int i=0;i<N;i++){
        cin >> pass >> seat;
        s.insert({pass,seat});
    }
    int amount;
    for(int j = 0;j<M ;j++){
        bool status = true;
        vector<pair<string,string>> era;
        cin >> amount;
        for(int i=0;i<amount;i++){
            cin >> pass >> seat;
            auto it = s.find({pass,seat});
            if(it == s.end()){
                status = false;
            }
            else{
                era.push_back({pass,seat});
            }
        }
        
        if(status){
            cout << "YES" << endl;
            for(auto x : era){
                s.erase(x);
            }
        }
        else{
            cout << "NO" << endl;
        }
    }
}