#include<stdio.h>
#define ll long long
ll ar[15];
ll gcd(ll n,ll m)
    {
        if(!n)return m;
        return gcd(m%n,n);
    }
int main()
    {
        int n,i;
        ll e,r;
        while(scanf("%lld",&e)!=EOF){
            r=1;
            scanf("%d",&n);
            scanf("%lld",&ar[0]);
            if(n>1){
                scanf("%lld",&ar[1]);
                r=gcd(ar[0],ar[1]);
            for(i=2;i<n;i++){
                scanf("%lld",&ar[i]);
                r=gcd(r,ar[i]);
            }
            for(i=0;i<n;i++){
                e-=ar[i]/r;
            }
            }
            else e--;
            printf("Output: %lld\n",e);
        }
        return 0;
    }
