#include <bits/stdc++.h>
using namespace std; 
int dis[1003][1003];
int main() {
	string s[1005]; 
	int n,m; 
	char ch; 
	cin>>m>>n; 
	queue<pair<int,int> >q;
	for(int i=0;i<m;i++) 
	for(int j=0;j<n;j++) {
	cin>>ch,s[i]+=ch; 
	if(ch=='E')q.push({i,j}); 
	else dis[i][j]=INT_MAX; 
	if(ch=='B')dis[i][j]=0;
} 
    while(!q.empty()){
    	int xi=q.front().first; 
		int yi=q.front().second; 
		q.pop(); 
		
		if(yi+1<n&&dis[xi][yi+1]>dis[xi][yi]+1) 
		q.push({xi,yi+1}),dis[xi][yi+1]=dis[xi][yi]+1;  
		
		if(yi-1>=0&&dis[xi][yi-1]>dis[xi][yi]+1) 
		q.push({xi,yi-1}),dis[xi][yi-1]=dis[xi][yi]+1;  
		
		if(xi+1<m&&dis[xi+1][yi]>dis[xi][yi]+1) 
		q.push({xi+1,yi}),dis[xi+1][yi]=dis[xi][yi]+1;  
		
		if(xi-1>=0&&dis[xi-1][yi]>dis[xi][yi]+1) 
		q.push({xi-1,yi}),dis[xi-1][yi]=dis[xi][yi]+1;
    } 
    for(int i=0;i<m;i++) {
    for(int j=0;j<n;j++) 
      if(dis[i][j]&&dis[i][j]!=INT_MAX)cout<<dis[i][j]<<" ";
      else cout<<-1<<" "; 
      cout<<endl; 
}
	return 0;
}
