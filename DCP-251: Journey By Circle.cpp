#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a,ll b)
    {
        if(a==0)return b;
        return gcd(b%a,a);
    }
int main()
    {
        int tc;
        ll a,b,p;
        scanf("%d",&tc);
        while(tc--){
            scanf("%lld %lld",&a,&b);
            p=gcd(2*a,2*b);
            //cout<<p<<endl;
            printf("%lld\n",(4*a*b)/p);
        }
        return 0;
    }
