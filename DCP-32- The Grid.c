#include<stdio.h>
#include<stdlib.h>
int main()
    {
        int k,p,a,b,c,d;
        scanf("%d",&k);
        for(p=1;p<=k;p++){
            scanf("%d %d %d %d",&a,&b,&c,&d);
            printf("Case %d: %d\n",p,(abs(a-c)+abs(b-d)));
        }
        return 0;
    }

