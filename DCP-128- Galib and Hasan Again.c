#include<stdio.h>
#define ll long long
int main()
    {
        int k,p;
        ll a,b;
        scanf("%d",&k);
        for(p=1;p<=k;p++){
            scanf("%lld %lld",&a,&b);
            a*=2;
            printf("Case %d: %lld\n",p,(a*a)-(b*b));
        }
        return 0;
    }
