#include <bits/stdc++.h>
using namespace std;  
#define ll long long
bool chk[1000009];
ll ans[1000009];
void gen(){
    for(int i=2;i<=1000000;i++)
    for(int j=i;j<=1000000;j+=i)
    	if(!chk[j])ans[i]++,chk[j]=1;
 
}
int main() {
	gen(); 
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		cout<<ans[n]<<endl;
	}
	return 0;
}
