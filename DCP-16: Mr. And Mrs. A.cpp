#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 1000001
#define mm 1000000000000
vector<ll>v;
set<ll>st;
set<ll>::iterator it;
ll pwr(ll n,ll p)
    {
        if(p==0)return 1;
        ll t=pwr(n,p/2);
        ll tt=t*t;
        if(p%2!=0)tt*=n;
        return tt;
    }
void F()
    {
        for(ll i=2;i<mx;i++){
            for(ll j=2;j<40;j++){
                ll t=pwr(i,j);
                if(t>mm)break;
                st.insert(t);
            }
        }
        for(it=st.begin();it!=st.end();it++)v.push_back(*it);
    }
ll BS(ll val)
    {
        ll B=0,E=v.size()-1,M;
        while(B<=E){
            M=(B+E)/2;
            if(v[M]==val)return M;
            if(val>v[M])B=M+1;
            else E=M-1;
        }
        return B;
    }
int main()
    {
        F();
        int tc,c=0;
        ll n,m;
        scanf("%d",&tc);
        while(tc--){
            c++;
            scanf("%lld %lld",&n,&m);
            ll p=BS(n);
            ll q=BS(m);
            if(v[q]!=m)q--;
            printf("Case %d: %lld\n",c,q-p+1);
        }
        return 0;
    }
