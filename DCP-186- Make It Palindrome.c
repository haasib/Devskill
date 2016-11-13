#include <stdio.h>
#include <string.h>
int table[1000][1000], l, h, gap;
int min(int a, int b)
{   return a < b ? a : b;  }
void find(char str[], int n)
{
    memset(table, 0, sizeof(table));
    for (gap = 1; gap < n; ++gap){
        for (l = 0, h = gap; h < n; ++l, ++h){
            if(str[l] == str[h])table[l][h]=table[l+1][h-1];
            else
                table[l][h]= (min(table[l][h-1], table[l+1][h]) + 1);
        }
    }
}
int main()
{
    int tc,p;
    char str[1000];
    scanf("%d",&tc);
    for(p=1;p<=tc;p++){
        scanf("%s",&str);
    find(str, strlen(str));
    printf("Case %d: %d\n",p,table[0][strlen(str)-1]);
    }
    return 0;
}
