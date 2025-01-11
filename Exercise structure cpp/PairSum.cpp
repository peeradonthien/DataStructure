#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int N,M,n,m,total;
    vector<int> v;
    cin >> N >> M;
    for(int i = 0 ;i <N ;i++){
        cin >> n;
        v.push_back(n);
    }
    sort(v.begin(),v.end());
    int first,last;
    for(int j=0;j<M;j++){
        cin >> m;
        first = 0;
        last= v.size()-1;
        bool status = false;
        while(first < last){
            total = v[first] + v[last];
            if(total == m){
                status = true;
                break;
            }
            else if (total < m){
                first++ ;
            }
            else{
                last-- ;
            }

        }
        if(status){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
/* grader 60
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
int main() {
    int N,M,n,m;
    vector<int> input;
    cin >> N >> M;
    for (int i = 0; i<N;i++){
        cin >> n;
        input.push_back(n);
    }
    //int index=0;
    sort(input.begin(),input.end());
    for(int k = 0;k<M;k++){
        cin >> m;
        bool found = false;
        for(int j=0; j<N;j++){
            auto it = find(input.begin(),input.end(),(m-input[j]));
            if(it != input.end()){
                if(*it != input[j]){
                    cout << "YES" << endl;
                    found = true;
                    break;
                }
            }
        }
        if(found == false){
            cout << "NO" << endl;
        }
    }
    return 0;
}
*/


/*
#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main() {
    int N,M,n,m;
    vector<int> input;
    set<int> sum;
    cin >> N >> M;
    for (int i = 0; i<N;i++){
        cin >> n;
        input.push_back(n);
    }
    //int index=0;
    for (int j =0; j<input.size();j++){
        for(int k=j+1; k <input.size();k++){
            sum.insert(input[j]+input[k]);
        }
    }
    for (int l=0 ; l<M;l++){
        cin >> m;
        auto it = sum.find(m);
        if (it != sum.end()){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
*/
