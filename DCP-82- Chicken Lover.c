#include<stdio.h>
int main()
    {
        int tc,n;
        scanf("%d",&tc);
        while(tc--){
            scanf("%d",&n);
            if(n>=120)printf("Good Boy Sifat\n");
            else printf("Naughty Boy Sifat\n");
        }
        return 0;
    }
