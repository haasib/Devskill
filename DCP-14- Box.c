#include<stdio.h>
#include<math.h>
int main()
    {
        int k,p;
        double a,b,c;
        scanf("%d",&k);
        for(p=1;p<=k;p++){
            double a,b,c;
            scanf("%lf %lf %lf",&a,&b,&c);
            printf("%.2lf\n",sqrt(((a*a)+(b*b))+(c*c)));
        }
        return 0;
    }
