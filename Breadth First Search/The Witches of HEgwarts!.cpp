#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
	int t;
	cin>>t;
	while(t--){
		map<ll,ll>mp;
		queue<ll>q;
		ll n;
		cin>>n; 
		if(n==1){cout<<0<<endl;continue;}
		q.push(n);
		while(!q.empty()){
			ll x=q.front(); 
			q.pop();  
			if(mp[x-1]==0)q.push(x-1);
			if(mp[x-1]>0)
			mp[x-1]=min(mp[x-1],mp[x]+1);  
			else mp[x-1]=mp[x]+1;
			if(x-1==1){cout<<mp[x-1]<<endl;break;} 
			if(x%2==0){ 
				if(mp[x/2]==0)q.push(x/2);
				if(mp[x/2]>0)
			mp[x/2]=min(mp[x/2],mp[x]+1); 
				else mp[x/2]=mp[x]+1;
		    if(x/2==1){cout<<mp[x/2]<<endl;break;}
			}
			if(x%3==0) { 
			if(mp[x/3]==0)q.push(x/3);
			if(mp[x/3]>0)
			mp[x/3]=min(mp[x/3],mp[x]+1);
				else mp[x/3]=mp[x]+1;
			if(x/3==1){cout<<mp[x/3]<<endl;break;}
			}
		}
	}
	return 0;
}
