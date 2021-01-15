#include <bits/stdc++.h>
using namespace std; 
#define ll long long
int main() {
	ll t;
	cin>>t;
	while(t--){
		ll n,coun[400009]={0},sum=0,x,a[400009],chk[100009]={0}; 
		cin>>n;
		for(int i=0;i<n;i++) 
	     cin>>a[i],coun[a[i]]++;  
	     for(int i=0;i<n;i++){ 
	     	if(!chk[a[i]]){
	     	sum+=((coun[a[i]]-1)*coun[a[i]])/2;  
	     	for(int j=a[i]+a[i];j<=100000;j+=a[i])
	     	sum+=coun[a[i]]*coun[j]; 
	     	} 
	     	chk[a[i]]=1;
	     }
	cout<<sum<<endl;	
	}
	return 0;
}
