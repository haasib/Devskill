#include<stdio.h>
#define ll long long
int main()
    {
        int k,p;
        ll n;
        scanf("%d",&k);
        for(int p=1;p<=k;p++){
            scanf("%lld",&n);
            n*=3;
            printf("Case #%d: ",p);
            if(n%2)
                printf("%lld %lld %lld\n",n-2,n-1,n);
            else
                printf("%lld %lld %lld\n",n,n-1,n-2);
        }
        return 0;
    }
