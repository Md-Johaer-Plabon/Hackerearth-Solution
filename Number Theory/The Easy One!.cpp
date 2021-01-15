#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define N 1000000007
ll fact[1000001];
int d, x, y;
void factorial()
{
fact[0] = 1;
fact[1] = 1;
for(ll i=2;i<1000001;i++)
{
fact[i] = ((fact[i-1]%N)*(i%N))%N;
}
}
void extendedEuclid(int A, int B) {
if(B == 0) {
d = A;
x = 1;
y = 0;
}
else {
extendedEuclid(B, A%B);
int temp = x;
x = y;
y = temp - (A/B)*y;
}
}
int main()
{
 
factorial();
int t;
cin>>t;
while(t--)
{
ll n;
string s;
cin>>s;
n = s.size();
ll ans = fact[n];
for(int i=0;i<=9;i++)
{
char p = '0'+i;
ll tmp = count(s.begin(),s.end(),p);
if(tmp>1)
{
extendedEuclid(fact[tmp],N);
x = (x%N + N)%N;
ans = ((ans%N)*(x%N))%N;
}
}
cout<<ans<<"\n";
}
return 0;
 
}
