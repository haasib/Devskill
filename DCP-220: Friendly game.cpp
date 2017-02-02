#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
    {
        int tc,c=0;
        ll m,n,a;
        scanf("%d",&tc);
        while(tc--){
            c++;
            scanf("%lld",&n);
            m=n;
            while(m--)scanf("%lld",&a);
            printf("Case %d: ",c);
            if(n==1)printf("%lld\n",a);
            else printf("0\n");
        }
        return 0;
    }
