#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 1000001
ll ar[mx];
void F()
    {
        ar[1]=0;
        ar[2]=2;
        int i=3;
        ll p=6;
        while(i<mx){
            ar[i]=ar[i-1]+p;
            p+=4;
            i++;
        }
    }
int main()
    {
        F();
        int tc;
        ll n;
        scanf("%d",&tc);
        while(tc--){
            scanf("%lld",&n);
            printf("%lld\n",ar[n]);
        }
        return 0;
    }
