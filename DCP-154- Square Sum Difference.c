#include<stdio.h>
#define ll long long
int main()
    {
        int tc;
        ll r,r1,n;
        scanf("%d",&tc);
        while(tc--){
            n;
            scanf("%lld",&n);
            r=(n*(n+1))/2;
            r*=r;
            r1=(n*(n+1)*(2*n+1))/6;
            printf("%lld\n",r-r1);
        }
        return 0;
    }
