#include<stdio.h>
int main()
    {
        int a,b,r,c,s,i;
        while(scanf("%d %d",&a,&b)!=EOF){
        s=0;
        for(i=0;i<b;i++){
            scanf("%d",&c);
            s+=c;
        }
        r=0;
        if(a%s==0)
            r=a/s;
        else
            r=(a/s)+1;
        if(r==1)
            printf("Project will finish within 1 day.\n");
        else
            printf("Project will finish within %d days.\n",r);
        }
        return 0;
    }
