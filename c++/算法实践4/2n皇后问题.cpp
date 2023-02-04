#include<bits/stdc++.h>
using namespace std;
/*
思路还是比较简单的，就是跟八皇后差不多
只需要两层遍历，先放白皇后再放黑皇后即可
*/
int board[100][100];
int vis[100][100];
int n,ans;
void dfs(int i);
bool judge(int r,int c,int k);
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            scanf("%d",&board[i][j]);
    dfs(1);
    printf("%d\n",ans);
}
bool judge(int r,int c,int k)
{
    for(int i=1;i<r;i++)
        if(vis[i][c]==k)
            return false;
    for(int i=r-1,j=c-1;i>=0&&j>=0;i--,j--)
        if(vis[i][j]==k)
            return false;
    for(int i=r-1,j=c+1;i>=0&&j<=8;i--,j++)
        if(vis[i][j]==k)
            return false;
    return true;
}
void dfs(int i)
{
    if(i>n)
    {
        ans++;
        return;
    }
    for(int j=1;j<=n;j++)
    {
        if(board[i][j]&&judge(i,j,1))//保证黑皇后在白皇后后面
        {
            vis[i][j]=1;
            for(int t=1;t<=n;t++)
            {
                if(t==j)//防止两个皇后放在一起
                    continue;
                if(board[i][t]&&judge(i,t,2))
                {
                    vis[i][t]=2;
                    dfs(i+1);
                    vis[i][t]=0;
                }
            }
            vis[i][j]=0;
        }
    }
}