#include <bits/stdc++.h>
using namespace std;
int phi[1000009];
int main() {
	int n,m,a[100009],l,r;
	
	for(int i=1;i<=1000000;i++)phi[i]=i;
	for(int i=2;i<=1000000;i++)
	if(phi[i]==i)
	for(int j=i;j<=1000000;j+=i)
	phi[j]=phi[j]/i*(i-1); 
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i]; 
	 if(phi[a[i]]+1==a[i])a[i]=1;
	 else a[i]=0; 
	}
	for(int i=1;i<=n;i++)a[i]+=a[i-1];
	while(m--){
		cin>>l>>r;
		cout<<a[r]-a[l-1]<<endl;
	}
	return 0;
}
