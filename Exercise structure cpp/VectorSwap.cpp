#include <iostream>
#include <vector>
using namespace std;
void vector_swap(vector<int> &v1,vector<int> &v2,
    int start1, int end1,
    int start2, int end2) {
        vector<int> a1,a2;
        int index=0;
        for (int i = start1 ; i<end1;i++){
            a1.push_back(v1[i-index]);
            v1.erase(v1.begin()+i-index);

            index++;
        }
        /*
        cout << "a1" << endl;
        for(int ff : a1){
            cout << ff << " ";
        }
        cout << endl;
        */
        index = 0;
        for(int j = start2 ; j<end2;j++){
            a2.push_back(v2[j-index]);
            v2.erase(v2.begin()+j-index);
            index++;
        }
        /*
        cout << "a2" << endl;
        for(int fa : a2){
            cout << fa << " ";
        }
        cout << endl;
        */
       //insert 
        for (int k =0 ; k<a1.size();k++){
            v2.insert(v2.begin()+start2+k,a1[k]);
        }
        for (int l =0 ; l<a2.size();l++){
            v1.insert(v1.begin()+start1+l,a2[l]);
        }
}
int main() {
 //read input
    int n,c;
    vector<int>v1,v2;
    cin >> n; //number of v1
    for (int i = 0;i < n;i++) {
        cin >> c;
        v1.push_back(c);
    }
    cin >> n; //number of v2
    for (int i = 0;i < n;i++) {
        cin >> c;
        v2.push_back(c);
    }
    int s1,e1,s2,e2; //position
    cin >> s1 >> e1 >> s2 >> e2;
    //call the function
    vector_swap(v1,v2,s1,e1,s2,e2);
    //display content of the stack
    cout << "v1 has " << v1.size() << endl;
    for (auto &x : v1) { cout << x << " "; }
    cout << endl;
    //display content of the stack
    cout << "v2 has " << v2.size() << endl;
    for (auto &x : v2) { cout << x << " "; }
    cout << endl;
}