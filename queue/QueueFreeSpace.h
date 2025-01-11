#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ope , amount;
    long long capa = 1;
    long long size = 0;
    for(int i =0;i< n;i++){
        cin >> ope >> amount;
        if(ope == 0){
            size+=amount;
            while(capa < size){
                capa *= 2;
            }
        }
        if(ope == 1){
            size -= amount;
        }
    }
    cout << capa - size << endl;
}