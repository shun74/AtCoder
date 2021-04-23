#include <bits/stdc++.h>
#define rep(i,n) for (int i=0;i < (n); ++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;

int main(){
    int count=0,a,b,c;
    cin >> a >> b >> c;
    int tmp_a,tmp_b,tmp_c;
    bool flag=true;
    if(a%2==1||b%2==1||c%2==1) {
        flag = false;
    } else if(a==b&&b==c){
        flag = false;
        count = -1;
    }
    while(flag){
        count++;
        tmp_a = a/2;
        tmp_b = b/2;
        tmp_c = c/2;
        a = tmp_b + tmp_c;
        b = tmp_c + tmp_a;
        c = tmp_a + tmp_b;
        if(a%2==1||b%2==1||c%2==1) {
            flag = false;
        } else if(a==b&&b==c){
            flag = false;
            count = -1;
        }
    }
    cout << count << endl;
}
