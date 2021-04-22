#include <bits/stdc++.h>
#define rep(i,n) for (int i=0;i < (n); ++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;

int main(){
    string a,b;
    cin >> a >> b;
    string c = a+b;
    int n = atoi(c.c_str());
    rep(i,1000){
        if(n==i*i) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}
