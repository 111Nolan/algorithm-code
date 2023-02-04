#include<bits/stdc++.h>
using namespace std;
using namespace std;
/*
简单的图的遍历
*/
int r,s,ans;
vector<bool>visited(26,0);
vector<string>board;
int e1[4]={1,-1,0,0};
int e2[4]={0,0,1,-1};
void dfs(int x,int y,int n)
{
    int flag=0;
    for(int i=0;i<4;i++)
    {
        int newx=x+e1[i],newy=y+e2[i];
        if(newx<0||newx>=r||newy<0||newy>=s)
            continue;
        int t=board[newx][newy]-'A';
        if(visited[t])
            continue;
        flag=1;
        visited[t]=true;
        dfs(newx,newy,n+1);
    }
    if(!flag)
        ans=max(ans,n);
}
int main()
{
    scanf("%d%d",&r,&s);
    for(int i=0;i<r;i++)
    {
        string a;
        cin>>a;
        board.push_back(a);
    }
    visited[board[0][0]-'A']=true;
    dfs(0,0,1);
    printf("%d",ans);
}