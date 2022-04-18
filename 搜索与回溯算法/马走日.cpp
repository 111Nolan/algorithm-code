#include<bits/stdc++.h>
using namespace std;
int n,m,ans;
bool visited[20][20];
int e1[8]={1,1,-1,-1,2,2,-2,-2};
int e2[8]={2,-2,2,-2,1,-1,1,-1};
void dfs(int x,int y,int c)
{
    if(c==n*m)
    {
        ans++;
        return;
    }
    for(int i=0;i<8;i++)
    {
        int newx=x+e1[i],newy=y+e2[i];
        if(newx>=0&&newx<n&&newy>=0&&newy<m&&visited[newx][newy]==false)
        {
            visited[newx][newy]=true;
            dfs(newx,newy,c+1);
            visited[newx][newy]=false;
        }
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y;
        scanf("%d %d %d %d",&n,&m,&x,&y);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                visited[i][j]=false;
        }
        visited[x][y]=true;
        ans=0;
        dfs(x,y,1);//第一个点就是第一步了，要注意，就是这里ac不了
        printf("%d\n",ans);
    }
}