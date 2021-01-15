#include <bits/stdc++.h>
using namespace std;
int phi[1000090];
int main() {
	for(int i=1;i<=1000000;i++)phi[i]=i;
	for(int i=2;i<=1000000;i++){
		if(phi[i]==i)
		for(int j=i;j<=1000000;j+=i)
		phi[j]=phi[j]/i*(i-1);
	}
    int t,n;
    cin>>t;
    while(t--)
    cin>>n,cout<<phi[n]<<endl;
	return 0;
}
