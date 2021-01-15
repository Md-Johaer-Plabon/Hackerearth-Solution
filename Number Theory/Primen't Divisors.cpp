#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool prime[1000009];
vector<ll>v;
void sieve(){
	for(ll i=2;i<=1000000;i++){
		if(!prime[i]){
			v.push_back(i);
		for(ll j=i*i;j<=1000000;j+=i)
		prime[j]=1;
		}
	}
}
int main (){
	sieve();
	int t;
	cin>>t;
	while(t--){
		ll n,temp=1,chk;
		cin>>n;
		chk=n;
		set<ll>s;
		for(int i=0;i<v.size()&&v[i]*v[i]<=n;i++){
			int coun=0;
			while(n%v[i]==0)
			n/=v[i],coun++,s.insert(v[i]);
			temp*=(coun+1);
		}
		if(n>1)temp*=2,s.insert(n);
 
		cout<<temp-s.size()<<endl;
	}
	return 0;
}
