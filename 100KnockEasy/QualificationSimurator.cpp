#include <bits/stdc++.h>
#define rep(i,n) for (int i=0;i < (n); ++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;

int main(){
    int a,b,n,rank_b=0,qualified=0;
    cin >> n >> a >> b;
    for(int i=0; i<n; i++){
        char c;
        cin >> c;
        if(c=='c'){
            cout << "No" << endl;
        } else if(c=='b'){
            if(qualified<a+b && rank_b<b){
                cout << "Yes" << endl;
                qualified++;
            } else {
                cout << "No" << endl;
            }
            rank_b++;
        } else if(qualified<a+b){
            cout << "Yes" << endl;
            qualified++;
        } else {
            cout << "No" << endl;
        }
    }
}
