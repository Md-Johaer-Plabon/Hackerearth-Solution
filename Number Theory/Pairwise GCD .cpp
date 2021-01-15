#include <bits/stdc++.h>
using namespace std;
#define ll long long
int ph[500000];
void phi(){
	for(int i=1;i<=500000;i++)
	ph[i]=i;
	for(int i=2;i<=500000;i++)
	if(ph[i]==i)
	for(int j=i;j<=500000;j+=i)
	ph[j]=ph[j]/i*(i-1);
}
 
int main() {
	ll n,arr[500009]={0};
	phi();
		int gcd=0;
         for(int i=1;i<=500000;i++){
         	int num=0;
         for(int j=i+i;j<=500000;j+=i)
         num=ph[j/i],arr[j]+=num*i;
         }
         for(int i=1;i<=500000;i++)arr[i]+=arr[i-1];
         int t;
         cin>>t;
         while(t--){
         cin>>n;
         cout<<arr[n]<<endl;
 
         }
	return 0;
}
