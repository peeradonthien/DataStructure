#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i =0;i<n;i++){
        int mFront,mSize,mCap,last,correction;
        cin >> mFront >> mSize >> mCap >> last >> correction;
        if(mCap >= mSize && (mFront+mSize)%mCap == last && mFront < mCap &&  last < mCap){
            cout << "OK" << endl;
            continue;
        }
        if(correction == 0){
            cout << "WRONG" << endl;
        }
        else if(correction == 1){
            cout << "WRONG " << (last+mCap-mSize)%mCap << endl;
        }
        else if(correction == 2){
            cout << "WRONG " << (last+mCap-mFront)%mCap << endl;
            
        }
        else if(correction == 3){
            if(mFront < last ){
                cout << "WRONG " << mFront+mSize+1 << endl;
            }
            else {
                cout << "WRONG " << mFront - last + mSize << endl;
            }
        }
        else{
            cout << "WRONG " << (mFront + mSize)%mCap << endl;
        }
    }
}