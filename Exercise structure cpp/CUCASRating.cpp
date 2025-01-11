#include <iostream>
#include <map>
#include <iomanip>
using namespace std;
int main() {
    cout << std::fixed << std::setprecision(2); // set 2 demical place
    map<int,pair<int,int>> mid;
    map<string,pair<int,int>> mprof;
    map<int,pair<int,int>> :: iterator itid;
    map<string,pair<int,int>> :: iterator itprof;
    int n,id,point;
    string name;
    cin >> n;

    //pair <count , sum of point>
    for(int i =0;i<n;i++){
        cin >> id >> name >> point;
        if((itid = mid.find(id)) != mid.end()){
            mid[id].first ++ ;
            mid[id].second += point;
        }
        else{
            mid[id].first = 1;
            mid[id].second = point;
        }
        if((itprof = mprof.find(name)) != mprof.end()){
            mprof[name].first ++ ;
            mprof[name].second += point;
        }
        else{
            mprof[name].first = 1;
            mprof[name].second = point;
        }
    }
    for (auto x : mid){
        cout << x.first << " " << ((x.second.second+0.0)/x.second.first) << endl;
    }
    for (auto y : mprof){
        cout << y.first << " " << ((y.second.second+0.0)/y.second.first) << endl;
    }

    return 0;
}