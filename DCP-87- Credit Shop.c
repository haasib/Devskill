#include<stdio.h>
int p[1005];
int main()
    {
        int i,j,k,temp,tc,t,c,it,a;
        scanf("%d",&tc);
        for(t=1;t<=tc;t++){
            a=0;
            scanf("%d %d",&c,&it);
            for(i=0;i<it;i++) scanf("%d",&p[i]);
            printf("Case %d: ",t);
            for(i=0;i<it-2;i++){
                for(j=i+1;j<it-1;j++){
                    temp=p[i]+p[j];
                    for(k=j+1;k<it;k++){
                        temp+=p[k];
                        if(temp==c){
                            a=1;
                            printf("%d %d %d\n",i+1,j+1,k+1);
                            break;
                        }
                        temp-=p[k];
                    }
                    if(a)break;
                }
                if(a)break;
            }
            if(!a)printf("You are out of your luck!\n");
        }
        return 0;
    }
