#include<bits/stdc++.h>
using namespace std;
int main (){
	int m,arr[105];
	cin>>m;
	for(int i=0;i<m;i++)cin>>arr[i];
	sort(arr,arr+m);
	vector<int>v,res;
	for(int i=1;i<m;i++)
	v.push_back(arr[i]-arr[0]);
	for(long long i=1;i*i<=v[0];i++){
		int coun=0,coun1=0;
		for(int j=0;j<v.size();j++){
		  if(v[j]%i==0&&i>1)coun++;
		  if(v[0]/i!=i&&v[j]%(v[0]/i)==0)coun1++;
		}
		if(coun==v.size())res.push_back(i);
		if(coun1==v.size())res.push_back(v[0]/i);
	}
	sort(res.begin(),res.end());
	for(int i=0;i<res.size();i++)cout<<res[i]<<" ";
	return 0;
}
