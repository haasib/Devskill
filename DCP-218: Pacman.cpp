#include<bits/stdc++.h>
using namespace std;
#define mx 105
int dp[mx][mx],val[mx][mx],row,col,tc,res;
int F(int i,int j)
    {
        /*if(i==row && j==col){
            res=max(res,dp[i][j]);
            return 0;
        }*/
        if(i>=row || j>=col)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        int p=0;
        p=max(F(i+1,j)+val[i][j],F(i,j+1)+val[i][j]);
        return dp[i][j]=p;
    }
int main()
    {
        scanf("%d",&tc);
        while(tc--){
            scanf("%d %d",&row,&col);
            for(int i=0;i<row;i++){
                for(int j=0;j<col;j++)scanf("%d",&val[i][j]);
            }
            //res=0;
            memset(dp,-1,sizeof(dp));
            int p=F(0,0);
            printf("%d\n",p);
        }
        return 0;
    }
