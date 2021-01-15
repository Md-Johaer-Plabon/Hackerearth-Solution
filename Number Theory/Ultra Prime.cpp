#include <bits/stdc++.h>
using namespace std;
int cum[1000006];
bool prime[1000090];
vector<int>v;
void sieve(){
	for(long long i=2;i<=1000000;i++){
		if(!prime[i]){
			v.push_back(i);
			for(long long j=i*i;j<=1000000;j+=i)
			prime[j]=1;
		}
	}
	for(int i=0;i<v.size();i++){
		int sum=0,temp;
		temp=v[i];
		while(temp)
		sum+=temp%10,temp/=10;
		if(!prime[sum])cum[v[i]]++;
	}
	for(int i=1;i<=1000000;i++)
	cum[i]+=cum[i-1];
}
int main() {
	sieve();
	int t,n,m;
	cin>>t;
	while(t--){
		cin>>n>>m;
		cout<<cum[m]-cum[n-1]<<endl;
	}
	return 0;
}
