#include<bits/stdc++.h>
using namespace std;
/*
经典的回溯问题，做过很多遍了，不解释
*/
vector<vector<vector<int>>>ans;
vector<vector<int>>board(8,vector<int>(8,0));
vector<int> path;
void dfs(int r);
bool judge(int x,int y);
int main()
{
    dfs(0);
    for(int i=0;i<ans.size();i++)
    {
        cout<<"NO. "<<i+1<<endl;
        for(int j=0;j<8;j++)
        {
            for(int k=0;k<8;k++)
                cout<<ans[i][j][k]<<" ";
            cout<<endl;
        }
    }
}
void dfs(int r)
{
    if(r==8)
    {
        ans.push_back(board);
        return;
    }
    for(int i=0;i<8;i++)
    {
        if(judge(r,i))
        {
            board[r][i]=1;
            dfs(r+1);
            board[r][i]=0;
        }
    }
}
bool judge(int x,int y)
{
    for(int i=0;i<x;i++)
    {
        if(board[i][y]==1)
            return false;
    }
    for(int i=x-1,j=y-1;i>=0&&j>=0;i--,j--)
    {
        if(board[i][j]==1)
            return false;
    }
    for(int i=x-1,j=y+1;i>=0&&j<8;i--,j++)
    {
        if(board[i][j]==1)
            return false;
    }
    return true;
}