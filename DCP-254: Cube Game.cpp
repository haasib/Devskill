#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
    {
        int tc,c=0,sum,m=INT_MIN;
        int b,s,g,r;
        scanf("%d",&tc);
        while(tc--){
            c++;
            sum=0;
            scanf("%d %d %d %d",&b,&s,&g,&r);
            sum=b+(s*3)+(g*10)-(r*5);
            m=max(m,sum);
            if(sum<0)sum=0;
            printf("Player %d: %d\n",c,sum);
        }
        printf("High Score = %d\n",m);
        return 0;
    }
