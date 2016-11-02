#include<stdio.h>
int main()
    {
        int tc,n,r;
        scanf("%d",&tc);
        while(tc--){
            scanf("%d",&n);
            if(n<10)r=1;
            else if(n<100)r=2;
            else if(n<1000)r=3;
            else r=4;
            printf("%d\n",r);
        }
        return 0;
    }
