#include<stdio.h>
#define ll long long
ll ch(int n,int k)
    {
        ll r=1;
        int p=k,i;
        if(k>n/2)
            k=n-k;
        for(i=0;i<k;i++){
            r*=(n-i);
            r/=(i+1);
        }
        return r;
    }
int main()
    {
        int k,a,b;
        scanf("%d",&k);
        while(k--){
            scanf("%d %d",&a,&b);
            printf("%lld\n",ch(a+b,b));
        }
        return 0;
    }

