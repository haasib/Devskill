#include<stdio.h>
#include<math.h>
int main()
    {
        int k,a,b,c,d,p;
        double e,r;
        scanf("%d",&k);
        for(p=1;p<=k;p++){
            scanf("%d %d %lf %d %d",&a,&b,&r,&c,&d);
            e=sqrt(((a-c)*(a-c))+((b-d)*(b-d)));
            printf("Case %d: ",p);
            if(e>r)
                printf("Outside\n");
            else if(e==r)
                printf("OnCircle\n");
            else
                printf("Inside\n");
        }
        return 0;
    }
