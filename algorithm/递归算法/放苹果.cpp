#include<iostream>
using namespace std;
/*
递归：搞清楚递归式的含义
dfs（m，n）m个苹果放在n个盘子中的最多的方法
m==0 return 1
n==0 return 0
m<n  dfs（m，n）==dfs（m，m）就是选m个盘子去放
m>=n dfs（m，n）==dfs（m-n,n）+dfs（m,n-1）每个盘子都放东西的情况+没放满的情况
后面的两种情况肯定能归结到第一二两种情况，满足递归的做法
从以上分析可以看出，本题动态规划也可以解决
*/
int dfs(int m,int n)
{
    if(m==0)
        return 1;
    if(n==0)
        return 0;
    if(m<n)
        return dfs(m,m);
    if(m>=n)
        return dfs(m-n,n)+dfs(m,n-1);
    return 0;
}
int main()
{
    int m,n,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&m,&n);
        printf("%d\n",dfs(m,n));
    }

}