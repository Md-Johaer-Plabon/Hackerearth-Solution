#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll fact[1000005];
bool vis[1003][1003],a[1003][1003];
ll solve(ll n,ll m,ll qr){ 
	for(int i=1;i<=n;i++)
	for(int j=1;j<=m;j++)
	vis[i][j]=0,a[i][j]=0;
	ll x,y;
	ll res=1;
	vector<pair<ll,ll> >v;
	for(int i=0;i<qr;i++)
	cin>>x>>y,a[x][y]=1,v.push_back({x,y});
 
 
	queue<pair<ll,ll> >q;
 
	for(int i=0;i<v.size();i++){
		if(!vis[v[i].first][v[i].second]){
			vis[v[i].first][v[i].second]=1;
			q.push({v[i].first,v[i].second});
			int cnt=1;
			while(!q.empty()){
			  x=q.front().first;
			  y=q.front().second;
			  q.pop();
 
			  if(x-2>=1&& y+1<=m&&!vis[x-2][y+1]&&a[x-2][y+1])
			  q.push({x-2,y+1}),vis[x-2][y+1]=1,cnt++;
 
			  if(x-2>=1&& y-1>=1&&!vis[x-2][y-1]&&a[x-2][y-1])
			  q.push({x-2,y-1}),vis[x-2][y-1]=1,cnt++;
 
			  if(x+2<=n&& y+1<=m&&!vis[x+2][y+1]&&a[x+2][y+1])
			  q.push({x+2,y+1}),vis[x+2][y+1]=1,cnt++;
 
			  if(x+2>=1&& y-1>=1&&!vis[x+2][y-1]&&a[x+2][y-1])
			  q.push({x+2,y-1}),vis[x+2][y-1]=1,cnt++;
 
			  if(x-1>=1&& y+2<=m&&!vis[x-1][y+2]&&a[x-1][y+2])
			  q.push({x-1,y+2}),vis[x-1][y+2]=1,cnt++;
 
			  if(x+1<=n&& y+2<=m&&!vis[x+1][y+2]&&a[x+1][y+2])
			  q.push({x+1,y+2}),vis[x+1][y+2]=1,cnt++;
 
			  if(x-1>=1&& y-2>=1&&!vis[x-1][y-2]&&a[x-1][y-2])
			  q.push({x-1,y-2}),vis[x-1][y-2]=1,cnt++;
 
			  if(x+1<=n&& y-2>=1&&!vis[x+1][y-2]&&a[x+1][y-2])
			  q.push({x+1,y-2}),vis[x+1][y-2]=1,cnt++;
			}
		res= (fact[cnt]*res)%mod;
		}
	}
	return res;
}
int main (){
	int t;
	fact[0]=1;
	for(int i=1;i<=1000000;i++)
	fact[i]=((i%mod)*(fact[i-1]%mod))%mod;
	cin>>t;
	while(t--){
		ll n,m,q;
		cin>>n>>m>>q;
		cout<<solve(n,m,q)<<endl;
	}
	return 0;
}
