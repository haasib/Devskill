#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 10000001
bitset<mx>bt;
int prime[mx],e=-1;
void sieve()
    {
        bt[0]=bt[1]=1;
        prime[++e]=2;
        for(int i=4;i<mx;i+=2)bt[i]=1;
        for(int i=3;i*i<mx;i+=2){
            if(!bt[i]){
                prime[++e]=i;
                for(int j=i*i;j<mx;j+=i)bt[j]=1;
            }
        }
        for(int i=3163;i<mx;i+=2){
            if(!bt[i])prime[++e]=i;
        }
    }
bool isPrime(ll n)
    {
        //cout<<bt[n]<<endl;
        if(n<=10000000){
            //int m=(int)n;
            if(!bt[n])return true;
           // else
            return false;
        }
        else{
            for(int i=0;i<=e && prime[i]*prime[i]<=n;i++){
                if(n%prime[i]==0)return false;
            }
        }
        return true;
    }
int main()
    {
        sieve();
        int tc;
        ll n;
        scanf("%d",&tc);
        while(tc--){
            scanf("%lld",&n);
            if(n==2 || n==3)printf("1\n");
            else if(n%2!=0){
                //cout<<"YY"<<endl;
                //if(isPrime(n))cout<<"YYYY"<<endl;
                if(isPrime(n))printf("1\n");
                else {
                    if(isPrime(n-2))printf("2\n");
                    else printf("3\n");
                }
            }
            else printf("2\n");
        }
        return 0;
    }
    
