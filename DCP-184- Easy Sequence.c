#include<stdio.h>
#define ll long long
ll ar[45];
int i,tc,n;
void pregen()
    {
        ar[0]=0;
        ar[1]=1;
        ar[2]=3;
        for(i=3;i<45;i++)ar[i]=ar[i-1]+ar[i-2];
    }
int main()
    {
        pregen();
        scanf("%d",&tc);
        while(tc--){
            scanf("%d",&n);
            printf("%d\n",ar[n]);
        }
        return 0;
    }
