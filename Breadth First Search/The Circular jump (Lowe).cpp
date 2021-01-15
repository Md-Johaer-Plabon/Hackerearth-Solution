#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main() { 
	int t;
	cin>>t;
	while(t--){
		int n,x,y,a[10005],vis[10005];
		cin>>n>>x>>y; 
		for(int i=1;i<=n;i++) 
		cin>>a[i],vis[i]=INT_MAX,a[i]%=n; 
		vis[x]=0; 
	queue<int>q;
	q.push(x);
	 while(!q.empty()){
	 	int temp=q.front(); 
	 	q.pop(); 
	 	int ind = temp+a[temp];
	 	if(ind>n)ind%=n;
	 	if(vis[ind]>vis[temp]+1) 
	 	q.push(ind),vis[ind]=vis[temp]+1; 
	 	 
		  ind = temp-a[temp]; 
		  if(ind < 1)ind += n; 
		  if(ind>n)ind%=n;
	 	if(vis[ind]>vis[temp]+1) 
	 	q.push(ind),vis[ind]=vis[temp]+1; 
	 }  
	 if(vis[y]==INT_MAX)
	 cout<<-1<<endl;
     else cout<<vis[y]<<endl;
	}
	return 0;
}
