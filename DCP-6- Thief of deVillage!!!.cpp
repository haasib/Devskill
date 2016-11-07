#include<bits/stdc++.h>
using namespace std;
int n,ans[101][101];
vector<int>v[101];
int dp(int i,int j)
    {
        if(i>=0 && i<n &&j>=0 && j<v[i].size()){
            if(ans[i][j]!=-1)return ans[i][j];
            int temp=-2;
            temp=max(temp,dp(i+1,j)+v[i][j]);
            if(i<n-1) temp=max(temp,dp(i+1,j+1)+v[i][j]);
            else temp=max(temp,dp(i+1,j-1)+v[i][j]);
            ans[i][j]=temp;
            return ans[i][j];
        }
        return 0;
    }
int main()
    {
        while(scanf("%d",&n)!=EOF){
            int a;
            memset(ans,-1,sizeof(ans));
            for(int i=0;i<n;i++){
                v[i].clear();
                for(int j=0;j<=i;j++){
                    scanf("%d",&a);
                    v[i].push_back(a);
                }
            }
            printf("Output: %d\n",dp(0,0));
        }
        return 0;
    }
