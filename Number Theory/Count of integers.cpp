#include <bits/stdc++.h>
using namespace std;
#define ll long long 
ll a[1000009]; 
ll phi[1000009];
int main() {
	for(ll i=2;i<=1000000;i++)
	for(ll j=i+i;j<=1000000;j+=i) 
	a[j]++; 
	
	for(int i=1;i<=1000000;i++)phi[i]=i;
	
	for(ll i=2;i<=1000000;i++) 
	if(phi[i]==i)
	for(ll j=i;j<=1000000;j+=i) 
	phi[j]=phi[j]/i*(i-1);
	
	ll t;
	cin>>t;
	while(t--){
		ll n;
		scanf("%lld",&n); 
		ll temp = n-1-a[n]-phi[n];
		printf("%lld\n",temp);
	}
	return 0;
}
