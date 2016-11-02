#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll recur(int a,int b,int c)
    {
        if(a>b && a>c){
            if(b>c){
                return recur(a-(a-b),b,c);
            }
            else{
                return recur(a-(a-c),b,c);
            }
        }
        else if(b>a && b>c){
            if(a>c){
                return recur(a,b-(b-a),c);
            }
            else{
                return recur(a,b-(b-c),c);
            }
        }
        else if(c>a && c>b){
            if(a>b){
                return recur(a,b,c-(c-a));
            }
            else{
                return recur(a,b,c-(c-b));
            }
        }
        return a+b+c;
    }
int main()
    {
        int a,b,c;
        while(cin>>a>>b>>c){
        cout<<recur(a,b,c)<<endl;
        }
        return 0;
    }
