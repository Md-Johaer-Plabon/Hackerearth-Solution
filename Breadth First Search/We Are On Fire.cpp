#include <bits/stdc++.h>
using namespace std; 
bool a[1003][1003],vis[1003][1003]; 
int n,m;
int fire(int x,int y,int cnt){ 
	if(!a[x][y]||cnt==0)
	return cnt; 
	if(!vis[x][y])cnt--; 
	vis[x][y]=1; 
	queue<pair<int,int> >q;
	q.push({x,y}); 
	while(!q.empty()){
		int xi=q.front().first; 
		int yi=q.front().second; 
		q.pop(); 
		if(yi+1<=m&&!vis[xi][yi+1]) 
		q.push({xi,yi+1}),vis[xi][yi+1]=1,cnt--;  
		
		if(yi-1>=1&&!vis[xi][yi-1]) 
		q.push({xi,yi-1}),vis[xi][yi-1]=1,cnt--;  
		
		if(xi+1<=n&&!vis[xi+1][yi]) 
		q.push({xi+1,yi}),vis[xi+1][yi]=1,cnt--;  
		
		if(xi-1>=1&&!vis[xi-1][yi]) 
		q.push({xi-1,yi}),vis[xi-1][yi]=1,cnt--; 
	} 
	return cnt;
}
void solve(int q){ 
	int cnt=0;
	for(int i=1;i<=n;i++) 
	for(int j=1;j<=m;j++){
	    cin>>a[i][j]; 
	    if(a[i][j])cnt++; 
	    else vis[i][j]=1;
	} 
	int x,y;
	while(q--){
		scanf("%d%d",&x,&y);  
		cnt = fire(x,y,cnt);
		printf("%d\n",cnt);
	}
}
int main() {  
	int q;
    cin>>n>>m>>q;
    solve(q);
	return 0;
}
