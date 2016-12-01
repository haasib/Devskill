#include<stdio.h>
#include<math.h>
#define ll long long
int main()
    {
        int k;
        ll n,r,a;
        scanf("%d",&k);
        while(k--){
            scanf("%lld",&n);
            r=((sqrt(1+(8*n)))-1)/2;
            a=(r*(r+1))/2;
            printf("%lld\n%lld\n",r,n-a);
        }
        return 0;
    }
