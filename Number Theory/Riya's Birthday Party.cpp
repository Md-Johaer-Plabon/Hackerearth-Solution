#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
int main() {
	ll n,temp,t;
	cin>>t;
	while(t--){
	cin>>n;
	temp =(n-1)%mod*2+1;
	temp%=mod;
	temp=(temp*(n%mod))%mod;
	cout<<temp<<endl;
	}
	return 0;
}
