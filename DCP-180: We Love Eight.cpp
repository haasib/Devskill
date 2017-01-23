#include<bits/stdc++.h>
using namespace std;
int main()
    {
        string s;
        int tc;
        scanf("%d",&tc);
        while(tc--){
            cin>>s;
            int len=s.length();
            int t=s[len-3]*100+s[len-2]*10+s[len-1];
            if(t%8==0){
                printf("YES\n");
                if(s[0]=='A')printf("1\n");
                else printf("0\n");
            }
            else printf("NO\n");
        }
        return 0;
    }
