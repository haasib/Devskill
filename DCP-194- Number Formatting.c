#include<stdio.h>
int main()
    {
        int tc,c;
        char s[20];
        scanf("%d",&tc);
        while(tc--){
            scanf("%s",s);
            if(s[0]!='8' && s[1]!='8'){
                printf("88");
                c=2;
            }
            else c=4;
            printf("%s ",s);
            if(s[c]=='6')printf("Airtel\n");
            else if(s[c]=='7')printf("Grameenphone\n");
            else if(s[c]=='8')printf("Robi\n");
            else if(s[c]=='9')printf("Banglalink\n");
            else if(s[c]=='1')printf("Citycell\n");
            else printf("Teletalk\n");
        }
        return 0;
    }
