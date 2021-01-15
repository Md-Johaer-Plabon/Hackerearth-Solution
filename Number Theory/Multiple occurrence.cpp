#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() { 
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	map<int,pair<int,int> >mp; 
	map<int,pair<int,int> >::iterator it;
	int t;
	cin>>t;
	while(t--){ 
		mp.clear();
		ll n,x;
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>x;
		if(mp[x].first==0)
		   mp[x].first=i; 
		   else
		   	mp[x].second=i;
		} 
		ll sum=0; 
		for(it=mp.begin();it!=mp.end();it++) { 
			if(it->second.second==0)continue;
		   sum+=(it->second.second-it->second.first); 
		} 
		cout<<sum<<endl;
	}
	return 0;
}
