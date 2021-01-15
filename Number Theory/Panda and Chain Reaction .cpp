#include<bits/stdc++.h>
using namespace std;
#define mod 1000003
long long int arr[1000009];
int main (){
	arr[1]=1;
	for(long long int i=2;i<=1000005;i++)
	arr[i]=(arr[i-1]%mod*(i)%mod)%mod;
	int t;
	cin>>t;
	while(t--){
		long long int n,x;
		cin>>n>>x;
		if(n>=mod)cout<<0<<endl;
		else{
		x%=mod;
		long long int temp=arr[n]*x;
		temp%=mod;
        cout<<temp<<endl;
		}
	}
	return 0;
}
