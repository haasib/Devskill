#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000009
ll F(ll n, ll m)
    {
        ll r=0;
        while(n/m>=0){
            r+=(n/m)%mod;
            n/=m;
            if(n==0)break;
        }
        return r%mod;
    }
int main()
    {
        int tc,c=0;
        ll n,m;
        scanf("%d",&tc);
        while(tc--){
            c++;
            scanf("%lld %lld",&n,&m);
            printf("Case %d: %lld\n",c,F(n,m));
        }
        return 0;
    }
