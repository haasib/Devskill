#include<bits/stdc++.h>
using namespace std;
#define m 10001
bitset<m>bt;
int p[m]={0};
void sieve()
    {
        bt[0]=bt[1]=1;
        int e=1;
        p[2]=1;
        for(int i=4;i<m;i+=2)bt[i]=1;
        for(int i=3;i<=sqrt(m);i+=2){
            if(bt[i]==0){
                p[i]=++e;
                for(int j=i*i;j<m;j+=i)bt[j]=1;
            }
        }
        for(int i=101;i<m;i+=2){
            if(bt[i]==0)
               p[i]=++e;
        }
    }
int ch(int n)
    {
        int x,b=0,c=0,e=0;

        for(int i=n-1;i>0;i--){
            if(bt[i]==0){
                c=i;
                break;
            }
            b++;
        }
        for(int i=n+1;i<m;i++){
            if(bt[i]==0){
                if(e<b)
                    c=i;
                break;
            }
            e++;
        }
        return c;
    }
int main()
    {
        sieve();
        int k;
        cin>>k;
        for(int q=1;q<=k;q++){
            int n,x;
            string s="";
            cin>>n;
            for(int i=0;i<n;i++){
                cin>>x;
                if(x==0)
                    s+=" ";
                else if(x==-1)
                    s+=".";
                else{
                    int r=0,w=x;
                    if(bt[x]!=0)
                        w=ch(x);
                    r=p[w];
                    //cout<<r<<endl;
                    int d=(r%26)+1;
                    //cout<<d<<endl;
                    s+=char(d+96);
                }
            }
            cout<<s<<endl;
        }
        return 0;
    }
