#include<bits/stdc++.h>
using namespace std;
int main()
    {
        int k;
        scanf("%d",&k);
        while(k--){
            int d,a,b=-1,c=10000001;
            string s,m,n;
            cin>>d;
            for(int i=0;i<d;i++){
                cin>>s>>a;
                if(a>b){
                    m=s;
                    b=a;
                }
                if(a<c){
                    n=s;
                    c=a;
                }
            }
            cout<<m<<" "<<n<<endl;
        }
        return 0;
    }
