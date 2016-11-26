#include<stdio.h>
#define ll long long
ll str(int n)
    {
        ll sum=0;
        for(int i=0;i<n;i++){
            if(i%3==0 || i%5==0)sum+=i;
        }
        return sum;
    }
int main()
    {
        int n;
        scanf("%d",&n);
        printf("%lld\n",str(n));
        return 0;
    }
