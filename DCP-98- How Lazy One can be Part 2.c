#include<stdio.h>
#define ll long long
ll ar[100005];
int main()
    {
        int tc,c,i,j,p;
        ll n,s,ss;
        scanf("%d",&tc);
        for(p=1;p<=tc;p++){
            c=100000000;
            scanf("%lld %lld",&n,&s);
            for(i=0;i<n;i++)scanf("%lld",&ar[i]);
            for(i=0;i<n-1;i++){
                ss=ar[i];
                for(j=i+1;j<n;j++){
                    ss+=ar[j];
                    if(ss>=s){
                        if(j-i+1<c)c=j-i+1;
                        break;
                    }
                }
            }
        if(c==100000000)c=-1;
        printf("Case %d: %d\n",p,c);
        }
        return 0;
    }
