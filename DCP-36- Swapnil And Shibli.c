#include<stdio.h>
int main()
    {
        int tc,a,b,c,a1,b1,c1,e,p;
        scanf("%d",&tc);
        for(p=1;p<=tc;p++){
            scanf("%d %d %d",&a,&b,&c);
            scanf("%d %d %d",&a1,&b1,&c1);
            e=0;
            if( (a>a1 && a>b1 && a>c1) && (b>a1 && b>b1 && b>c1) && (c>a1 && c>b1 && c>c1)) e=1;
            else if( (a1>a && a1>b && a1>c) && (b1>a && b1>b && b1>c) && (c1>a && c1>b && c1>c)) e=2;
            printf("Case %d: ",p);
            if(!e) printf("Both can win\n");
            else if(e==1) printf("Swapnil wins\n");
            else printf("Shibli wins\n");
        }
        return 0;
    }


