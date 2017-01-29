#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll pwr(ll n, ll p)
    {
        if(p==0)return 1;
        ll t=pwr(n,p/2)%mod;
        ll tt=(t*t)%mod;
        if(p%2!=0)tt=(tt*n)%mod;
        return tt;
    }
int main()
    {
        int tc;
        ll n,a,b;
        scanf("%d",&tc);
        while(tc--){
            scanf("%lld",&n);
            if(n<5){
                printf("%lld\n",pwr(26,n)%mod);
                continue;
            }
            if(n%2==0)a=4;
            else a=3;
            b=n-a;
            a=pwr(26,a)%mod;
            b=pwr(52,b)%mod;
            printf("%lld\n",(a*b)%mod);
        }
        return 0;
    }
