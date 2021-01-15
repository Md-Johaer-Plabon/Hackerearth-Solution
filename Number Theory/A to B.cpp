#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define mod 1000000007
void EE(ll a, ll b, ll& x, ll& y){
    if(a%b == 0){
        x=0;
        y=1;
        return;
    }
    EE(b,a%b,x,y);
    ll temp = x;
    x = y;
    y = (temp%mod) - ((y%mod)*((a/b)%mod))%mod; 
    y%=mod;
}
int main() {
	int n,m,zero=0; 
	ll a[100009],sum=1;
	cin>>n;
	for(int i=1;i<=n;i++) {
	cin>>a[i]; 
	if(a[i])
	sum=((sum%mod)*(a[i]%mod))%mod; 
	else zero++;
}
	cin>>m; 
	while(m--){
		ll k,id,val,x,y,temp;
		cin>>k;
		if(k==0){ 
			cin>>id>>val; 
			if(a[id]==0&&val==0)continue; 
			if(a[id]==0&&val)
				zero--; 
			if(a[id]&&val==0) 
			  zero++;
			if(a[id]){
			EE(a[id],mod,x,y); 
			sum=((sum%mod)*((x+mod)%mod))%mod; 
			}
			if(val)sum=((sum%mod)*(val%mod))%mod;
			a[id]=val;
		} 
		if(k==1){
			cin>>id; 
			if(zero>=2||(zero==1&&a[id])){cout<<0<<endl;continue;}
		    if(a[id]==0&&zero==1){cout<<sum<<endl;continue;} 
			EE(a[id],mod,x,y);
			temp=((sum%mod)*((x+mod)%mod))%mod; 
			cout<<temp<<endl;
		}
	}
	return 0;
}
