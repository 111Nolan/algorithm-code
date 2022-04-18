#include<bits/stdc++.h>
using namespace std;
/*一直通不过的原因是，马所在的位置忘记考虑了*/
int main()
{
    int map[21][21]={0};
    int n,m,x,y;
    scanf("%d%d%d%d",&n,&m,&x,&y);
    vector<vector<long long>>board(n+1,vector<long long>(m+1,0));
    int e1[8]={1,1,-1,-1,2,2,-2,-2};
    int e2[8]={2,-2,2,-2,1,-1,1,-1};
    for(int i=0;i<8;i++)
    {
        int newx=x+e1[i];
        int newy=y+e2[i];
        if(newx<0||newx>n||newy<0||newy>m)
            continue;
        map[newx][newy]=1;
    }
    map[x][y]=1;
    board[0][0]=1;
    for(int i=1;i<=n;i++)
    {
        if(map[i][0])
            break;
        board[i][0]=1;
    }
    for(int i=1;i<=m;i++)
    {
        if(map[0][i])
            break;
        board[0][i]=1;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(map[i][j])
                continue;
            board[i][j]=board[i][j-1]+board[i-1][j];
        }
    }
    printf("%lld",board[n][m]);
}