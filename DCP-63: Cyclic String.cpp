#include<bits/stdc++.h>
using namespace std;
bool F(string s,string m)
    {
        for(int i=0;i<s.length();i++){
            if(s[i]==m[0]){
                int t=i;
            for(int j=0;j<m.length();j++){
                if(s[t++]!=m[j])break;
                if(j==m.length()-1)return true;
            }
            }
        }
        return false;
    }
int main()
    {
        int tc;
        string s,m,ss;
        scanf("%d",&tc);
        while(tc--){
            cin>>s>>m;
            ss=s+s;
            //cout<<s.length()<<" "<<m.length()<<endl;
            if( (s.length()==m.length()) && F(ss,m) )printf("YES\n");
            else printf("NO\n");
        }
        return 0;
    }
