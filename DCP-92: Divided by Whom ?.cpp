#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<int,multiset<int> >mp;
multiset<int>::iterator it;
pair<int,int>p[100005];
int ar[100005];
int main()
    {
        int tc,c=0,e,a;
        int n,k,flag;
        scanf("%d",&tc);
        while(tc--){
            c++;
            e=-1;
            flag=1;
            scanf("%d %d",&n,&k);
            for(int i=0;i<n;i++){
                scanf("%d",&ar[i]);
                mp[ar[i]%k].insert(ar[i]);
            }
            sort(ar,ar+n);
            for(int i=0;i<n;i++){
                it = mp[ar[i]%k].find(ar[i]);
                if(it==mp[ar[i]%k].end())continue;
                a= k -(ar[i]%k);
                if(a==k)a=0;
                if(mp[a].empty()){
                    flag = 0;
                    break;
                }
                e++;
                p[e].first=*it;
                mp[ar[i]%k].erase(it);
                p[e].second=*mp[a].begin();
                mp[a].erase(mp[a].begin());
            }
            printf("Case %d:\n",c);
            if(!flag)printf("Not Possible\n");
            else{
                for(int i=0;i<=e;i++)printf("%d %d\n",p[i].first,p[i].second);
            }
            mp.clear();
        }
        return 0;
    }
