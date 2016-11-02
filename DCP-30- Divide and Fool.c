#include<stdio.h>
int main()
    {
        int k,i,a,b,c,pc,x;
        scanf("%d",&k);
        for(i=1;i<=k;i++){
            scanf("%d %d %d",&a,&b,&c);
            printf("%d",a/b);
            pc=0;
            printf(".");
            a%=b;
            while(pc<c){
                a*=10;
                x=a/b;
                a%=b;
                printf("%d",x);
                pc++;
            }
        printf("\n");
        }
        return 0;
    }
