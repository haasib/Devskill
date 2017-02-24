#include<bits/stdc++.h>
using namespace std;
#define mx 1001
#define ll long long
bitset<mx>bt;
int prime[170],e=-1;
ll dp[200][1005];
void sieve()
    {
        bt[0]=bt[1]=1;
        prime[++e]=2;
        for(int i=4;i<mx;i+=2)bt[i]=1;
        for(int i=3;i*i<=mx;i+=2){
            if(!bt[i]){
                prime[++e]=i;
                for(int j=i*i;j<mx;j+=i)bt[j]=1;
            }
        }
        for(int i=33;i<mx;i+=2){
            if(!bt[i])prime[++e]=i;
        }
        //
        //cout<<e<<endl;
    }
ll F(int i,int num)
    {
        if(i>e)return 0;
        if(num==0)return 1;
        if(num<0)return 0;
        if(dp[i][num]!=-1)return dp[i][num];
        ll p=0,q=0;
        if(num-prime[i]>=0)p=F(i,num-prime[i]);
        q=F(i+1,num);
        return dp[i][num]=p+q;
    }
int main()
    {
        sieve();
        //for(int i=0;i<100;i++)cout<<prime[i]<<" ";
        int tc,n,c=0;
        ll p;
        scanf("%d",&tc);
        memset(dp,-1,sizeof(dp));
        while(tc--){
            c++;
            scanf("%d",&n);
            p=F(0,n);
            printf("Case %d: ",c);
            if(!p)printf("Wrong\n");
            else printf("%lld\n",p);
        }
        return 0;
    }
