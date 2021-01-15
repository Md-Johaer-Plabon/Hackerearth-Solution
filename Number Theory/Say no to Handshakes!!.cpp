#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll t,n;
	cin>>t;
	while(t--){
		cin>>n; 
        n--;
		ll res= (n*(n+1))/2;
		cout<<res<<endl;
	}
	return 0;
}
