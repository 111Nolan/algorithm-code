#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>board(100,vector<int>(100));
vector<vector<bool>>visited(100,vector<bool>(100,1));
int e2[3]={1,-1,0},e1[3]={0,0,1};
int ans,count1,n;
void dfs(int x,int y)
{
    if(count1==n)
    {
        ans++;
        return;
    }
    else if(count1>n)
        return;
    for(int i=0;i<3;i++)
    {
        int newi=x+e1[i];
        int newj=y+e2[i];
        if(visited[newi][newj]!=0)
        {
            visited[newi][newj]=0;
            count1++;
            dfs(newi,newj);
            count1--;
            visited[newi][newj]=1;
        }
    }
}
int main()
{
    scanf("%d",&n);
    visited[50][50]=0;
    dfs(50,50);
    printf("%d",ans);
}