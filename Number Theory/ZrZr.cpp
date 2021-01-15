#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll t;
	cin>>t;
	while(t--){
		ll n,ans=5,sum=0; 
		cin>>n;
		while(n/ans) 
		sum+=n/ans,ans*=5;
		cout<<sum<<endl;
	}
	return 0;
}
