#include<bits/stdc++.h>
using namespace std;
int main()
    {
        int n;
        scanf("%d",&n);
        string s[n];
        double a[n];
        for(int i=0;i<n;i++)cin>>s[i]>>a[i];
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]<a[j]){
                    double t=a[i];
                    a[i]=a[j];
                    a[j]=t;
                    string tt=s[i];
                    s[i]=s[j];
                    s[j]=tt;
                }
                else if(a[i]==a[j]){
                    if(s[i]>s[j]){
                        double t=a[i];
                    a[i]=a[j];
                    a[j]=t;
                    string tt=s[i];
                    s[i]=s[j];
                    s[j]=tt;
                    }
                }
            }
        }
            int t=1;
            for(int i=0;i<n;i++){
                if(i>0 && a[i]!=a[i-1])++t;
               cout<<t<<"."<<s[i]<<endl;
            }
            return 0;
    }
