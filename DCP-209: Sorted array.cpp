#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mm 1000000000
vector<ll>v;
ll pwr(ll n , ll p)
    {
        if(p==0)return 1;
        ll t=pwr(n,p/2);
        ll tt=t*t;
        if(p%2!=0)tt*=n;
        return tt;
    }
void F()
    {
        ll a,b,c,d,e,f,g;
        for(int i=0;i<9;i++){
            a=pwr(13,i);
            if(a>mm)break;
            for(int j=0;j<10;j++){
                b=pwr(11,j);
                if(a*b>mm)break;
                for(int k=0;k<12;k++){
                    c=pwr(7,k);
                    if(a*b*c>mm)break;
                    for(int l=0;l<14;l++){
                        d=pwr(5,l);
                        if(a*b*c*d>mm)break;
                        for(int m=0;m<20;m++){
                            e=pwr(3,m);
                            if(a*b*c*d*e>mm)break;
                            for(int n=0;n<31;n++){
                                f=pwr(2,n);
                                if(a*b*c*d*e*f>mm)break;
                                v.push_back(a*b*c*d*e*f);
                            }
                        }
                    }
                }
            }
        }
    }
int main()
    {
        F();
        sort(v.begin(),v.end());
        //cout<<v.size()<<" "<<v[v.size()-1]<<endl;
        //for(int i=0;i<200;i++)cout<<v[i]<<" ";
        int tc,n;
        scanf("%d",&tc);
        while(tc--){
            scanf("%d",&n);
            printf("%d\n",v[n]);
        }
        return 0;
    }
