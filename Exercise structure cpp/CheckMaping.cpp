#include <iostream>
#include <set>
using namespace std;
int main() {
    set<int> a,b;
    int n,m;
    cin >> n;
    for(int i =1 ;i<=n;i++){
        a.insert(i);
        cin >> m;
        b.insert(m);
    }
    if (a==b){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    

    return 0;
}