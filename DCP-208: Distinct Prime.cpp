#include<bits/stdc++.h>
using namespace std;
#define mx 10000001
#define ll long long
bitset<mx>bt;
ll isPrime[664590];
int e=-1;
void sieve()
    {
        bt[0]=bt[1]=1;
        isPrime[++e]=2;
        for(int i=4;i<mx;i+=2)bt[i]=1;
        for(int i=3;i*i<=mx;i+=2){
            if(!bt[i]){
                isPrime[++e]=i;
                for(int j=i*i;j<mx;j+=i)bt[j]=1;
            }
        }
        for(int i=3163;i<mx;i+=2){
            if(!bt[i])isPrime[++e]=i;
        }
    }
bool pf(ll n)
    {
        if(n==0 || n==1)return false;
        int a=0,b=0,c=0,d=0,p;
        for(int i=0;i<=e && isPrime[i]*isPrime[i]<=n;i++){
            d=0;
            if(n%isPrime[i]==0){
                //cout<<isPrime[i]<<" YYY "<<endl;
                c=1;
                d=1;
                while(n%isPrime[i]==0)n/=isPrime[i];
                b++;
                //if(a!=b)return false;
            }
            if(c==1)a++;
            //cout<<a<<" "<<b<<endl;
            if(d==1){
                if(a!=b)return false;
            }
            p=i;
        }
        if(n>1){
            //cout<<n<<endl;
            if(c==1){
                if(isPrime[p+1]!=n)return false;
            }
            else if (bt[n])return false;
        }
        //cout<<n<<endl;
        return true;
    }
int main()
    {
        sieve();
       // cout<<e<<endl;
        //for(int i=0;i<=50;i++)cout<<isPrime[i]<<" ";
        //cout<<endl;
        int tc;
        ll n;
        scanf("%d",&tc);
        while(tc--){
            scanf("%lld",&n);
            //if(n<0)n*=-1;
            if(pf(n))printf("Yes\n");
            else printf("No\n");
        }
        return 0;
    }

