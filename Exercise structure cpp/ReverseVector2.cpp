#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> &v,vector<int>::iterator a,vector<int>::iterator b) {
 //write your code only in this function
    int index;
    if ((b-a) % 2 == 0){
        index = 0;
        for(int i =0;i<b-a;i++){
            v.insert(b-index,*(a));
            v.erase(a);
            index++;
        }
    }
    else{
        index = 0;
        for(int j =0;j<=b-a;j++){
            v.insert(b-index,*(a));
            v.erase(a);
            index++;
        }
    }
    //cout << "Hello" <<endl;
}
int main() {
     //read input
     int n,a,b;
     cin >> n;
     vector<int> v;
     for (int i = 0;i < n;i++) {
        int c;
        cin >> c;
        v.push_back(c);
     }
     cin >> a >> b;
     //call function
     reverse(v,v.begin()+a,v.begin()+b+1);
     //display content of the vector
     for (auto &x : v) {
        cout << x << " ";
     }
     cout << endl;
}
