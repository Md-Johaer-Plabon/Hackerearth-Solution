#include <bits/stdc++.h>
using namespace std; 
#define mod 1000000007
#define ll long long
void EE(ll a, ll b, ll& x, ll& y){
    if(a%b == 0){
        x=0;
        y=1;
        return;
    }
    EE(b,a%b,x,y);
    ll temp = x;
    x = y;
    y = (temp%mod) - ((y%mod)*((a/b)%mod))%mod; 
    y%=mod;
} 
 
int main() { 
	ll fact[100009]; 
	fact[0]=1; 
	for(int i=1;i<=100000;i++)fact[i]=((fact[i-1]%mod)*(i%mod))%mod;
	int t;
	cin>>t; 
	while(t--){ 
	ll a,b,x,y,n,k; 
	cin>>n>>k; 
	ll res=1;
	EE(fact[k-n],mod,x,y);
	ll modinv = (x+mod)%mod; 
	res= (fact[k]*modinv)%mod; 
	cout<<res<<endl;
	}
}
