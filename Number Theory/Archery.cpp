#include <bits/stdc++.h>
using namespace std; 
#define mod 1000000007
#define ll long long
int main() { 
	int t;
	cin>>t;
	while(t--){
		ll n,a[20],num[50]={0};
		cin>>n;
		for(int i=0;i<n;i++){ 
			cin>>a[i]; 
		for(int j=2;j*j<=a[i];j++){ 
			ll coun=0;
		while(a[i]%j==0) 
		coun++,a[i]/=j; 
		num[j]=max(num[j],coun);
		} 
		if(a[i]>1)num[a[i]]=max(num[a[i]],(ll)1);
		} 
		unsigned ll ans=1; 
		for(ll i=2;i<=47;i++) 
		if(num[i])ans*=pow(i,num[i]); 
		cout<<ans<<endl;
	}
return 0;
}
