#include <iostream>
using namespace std;
#include <set>
#include <vector>
#include <algorithm>
int main(){
    int N,K,p,q;
    cin >> N >> K;
    cin >> p >> q;
    //set<int,greater<int>> sp,sq;
    vector<int> vp,vq;
    int parentp = p;
    int parentq = q;
    while(parentp > 0){
        parentp = (parentp-1)/K;
        //sp.insert(parentp);
        vp.push_back(parentp);
    }
    while(parentq > 0){
        parentq = (parentq-1)/K;
        //sq.insert(parentq);
        vq.push_back(parentq);
    }
    for(auto &x: vp){
        auto it =find(vq.begin(),vq.end(),x);
        if(it!=vq.end()){
            cout << x << endl;
            break;
        }
    }
    

}