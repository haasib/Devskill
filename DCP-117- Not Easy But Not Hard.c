#include<stdio.h>
#define ll long long
int main()
    {
        int k;
        ll n;
        scanf("%d",&k);
        while(k--){
            scanf("%lld",&n);
            printf("%lld\n",(n*(n+1))/2);
        }
        return 0;
    }
