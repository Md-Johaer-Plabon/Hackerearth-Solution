#include <bits/stdc++.h>
using namespace std;
bool prime[1000009];
vector<long long int>v;
void sieve(){
	for(long long int i=2;i<=1000000;i++){
		if(!prime[i]){
			v.push_back(i);
			for(long long int j=i*i;j<=1000000;j+=i)
			prime[j]=1;
		}
	}
}
int main() { 
	sieve();
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n); 
		if(!prime[n]){printf("%d\n",n);continue;} 
		if(n==1){printf("2\n");continue;} 
		if(n>v[v.size()-1]){printf("%lld\n",v[v.size()-1]);continue;} 
		int x=distance(v.begin(),upper_bound(v.begin(),v.end(),n)); 
		int y=distance(v.begin(),lower_bound(v.begin(),v.end(),n)); 
		if(v[x]-n==n-v[y-1])printf("%lld\n",v[y-1]); 
		else if(v[x]-n>n-v[y-1])printf("%lld\n",v[y-1]); 
		else printf("%lld\n",v[x]);
	}
	return 0;
}
