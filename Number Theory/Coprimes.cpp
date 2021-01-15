#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n,i;
	cin>>n;
	for( i=n-2;i>=1;i--)if(__gcd(i,n)==1)break; 
	cout<<i<<endl;
	return 0;
}
