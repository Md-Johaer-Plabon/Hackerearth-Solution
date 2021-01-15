#include <bits/stdc++.h>
using namespace std;
#define ll long long 
bool prime[100009];
vector<ll>v;
void sieve(){
	for(ll i=2;i<=100000;i++)
	if(!prime[i]){
		v.push_back(i);
		for(ll j=i*i;j<=100000;j+=i)
		prime[j]=1;
	}
}
int main() { 
	sieve(); 
//	cout<<v.size()<<endl;
	int t;
	cin>>t;
	while(t--){
		ll n,l,r,maxx=2,miny=10000000000,chk[100009]={0}; 
		cin>>n;
		while(n--)
		cin>>l>>r,maxx=max(maxx,l),miny=min(miny,r); 
		
		for(int i=0;i<v.size()&&v[i]*v[i]<=miny;i++){
			ll temp;
			temp=maxx%v[i]; 
			if(maxx<=v[i])temp=v[i]*v[i];
			else if(temp==0)temp=maxx; 
			else temp = maxx+ v[i]-temp; 
			for(ll j=temp;j<=miny;j+=v[i]) 
			  chk[j-maxx]=1;
		} 
		ll coun=0;  
	//	for(int i=1;i<=20;i++)cout<<i<<" = "<<chk[i]<<endl;
		for(int i=0;i<=miny-maxx;i++)if(!chk[i])coun++; 
		if(coun)
		cout<<coun<<endl; 
		else cout<<-1<<endl;
	}
	return 0;
}
