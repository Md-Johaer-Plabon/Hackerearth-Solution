#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m,ls,rs,us,ds;
string s[1003];
ll dis[1003][1003],cum[1000006];
map<ll,ll>mp;
bool vis[1003][1003];
int city(int x,int y){
	queue<pair<int,int> >q;
	vis[x][y]=1;
	q.push({x,y});
	dis[x][y]=0;
	while(!q.empty()){
		int xi=q.front().first;
		int yi=q.front().second;
		q.pop();
		if(yi+1<=m&&dis[xi][yi+1]>dis[xi][yi]+rs&&!vis[xi][yi+1])
		q.push({xi,yi+1}),dis[xi][yi+1]=dis[xi][yi]+rs;
 
		if(yi-1>=1&&dis[xi][yi-1]>dis[xi][yi]+ls&&!vis[xi][yi-1])
		q.push({xi,yi-1}),dis[xi][yi-1]=dis[xi][yi]+ls;
 
		if(xi+1<=n&&dis[xi+1][yi]>dis[xi][yi]+ds&&!vis[xi+1][yi])
		q.push({xi+1,yi}),dis[xi+1][yi]=dis[xi][yi]+ds;
 
		if(xi-1>=1&&dis[xi-1][yi]>dis[xi][yi]+us&&!vis[xi-1][yi])
		q.push({xi-1,yi}),dis[xi-1][yi]=dis[xi][yi]+us;
	}
 
	for(int i=1;i<=n;i++)
	for(int j=1;j<=m;j++)
	if(dis[i][j])
	mp[dis[i][j]]++;
	 int i=1;
	 map<ll,ll>::iterator it,it1;
	 it=mp.begin();
	 it1=mp.begin();
	 cum[i++]=it->first;
	for(it++;it!=mp.end();it++,it1++)
	  it->second+=it1->second,cum[i++]=it->first;
	 mp[1000000000000000005]=mp[cum[i]];
/*	  for(it=mp.begin();it!=mp.end();it++)
	  cout<<it->first<<" = "<<it->second<<endl;*/
	return i;
}
int main() {
	cin>>n>>m;
	char ch;
	for(int i=1;i<=n;i++)
	for(int j=0;j<=m;j++){
		if(j)cin>>ch,s[i]+=ch;
		else s[i]+='0';
		if(ch=='#')vis[i][j]=1;
		dis[i][j]=1000000000000000005;
	}
 
/*	for(int i=1;i<=n;i++){
	for(int j=0;j<=m;j++)
		cout<<s[i][j]<<" ";
		cout<<endl;
	}*/
	int x,y,temp;
	cin>>ls>>rs>>us>>ds>>x>>y;
	ll minn = min(ls,min(rs,min(us,ds)));
	temp = city(x,y);
	cum[temp]=1000000000000000002;
	ll q,cost;
	cin>>q;
	int chk=0;
	if(s[x][y]=='.')chk++;
	while(q--){
	  scanf("%lld",&cost);
	  if(cost<minn){if(chk)printf("1\n");else printf("0\n");continue;}
      int ind = upper_bound(cum+1,cum+temp,cost)-cum;
      printf("%lld\n",mp[cum[ind-1]]+chk);
	}
	return 0;
}
