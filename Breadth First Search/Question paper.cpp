#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int vis[3000005]; 
#define ex 1000001 
void solve(){
	 int t;
    cin>>t;
    while(t--){ 
    	for(int i=0;i<=3000000;i++)vis[i]=0;
    	ll n,a,b;
    	cin>>n>>a>>b;
    	queue<ll>q;
    	q.push(0); 
    	while(!q.empty()){
    	  ll x=q.front(); 
    	  if(vis[x+ex]==n)break;
    	  q.pop(); 
    	  if(vis[x+a+ex]==0&&x+a!=0)
    	  q.push(x+a);
    	  if(vis[x-b+ex]==0&&x-b!=0)
    	  q.push(x-b);
    	  vis[x+a+ex]=vis[x+ex]+1;
    	  vis[x-b+ex]=vis[x+ex]+1; 
    	}  
    	vis[ex]=1;
    	ll coun=0;
    	for(int i=0;i<=3000000;i++)
    	if(vis[i])coun++;
    	cout<<coun<<endl;
    }
}
 
int main() { 
   solve();
	return 0;
}
