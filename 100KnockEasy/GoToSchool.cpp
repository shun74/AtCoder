#include <bits/stdc++.h>
#define rep(i,n) for (int i=0;i < (n); ++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;

int main(){
    int n;
    cin >> n;
    vector<P> a(n);
    rep(i,n) {
        cin >> a[i].first;
        a[i].second = i+1;
    }
    sort(a.begin(),a.end());
    rep(i,n) cout << a[i].second << " ";
}
