#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 100000007
ll ar[10005];
void F()
    {
        ar[0]=ar[1]=1;
        for(int i=2;i<=10000;i++)ar[i]=(ar[i-1]*i)%mod;
    }
int main()
    {
        F();
        int tc,n,c=0;
        scanf("%d",&tc);
        while(tc--){
            c++;
            scanf("%d",&n);
            printf("Case %d: %lld\n",c,ar[n]);
        }
        return 0;
    }
