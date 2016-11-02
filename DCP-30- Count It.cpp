#include<bits/stdc++.h>
using namespace std;
int a[26]={0};
void ch(string s)
    {
        for(int i=0;i<26;i++)
            a[i]=0;
        for(int i=0;i<s.length();i++){
            int c=0;
            for(int j=0;j<s.length();j++){
                if(j<i && s[i]==s[j])
                    break;
                if(s[i]==s[j])
                    c++;
                if(j==s.length()-1){
                    int t=(int)s[i]-'a';
                    a[t]=c;
                }
            }
        }
    }
int main()
    {
        int k;
        cin>>k;
        for(int p=1;p<=k;p++){
            string s;
            cin>>s;
            ch(s);
            cout<<"Case "<<p<<":"<<endl;
            for(int i=0;i<26;i++){
                if(a[i]>0){
                    cout<<char(i+97)<<" "<<a[i]<<endl;
                }
            }
        }
        return 0;
    }
