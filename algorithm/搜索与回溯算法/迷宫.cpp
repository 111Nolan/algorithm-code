#include<bits/stdc++.h>
using namespace std;
/*
注意这种迷宫题，因为是找到一条路就算成功所以可以直接返回的
而且对于一个点而言，经过这个点就把visit置1，不需要回溯了，因为通过这个点的所有路径都不行，
那这个点就不需要再考虑了
*/
int a1,b1,a2,b2;
int e1[4]={0,0,1,-1};
int e2[4]={1,-1,0,0};
int n;
string board[110];
bool visited[110][110];
bool dfs(int i,int j)
{
    visited[i][j]=true;//进来一个点就代表已经走过了
    if(i==a2&&j==b2)
        return true;
    for(int m=0;m<4;m++)
    {
        int newx=i+e1[m],newy=j+e2[m];
        if(newx>=0&&newx<n&&newy>=0&&newy<n&&board[newx][newy]=='.'&&visited[newx][newy]==0)
            if(dfs(newx,newy))
                return true;
    }
    return false;
}
int main()
{
    int k;
    scanf("%d",&k);
    while(k--)
    {
        scanf("%d",&n);
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                visited[i][j]=false;
        for(int i=0;i<n;i++)
        {
            string a;
            cin>>a;
            board[i]=a;
        }
        scanf("%d%d%d%d",&a1,&b1,&a2,&b2);
        if(board[a1][b1]=='#'||board[a2][b2]=='#')
        {
            printf("NO\n");
            continue;
        }
        bool ans=dfs(a1,b1);
        if(ans)
            printf("YES\n");
        else
            printf("NO\n");
    }
}