#include <bits/stdc++.h>
using namespace std;
 
int main() { 
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
		int n,a[50009],dis[50009];
		cin>>n;
		for(int i=1;i<=n;i++)cin>>a[i],dis[i]=INT_MAX;
        dis[n+1]=INT_MAX;
		dis[a[1]]=0; 
		set<int>q;
		q.insert(1); 
		
		while(q.size()){ 
			int i=*(q.begin()); 
			q.erase(q.begin()); 
			if(dis[a[i+1]]>dis[a[i]]+1)
			dis[a[i+1]]=dis[a[i]]+1,q.insert(i+1); 
			if(dis[a[i-1]]>dis[a[i]]+1)
			dis[a[i-1]]=dis[a[i]]+1,q.insert(i-1);
			if(dis[a[a[i]]]>dis[a[i]]&&a[i]!=a[a[i]])
			dis[a[a[i]]]=dis[a[i]],q.insert(a[i]);
		} 
		cout<<dis[a[n]]<<endl;
	}
	return 0;
}
