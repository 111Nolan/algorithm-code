#include<bits/stdc++.h>
using namespace std;
char board[110][110];
bool visited[110][110];
int e1[4]={1,-1,0,0};
int e2[4]={0,0,1,-1};
int y,x,ans;
void dfs(int x1,int y1)
{
    visited[x1][y1]=true;
    for(int i=0;i<4;i++)
    {
        int newx=x1+e1[i],newy=y1+e2[i];
        if(newx>=0&&newx<x&&newy>=0&&newy<y&&visited[newx][newy]==false&&board[newx][newy]=='.')
        {
            ans++;
            dfs(newx,newy);
        }
    }
}
int main()
{
    int a,b;
    while(scanf("%d%d",&y,&x)!=EOF&&(x||y))
    {
        for(int i=0;i<x;i++)
        {
            for(int j=0;j<y;j++)
            {
                cin>>board[i][j];
                // scanf("%c",&board[i][j]);
                if(board[i][j]=='@')
                {
                    a=i,b=j;
                }
            }
        }
        for(int i=0;i<x;i++)
            for(int j=0;j<y;j++)
                visited[i][j]=false;
        ans=1;
        dfs(a,b);
        printf("%d\n",ans);
    }
}