#include<bits/stdc++.h>
using namespace std;
int main()
    {
        int k;
        scanf("%d",&k);
        for(int p=1;p<=k;p++){
            int a,b,c,d,e=0;
            for(int i=0;i<2;i++){
                scanf("%d %d %d %d",&a,&b,&c,&d);
                if((a+b)>(c+d))
                    e++;
            }
            if(e==2)
                printf("Banglawash\n");
            else
                printf("Miss\n");
        }
        return 0;
    }
