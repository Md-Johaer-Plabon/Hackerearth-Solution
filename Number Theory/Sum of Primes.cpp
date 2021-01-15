#include <bits/stdc++.h>
using namespace std;  
#define ll long long
ll prime[1000009];
void sieve(){
	for(ll i=2;i<=1000000;i++)
		if(!prime[i]) 
		for(ll j=i*i;j<=1000000;j+=i)
		prime[j]=1; 
		for(int i=2;i<=1000000;i++) 
		if(!prime[i])prime[i]=i;
		else prime[i]=0; 
	
	for(int i=2;i<=1000000;i++)
	prime[i]+=prime[i-1];
}
int main() { 
	sieve(); 
//	for(int i=1000000;i>=1000000-20;i--)cout<<prime[i]<<endl;
	int n,l,r;
	cin>>n;
	while(n--){
		scanf("%d%d",&l,&r);  
		ll temp = prime[r]-prime[l-1];
		printf("%lld\n",temp);
	}
	return 0;
}
