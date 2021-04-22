#include <bits/stdc++.h>
#define rep(i,n) for (int i=0;i < (n); ++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;

int main(){
    int n,k;
    cin >> n;
    cin >> k;
    int ans=0;
    rep(i,n){
        int x;
        cin >> x;
        ans += 2*min(x,k-x);
    }
    cout << ans << endl;
    return 0;
}