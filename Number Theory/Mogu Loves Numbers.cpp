#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define mod 1000000007
ll prime[1000009];
 
void sieve(){ 
	for(int i=2;i<=1000000;i++)prime[i]=1; 
	for(int i=4;i<=1000000;i+=2)prime[i]=0;
	for(ll i=3;i*i<=1000000;i+=2)
		if(prime[i])
			for(ll j=i*i;j<=1000000;j+=2*i)
		         prime[j]=0; 
	for(int i=1;i<=1000000;i++)
	prime[i]+=prime[i-1];
}
int main() { 
	
	sieve(); 
	
	
int t;
cin>>t;
while(t--){
	int n,m; 
	scanf("%d%d",&n,&m);
	if(n>m)swap(n,m);
    printf("%lld\n",prime[m]-prime[n-1]);
}
return 0;
}
