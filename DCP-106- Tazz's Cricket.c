#include<stdio.h>
int main()
    {
        int k,n,p,s,c,a;
        scanf("%d",&k);
        for(p=1;p<=k;p++){
            s=0,c=0;
            scanf("%d",&n);
            while(scanf("%d",&a)==1){
                if(a==0)
                    c++;
                else
                    s+=a;
                if(c==n)
                    break;
            }
            printf("Case %d: %d\n",p,s);
        }
        return 0;
    }
