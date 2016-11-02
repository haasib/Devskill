#include<stdio.h>
#include<math.h>
int main()
    {
        int tc,n,p,r;
        scanf("%d",&tc);
        for(p=1;p<=tc;p++){
            scanf("%d",&n);
            r=sqrt(n+0.0001);
            printf("Case %d: ",p);
            if(r*r==n)printf("YES\n");
            else printf("NO\n");
        }
        return 0;
    }
