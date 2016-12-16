#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll stol(char s[])
    {
        ll r=0;
        int len=strlen(s),c=0;
        while(len--){
            int t=s[c]-65;
            r*=10;
            r+=t;
            c++;
        }
        return r;
    }
ll Ipf(ll n,ll a)
    {
        ll r=0,e=a;
        while(n/e>=1){
            r+=n/e;
            e*=a;
        }
        return r;
    }
int main()
    {
        int tc,a,c=0;
        char ch[11];
        scanf("%d",&tc);
        while(tc--){
            c++;
            scanf("%s",ch);
            scanf("%d",&a);
            ll n=stol(ch);
            printf("Case %d: %lld\n",c,Ipf(n,a)%1000000007);
        }
        return 0;
    }
