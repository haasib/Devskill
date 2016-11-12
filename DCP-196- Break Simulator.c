#include<stdio.h>
int main()
    {
        int tc,p;
        double a,b;
        scanf("%d",&tc);
        for(p=1;p<=tc;p++){
            scanf("%lf %lf",&a,&b);
            printf("-%.2lf\n",a/b);
        }
        return 0;
    }
