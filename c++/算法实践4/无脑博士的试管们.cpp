#include<bits/stdc++.h>
using namespace std;
int a,b,c;
vector<int>ans;
bool vis[25][25][25]={0};
void dfs(int a1,int b1,int c1)
{
    vis[a1][b1][c1]=1;
    if(a1==0)
        ans.push_back(c1);
    if(a1>0)
    {
        int tem1=min(a1,b-b1),tem2=min(a1,c-c1);
        if(!vis[a1-tem1][b1+tem1][c1])
            dfs(a1-tem1,b1+tem1,c1);
        if(!vis[a1-tem2][b1][c1+tem2])
            dfs(a1-tem2,b1,c1+tem2);
    }
    if(b1>0)
    {
        int tem1=min(a-a1,b1),tem2=min(b1,c-c1);
        if(!vis[a1+tem1][b1-tem1][c1])
            dfs(a1+tem1,b1-tem1,c1);
        if(!vis[a1][b1-tem2][c1+tem2])
            dfs(a1,b1-tem2,c1+tem2);
    }
    if(c1>0)
    {
        int tem1=min(a-a1,c1),tem2=min(b-b1,c1);
        if(!vis[a1+tem1][b1][c1-tem1])
            dfs(a1+tem1,b1,c1-tem1);
        if(!vis[a1][b1+tem2][c1-tem2])
            dfs(a1,b1+tem2,c1-tem2);
    }
}
int main()
{
    while(cin>>a>>b>>c)
    {
        for(int i=0;i<25;i++)
            for(int j=0;j<25;j++)
                for(int k=0;k<25;k++)
                    vis[i][j][k]=0;
        ans.clear();
        dfs(0,0,c);
        sort(ans.begin(),ans.end());
        for(int c:ans)
            printf("%d ",c);
    }
}