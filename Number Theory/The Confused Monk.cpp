#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define mod 1000000007
ll binpow(ll a,ll b){
	ll res =1;
	while(b){
		if(b&1)res=((res%mod)*(a%mod))%mod;
		a=((a%mod)*(a%mod))%mod;
		b>>=1;
	} 
	return res;
}
 
int main() {
	int n,a[55];
	cin>>n; 
	cin>>a[0]; 
	int gcd=a[0];
	for(int i=1;i<n;i++){
		cin>>a[i]; 
		gcd=__gcd(gcd,a[i]);
	} 
	ll res=1;
	for(int i=0;i<n;i++)
	   res=((res%mod)*binpow(a[i],gcd))%mod; 
	   cout<<res<<endl;
	return 0;
}
