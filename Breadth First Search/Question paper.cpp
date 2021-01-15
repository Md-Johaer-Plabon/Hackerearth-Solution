#include<bits/stdc++.h>
using namespace std;
#define extra 1000001
bool vis[2000010];
int n,a,b;
int bfs(int s)
{
    for(int i=1;i<=2000001;i++)
	{
	    vis[i]=0;
	}
	queue<pair<int,int> >q;
	q.push({s,0});
	vis[s+extra]=1;
	while(!q.empty())
	{
		int u=q.front().first,lev=q.front().second;q.pop();
		if(lev>=n)continue;
		if(!vis[u+a+extra])
		{
			vis[u+a+extra]=1;q.push({u+a,lev+1});
		}
		if(!vis[u-b+extra])
		{
			vis[u-b+extra]=1;q.push({u-b,lev+1});
		}
	}
	int cnt=0;
	for(int i=1;i<=2000001;i++)
	{
	    if(vis[i])cnt++;
	}
	return cnt;
}
int solve(int n,int a,int b)
{
    for(int i=1;i<=2000001;i++)
	{
	    vis[i]=0;
	}
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n-i;j++)
        {
            if(vis[a*i-b*j+extra])break;
            vis[a*i-b*j+extra]=1;
        }
    }
    int cnt=0;
	for(int i=1;i<=2000001;i++)
	{
	    if(vis[i])cnt++;
	}
	return cnt;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>a>>b;
		cout<<solve(n,a,b)<<"\n";	//first solution
		//cout<<bfs(0)<<"\n";		//second solution
	}	
	return 0;
}
