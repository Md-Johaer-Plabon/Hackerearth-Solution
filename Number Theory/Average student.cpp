#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define mod 1000000007
bool prime[1000009];
vector<int>v;
void sieve(){
	for(ll i=2;i<=1000000;i++){
		if(!prime[i]){
		v.push_back(i);
		for(ll j=i*i;j<=1000000;j+=i)
		prime[j]=1;
		}
	}
}
int main() { 
sieve(); 
int arr[1000009]; 
arr[1]=1;
for(int i=2;i<=1000000;i++){
	int temp=i,res=1;
	for(int j=0;j<v.size()&&v[j]*v[j]<=temp;j++){ 
		int coun=0;
	while(temp%v[j]==0)
	temp/=v[j],coun++; 
	res*=(coun+1);
	}
	if(temp>1)res*=2; 
	if(res>4)arr[i]=0;
	else arr[i]=res;
} 
int ans[5]={0}; 
int n,x;
cin>>n;
while(n--)cin>>x,ans[arr[x]]++; 
cout<<ans[2]+ans[3]-ans[4]-ans[1]<<endl;
return 0;
}
