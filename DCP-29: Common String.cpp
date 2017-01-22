#include<bits/stdc++.h>
using namespace std;
int F(string s,string m)
    {
        int r=0;
        for(int i=0;i<s.length();i++){
            for(int j=0;j<m.length();j++){
                if(s[i]==m[j]){
                    int t=i+1,tt=j+1,c=1;
                    while(t<s.length() && tt<m.length()){
                        if(s[t]==m[tt])c++;
                        else break;
                        t++;
                        tt++;
                    }
                    r=max(r,c);
                }
            }
        }
        return r;
    }
int main()
    {
        int tc;
        string s,m;
        scanf("%d",&tc);
        for(int p=1;p<=tc;p++){
            cin>>s>>m;
            printf("Case %d: %d\n",p,F(s,m));
        }
        return 0;
    }
