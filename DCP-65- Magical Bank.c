#include<stdio.h>
#include<math.h>
int main()
    {
        int k,n,r;
        scanf("%d",&k);
        while(k--){
            scanf("%d",&n);
            r=ceil(((sqrt(1.0+(8*n)))-1.0)/2.0);
            printf("%d\n",r);
        }
        return 0;
    }
