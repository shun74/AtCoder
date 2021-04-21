#include <bits/stdc++.h>
#define rep(i,n) for (int i=0;i < (n); ++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;

int main(){
    int a,b;
    cin >> a >> b;
    int i;
    if ((b-1)%(a-1)==0) i = (b-1)/(a-1);
    else i = (b-1)/(a-1) +1;
    cout << i << endl;
}
