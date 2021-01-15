#include <bits/stdc++.h>
using namespace std; 
int a[103][103],dis[103][103];
bool vis[103][103]; 
int n,m;
int grid(int x,int y){ 
	if(x==1||x==n||y==1||y==m)return 0;
	queue<pair<int,int> >q; 
	q.push({x,y});  
	int minn = INT_MAX;
	while(!q.empty()){
		int xi=q.front().first; 
		int yi=q.front().second; 
		q.pop(); 
		if(yi+1<=m&&!vis[xi][yi+1]) {
		q.push({xi,yi+1}),vis[xi][yi+1]=1,dis[xi][yi+1]=dis[xi][yi]+1; 
		
		if(yi+1==m)minn=min(minn,dis[xi][yi+1]);
		}
		if(yi-1>=1&&!vis[xi][yi-1]) {
		q.push({xi,yi-1}),vis[xi][yi-1]=1,dis[xi][yi-1]=dis[xi][yi]+1;  
		
		if(yi-1==1)minn=min(minn,dis[xi][yi-1]);
		}
		if(xi+1<=n&&!vis[xi+1][yi]) {
		q.push({xi+1,yi}),vis[xi+1][yi]=1,dis[xi+1][yi]=dis[xi][yi]+1; 
		
		if(xi+1==n)minn=min(minn,dis[xi+1][yi]);
		}
		if(xi-1>=1&&!vis[xi-1][yi]) {
		q.push({xi-1,yi}),vis[xi-1][yi]=1,dis[xi-1][yi]=dis[xi][yi]+1; 
		
		if(xi-1==1)minn=min(minn,dis[xi-1][yi]); 
		}
	} 
	return minn;
}
 
int main (){ 
	int x,y;
	cin>>n>>m;
	for(int i=1;i<=n;i++) 
	for(int j=1;j<=m;j++) {
	cin>>a[i][j]; 
	if(a[i][j]==2)x=i,y=j; 
	if(a[i][j])vis[i][j]=1;
	} 
	int res = grid(x,y); 
	cout<<((res==INT_MAX)?-1:res)<<endl;
	return 0;
	
}
