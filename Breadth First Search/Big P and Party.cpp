#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n,m,x,y;
	cin>>n>>m;
	vector<int>v[n+5];
	while(m--)cin>>x>>y,
	v[x].push_back(y),
	v[y].push_back(x); 
	
	int dis[2005]={0},vis[2005]={0};
	vis[0]=1;
	queue<int>q;
	q.push(0);
	while(!q.empty()){
		int temp=q.front();
		q.pop(); 
		for(int i=0;i<v[temp].size();i++)
		if(!vis[v[temp][i]])q.push(v[temp][i]),dis[v[temp][i]]=dis[temp]+1,vis[v[temp][i]]=1;
	} 
	for(int i=1;i<n;i++)cout<<dis[i]<<endl;
	return 0;
}
