#include <bits/stdc++.h>
using namespace std;
#define LL long long int
LL pow(LL a, LL b, LL mod) {
    LL x = 1, y = a;
    while(b > 0) {
        if(b%2 == 1) {
            x=(x*y);
            if(x>mod) x%=mod;
        }
        y = (y*y);
        if(y>mod) y%=mod;
        b /= 2;
    }
    return x;
}
int main()
{
    LL A,B,MOD=1000000007;
    cin>>A>>B;
    cout<<pow(A,B,MOD)<<endl;
    return 0;
}
