#include <stdio.h>
#include <string.h>
int min(int a, int b)
{   return a < b ? a : b;  }
int findMinInsertionsDP(char str[], int n)
{
    int table[n][n], l, h, gap;
    memset(table, 0, sizeof(table));
    for (gap = 1; gap < n; ++gap)
        for (l = 0, h = gap; h < n; ++l, ++h)
            table[l][h] = (str[l] == str[h])? table[l+1][h-1] :
                          (min(table[l][h-1], table[l+1][h]) + 1);
    return table[0][n-1];
}
int main()
{
    int tc,p;
    char str[1000];
    scanf("%d",&tc);
    for(p=1;p<=tc;p++){
        scanf("%s",&str);
    printf("Case %d: %d\n",p, findMinInsertionsDP(str, strlen(str)));
    }
    return 0;
}
