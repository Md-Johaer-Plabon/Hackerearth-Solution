#include<cstdio>
#include<cstring>
#include<iostream>
#define MOD 1000000007
using namespace std;
long long f[1000011];
void fact()
{
    f[0] = 1;
    int i = 1;
    while(i<1000011)
    {
        f[i] = f[i-1]*i;
        f[i] = f[i]%MOD;
        i++;
    }
}
long long fast_pow(long long a,long long n)
{
    long long result = 1;
    long long power = n;
    long long value = a;
    while(power>0)
    {
        if(power&1)
        {
            result = result*value;
            result = result%MOD;
        }
        value = value*value;
        value = value%MOD;
        power /= 2;
    }
    return result;
}
long long inv(long long x)
{
    return fast_pow(x,MOD-2);
}
int main()
{
    fact();
    int t;
    scanf(" %d",&t);
    while(t--)
    {
        char goku[1000011];
        scanf(" %s",goku);
        long long v_count = 0, c_count = 0;
        int freq[30] = {0};
        int len = strlen(goku);
        int i;
        for(i=0;i<len;i++)
        {
            freq[goku[i] - 'a']++;
            if(goku[i] == 'a' || goku[i] == 'e' || goku[i] == 'i' || goku[i] == 'o' || goku[i] == 'u')
            {
                v_count++;
            }
            else
            {
                c_count++;
            }
        }
        int possible = c_count + 1 - v_count;
        if(possible < 0)
        {
            printf("-1\n");
        }
        else
        {
            long long c_res = f[c_count];
            long long v_res = f[c_count+1]*inv(f[possible]);     
            v_res %= MOD;
            for(i=0;i<26;i++)
            {
                int tmp = i+'a';
                if(tmp == 'a' || tmp == 'e' || tmp == 'i' || tmp == 'o' || tmp == 'u')
                {
                    v_res = v_res*inv(f[freq[i]]);
                    v_res %= MOD;
                }
                else
                {
                    c_res = c_res*inv(f[freq[i]]);
                    c_res %= MOD;
                }
            }
            printf("%lld\n",(v_res*c_res)%MOD);
        }
    }
    return 0;
}
