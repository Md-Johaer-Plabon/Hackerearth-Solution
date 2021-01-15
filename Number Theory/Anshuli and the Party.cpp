#include<bits/stdc++.h>
 
#define ll long long
 
#define pb push_back
 
#define mp make_pair
 
ll fastmod(ll a,ll b,ll m)
 
{
 
    ll ans=1;
 
    a=a%m;
 
    if(a==0)
 
        return 0;
 
    while(b>0)
 
    {
 
        if(b&1)
 
            ans=(ans*a)%m;
 
        b=b>>1;
 
        a=(a*a)%m;
 
    }
 
    return ans%m;
 
}
 
using namespace std;
 
int main()
 
{
 
 
    ll t,n,a;
 
    cin>>t;
 
    while(t--)
 
    {
 
        string s,t;
 
        cin>>s>>t;
 
        ll m=1000000007;
 
        ll x=0,y=0;
 
        for(ll i=0;i<s.size();i++)
 
            x=(x*10+s[i]-'0')%m;
 
        for(ll i=0;i<t.size();i++)
 
            y=(y*10+t[i]-'0')%(m-1);
 
        cout<<fastmod(x,y,m)<<"\n";
 
    }
 
}
