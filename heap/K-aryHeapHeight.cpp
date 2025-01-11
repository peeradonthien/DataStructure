#include <iostream>
#include <vector>
using namespace std;
int main() {
    long long n;
    long long k;
    cin >> n >> k;
    if(k==1) {
        cout << n-1 << endl;
        return 0;
    }
    long long height = 0;
    n--;
    while(n>0){
        n=(n-1)/k;
        height++;
    }
    cout << height <<endl;


}