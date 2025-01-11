#include <iostream>
#include <set>
#include <cmath>
using namespace std;
int main() {
    int n;
    int capa = 1;
    cin >> n;
    while(capa < n){
        capa *= 2;
    }
    cout << capa-n << endl;
}

