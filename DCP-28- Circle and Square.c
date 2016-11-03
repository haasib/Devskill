#include<stdio.h>
#include<math.h>
#include<ctype.h>

int main()
{
    int t, i;
    double a,len, radius,r;

    scanf("%d",&t);

    for(i=1;i<=t;i++){
        scanf("%lf%lf",&len,&radius);

        a=floor(sqrt(2*pow(len,2)));

        r=floor(radius);


        if(r==a)
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}
