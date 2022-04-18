#include<bits/stdc++.h>
using namespace std;
/*
这题没AC过去，但是思路就是这样，就不纠结为什么没AC了
*/
int n,k,ans;
string board[110];
void dfs(int i,int c);
bool judge(int i,int j);
int main()
{
    while(scanf("%d%d",&n,&k)!=EOF&&(n!=-1||k!=-1))
    {
        for(int i=0;i<n;i++)
        {
            string a;
            cin>>a;
            board[i]=a;
        }
        ans=0;
        dfs(0,0);
        printf("%d\n",ans);
    }
}
bool judge(int i,int j)
{
    if(board[i][j]=='.')
        return false;
    for(int m=0;m<i;m++)//只需要检查列
        if(board[m][j]=='@')
            return false;
    return true;
}
void dfs(int i,int c)
{
    if(c==k)
    {
        ans++;
        return;
    }
    for(int m=i;m<n;m++)
    for(int j=0;j<n;j++)//这一层放棋子
    {
        if(judge(m,j))
        {
            board[m][j]='@';
            dfs(m+1,c+1);
            board[m][j]='.';
        }
    }
}