#include<bits/stdc++.h>
using namespace std;
int n,m;
int board[110][110],vis[110][110];
int e1[4]={1,-1,0,0},e2[4]={0,0,1,-1};
int dfs(int i,int j)
{
    if(vis[i][j])
        return vis[i][j];
    vis[i][j]=1;
    for(int q=0;q<4;q++)
    {
        int newx=i+e1[q],newy=j+e2[q];
        if(newx>=1&&newx<=n&&newy>=1&&newy<=m&&board[i][j]>board[newx][newy])
            vis[i][j]=max(vis[i][j],dfs(newx,newy)+1);
    }
    return vis[i][j];
}
int main()
{
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            scanf("%d",&board[i][j]);
    int ans=0;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            ans=max(ans,dfs(i,j));
    cout<<ans<<endl;
}