#include<stdio.h>
#define ll long long
int main()
    {
        int k,n,c,i,t;
        ll a,b;
        scanf("%d",&k);
        while(k--){
            scanf("%d",&n);
            a=0,b=0;
            for(i=0;i<n;i++){
                scanf("%d",&c);
                a+=c;
                t=c-i;
                if(t>=0)
                    b+=t;
            }
            printf("%lld\n",a-b);
        }
        return 0;
    }
