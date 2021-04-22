#include <bits/stdc++.h>
#define rep(i,n) for (int i=0;i < (n); ++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;

int main(){
    int n;
    cin >> n;
    int i=-1;
    while(n > 0){
        n/=2;
        i++;
    }
    cout << (1<<i) << endl;
}