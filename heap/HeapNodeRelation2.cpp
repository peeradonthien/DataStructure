#include <iostream>
#include <vector>
using namespace std;
bool isancestor(long long &S, long long &a, long long &b){
    if(a == b) return false;
    long long parent = a;
    while(parent > b){
        parent = (parent-1)/S;
    }
    if(parent == b){
        return true;
    }
    return false;
}
int height(long long &S, long long a){
    int height =0;
    while(a > 0){
        a = (a-1)/S;
        height++;
    }
    return height;

}
int relation(long long S, long long a, long long b) {
    if((a-1)/S == b || (b-1)/S == a){
        return 1;
    }
    else if(isancestor(S,a,b) || isancestor(S,b,a)){
        return 2;
    }
    else if(height(S,a) != height(S,b)){
        return 3;
    }
    return 4;

}
int main() {
 ios_base::sync_with_stdio(false); cin.tie(0);
 int n;
 long long S,a,b;
 cin >> n;
 while (n--) {
 cin >> S >> a >> b;
 cout << relation(S,a,b) << " ";
 }
 cout << endl;
}