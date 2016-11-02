#include<stdio.h>
#define m 10001
int bt[m];
void sieve()
    {
        int i,j;
        bt[0]=bt[1]=1;
        for(i=4;i<m;i+=2)bt[i]=1;
        for(i=3;i*i<=m;i+=2){
            if(bt[i]==0){
                for(j=i*i;j<m;j+=i)bt[j]=1;
            }
        }
    }
int main()
    {
        sieve();
        int k,n,p;
        scanf("%d",&k);
        for(p=1;p<=k;p++){
            scanf("%d",&n);
            if(bt[n]==0)
                printf("Yes\n");
            else
                printf("No\n");
        }
        return 0;
    }

