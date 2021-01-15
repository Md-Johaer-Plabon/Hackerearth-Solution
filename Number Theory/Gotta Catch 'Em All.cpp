#include <bits/stdc++.h>
using namespace std;
int a[1000009],coun[1009];
int main() {
	int t,n;
	cin>>t>>n;
	for(int i=1;i<=n;i++)
	for(int j=i;j<=n;j+=i)
	 a[j]++; 
	for(int i=1;i<=n;i++)coun[a[i]]++; 
	for(int i=1;i<=1000;i++)coun[i]+=coun[i-1]; 
	while(t--){
		cin>>n;
		cout<<coun[a[n]-1]<<endl;
	}
	return 0;
}
