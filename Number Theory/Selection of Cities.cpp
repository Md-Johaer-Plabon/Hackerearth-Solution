#include<cstdio>
#define mod 1000000007
long long pow_mod(long long b,long long e)
{
	long long ans=1;
	b%=mod;
	while(e>0)
	{
		if(e&1)
			ans=(ans*b)%mod;
			b=(b*b)%mod;
			e>>=1;
	}
	return ans%mod;
}
int main()
{
	long long t,n;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		long long ans=pow_mod(2,n)-1;
		printf("%lld\n",ans);
		
	}
	return 0;
}
