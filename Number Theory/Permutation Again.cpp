#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define mod 1000000007
 
int main() {
int t;
cin>>t;
while(t--){
	ll n,x;
	cin>>n;
	if(n==1){cout<<1<<endl;continue;}
	ll temp=n/2;
	n--;
	cout<<(n*(n+1))/2-1+temp<<endl;
}
return 0;
}
