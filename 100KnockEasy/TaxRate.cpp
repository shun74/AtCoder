#include <bits/stdc++.h>
#define rep(i,n) for (int i=0;i < (n); ++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;

int main(){
    int n;
    cin >> n;
    rep(i,50000){
        if(int((i+1)*1.08)==n){
            cout << i+1 << endl;
            return 0;
        }
    }
    cout << ":(" << endl;
    return 0;
}
