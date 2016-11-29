#include<stdio.h>
#define ll long long
ll ar[60];
void pregen()
    {
        int i;
        ar[0]=0;
        ar[1]=1;
        for(i=2;i<=59;i++)ar[i]=ar[i-1]+ar[i-2];
    }
int main()
    {
        pregen();
        int tc,n,p;
        scanf("%d",&tc);
        for(p=1;p<=tc;p++){
            scanf("%d",&n);
            if(n>=60)n%=60;
            printf("Case %d: %lld is the last digit.\n",p,ar[n]%10);
        }
        return 0;
    }
