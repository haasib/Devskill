#include<stdio.h>
#include<string.h>
#define ll long long
char s[25];
ll fact(int n)
    {
        ll p=1;
        int i;
        if(n==0)return 1;
        for(i=2;i<=n;i++)
            p*=i;
        return p;
    }
ll ch(ll r,char s[])
    {
        int i,j,c,len=strlen(s);
        for(i=0;i<len;i++){
            c=0;
            for(j=0;j<len;j++){
                if(j<i && s[i]==s[j])
                    break;
                if(s[i]==s[j])
                    c++;
                if(j==(len-1)){
                    if(c>1)
                        r/=fact(c);
                }
            }
        }
        return r;
    }
int main()
    {
        int k;
        scanf("%d",&k);
        while(k--){
            scanf("%s",s);
            ll r=fact(strlen(s));
            printf("%lld\n",ch(r,s));
        }
        return 0;
    }
