#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll F(ll n)
    {
        ll r=1,f=0;
        while(n%2==0){
            n/=2;
            f++;
        }
        if(f>0)r*=(f+1);
        for(ll i=3;i*i<=n;i+=2){
            f=0;
            while(n%i==0){
                n/=i;
                f++;
            }
            if(f>0)r*=(f+1);
        }
        if(n>1)r*=2;
        return r;
    }
int main()
    {
        int tc,c=0;
        ll a,b,p;
        scanf("%d",&tc);
        while(tc--){
            c++;
            p=0;
            scanf("%lld %lld",&a,&b);
            if(b%a!=0)p=0;
            else p=F(b/a);
            printf("Case %d: %lld\n",c,p);
        }
        return 0;
    }
