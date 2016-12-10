#include<stdio.h>
#define ll long long
ll pwr(ll a,ll b)
    {
        ll p=1;
        for(int i=0;i<b;i++)p*=a;
        return p;
    }
int main()
    {
        ll tc,n,k,c;
        ll a,b,d,e;
        scanf("%lld",&tc);
        while(tc--){
            a=0;
            b=0;
            c=0;
            scanf("%lld %lld",&n,&k);
            a=pwr(10,n-1);
            b=(a*10)-1;
            d=(a-1)/k;
            e=b/k;
            //cout<<a<<" "<<b<<endl;
            //cout<<b-a+1<<endl;
            //cout<<e<<" "<<d<<endl;
            c=e-d;
            printf("%lld\n",c);
        }
        return 0;
    }
