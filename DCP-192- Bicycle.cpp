#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
    {
        int tc,n;
        ll c,d;
        scanf("%d",&tc);
        for(int p=1;p<=tc;p++){
            scanf("%d",&n);
            ll a=LONG_LONG_MAX,b=LONG_LONG_MAX;
            while(n--){
                scanf("%lld %lld",&c,&d);
                if(c<a){
                    a=c;
                    b=d;
                }
                else if(a==c)b=min(b,d);
            }
            printf("Case %d: %lld %lld\n",p,a,b);
        }
        return 0;
    }
