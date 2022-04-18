#include<bits/stdc++.h>
using namespace std;
bool vis[9][9];
int board[9][9];
int ans;
void dfs(int r,int sum);
bool judge(int i,int j);
int main()
{
    int k;
    scanf("%d",&k);
    while(k--)
    {
        ans=0;
        for(int i=1;i<=8;i++)
            for(int j=1;j<=8;j++)
            {
                vis[i][j]=0;
                scanf("%d",&board[i][j]);
            }
        dfs(1,0);
        printf("%d\n",ans);
    }
}
bool judge(int i,int j)
{
    for(int r=1;r<i;r++)
        if(vis[r][j]==1)
            return false;
    for(int r=i-1,c=j-1;r>=0&&c>=0;r--,c--)
        if(vis[r][c])
            return false;
    for(int r=i-1,c=j+1;r>=0&&c<=8;r--,c++)
        if(vis[r][c])
            return false;
    return true;
}
void dfs(int r,int sum)
{
    if(r>8)
    {
        ans=max(ans,sum);
        return;
    }
    for(int j=1;j<=8;j++)
        if(judge(r,j))
        {
            vis[r][j]=1;
            dfs(r+1,sum+board[r][j]);
            vis[r][j]=0;
        }
}