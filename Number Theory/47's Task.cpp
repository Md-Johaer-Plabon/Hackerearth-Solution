#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll t;
	cin>>t;
	while(t--){
		ll n,x,m,a[20],j=0;
		map<ll,ll>mp;
		cin>>n>>m;
		for(int i=0;i<m;i++){
		cin>>x;
		if(mp[x]==0)a[j++]=x;
		mp[x]++;
		}
		
		ll ans=0;
		for(ll i=1;i<(1<<j);i++){
			ll denom = 1;
			ll setbits = __builtin_popcount(i);
		
		for(int k=0;k<j;k++)
		if(i&(1<<k))
		denom*=a[k];
		
		if(setbits&1)
		ans+=n/denom;
		else ans-=n/denom; 
		}
		cout<<ans<<endl;
	}
	return 0;
}
