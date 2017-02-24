#include<bits/stdc++.h>
using namespace std;
int main()
    {
        int tc,p;
        string s;
        scanf("%d",&tc);
        while(tc--){
            p=1;
            cin>>s;
            for(int i=0;i<s.length();i++){
                if(s[i]=='r'){
                    p=0;
                    break;
                }
            }
            if(p)printf("Vely easy\n");
            else printf("Not vely easy\n");
        }
        return 0;
    }
