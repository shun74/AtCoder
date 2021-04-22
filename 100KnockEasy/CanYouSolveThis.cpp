#include <bits/stdc++.h>
#define rep(i,n) for (int i=0;i < (n); ++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;

int main(){
    int n,m,c;
    cin >> n >> m >> c;
    vector<int> B(m);
    rep(i,m) cin >> B[i];
    int total=0;
    int count=0;
    int tmp;
    rep(i,n){
        total = 0;
        rep(j,m){
            cin >> tmp;
            total += B[j] * tmp;
        }
        if(total + c > 0) count++;
    }
    cout << count << endl;
}
