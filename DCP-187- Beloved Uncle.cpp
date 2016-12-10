#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<ll,ll>mp;
map<ll,ll>::iterator it;
ll ar[75];
void fib()
    {
        mp[1]=1;
        mp[2]=2;
        ar[1]=1;
        ar[2]=2;
        for(int i=3;i<=55;i++){
            ar[i]=ar[i-1]+ar[i-2];
            mp[ar[i]]=i;
        }
    }
int main()
    {
        fib();
        ll n;
        while(scanf("%lld",&n)!=EOF){
            ll d=0;
            it=mp.find(n);
            if(it!=mp.end())d=it->second;
            //printf("Showmic brings %lld chocolate on ",n);
            if(d==1)printf("Showmic brings 1 chocolate on 1st day.\n");
            else if(d==2)printf("Showmic brings 2 chocolates on 2nd day.\n");
            else if(d==3)printf("Showmic brings 3 chocolates on 3rd day.\n");
            else printf("Showmic brings %lld chocolates on %lldth day.\n",n,d);
        }
        return 0;
    }
