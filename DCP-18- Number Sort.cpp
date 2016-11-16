#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;
string s[1001];
double strd(string s)
    {
        double r=0;
        int c=0,d=0,e=1;
        for(int i=0;i<s.length();i++){
            if(s[i]=='-')d=1;
            else if(s[i]=='.')c=1;
            else if(!c){
                int t=s[i]-48;
                r*=10;
                r+=t;
            }
            else{
                double t=(double)s[i]-48;
                if(e==1)t/=10;
                else t/=100;
                r+=t;
                e++;
            }
        }
        if(d)r*=-1;
        return r;
    }
int main()
    {
        int tc;
        scanf("%d",&tc);
        while(tc--){
            int n;
            scanf("%d",&n);
            for(int i=0;i<n;i++){
                cin>>s[i];
                mp[s[i]]=i+1;
            }
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    double d=strd(s[i]);
                    double d1=strd(s[j]);
                    if(d>d1){
                        string t=s[i];
                        s[i]=s[j];
                        s[j]=t;
                    }
                    else if(d==d1){
                        if(mp[s[i]]>mp[s[j]]){
                            string t=s[i];
                            s[i]=s[j];
                            s[j]=t;
                        }
                    }
                }
            }
            cout<<s[0];
            for(int i=1;i<n;i++)cout<<","<<s[i];
            printf("\n");
            mp.clear();
        }
        return 0;
    }
