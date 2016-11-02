#include<stdio.h>
int main()
    {
        int k,a,b,c,d,e,f,p;
        scanf("%d",&k);
        for(p=1;p<=k;p++){
            scanf("%d %d %d %d",&a,&b,&c,&d);
            e=a*d;
            f=(b*d)+c;
            printf("Case %d: ",p);
            if(f<e || (c==0 && d>0))
                printf("Abir will be arrested\n");
            else
                printf("Abir will survive\n");
        }
        return 0;
    }

