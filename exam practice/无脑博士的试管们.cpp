#include<bits/stdc++.h>
using namespace std;
int a,b,c;
bool vis[25][25][25];
vector<int>ans;
void dfs(int x,int y,int z)
{
    if(vis[x][y][z])
        return ;
    vis[x][y][z]=1;
    if(x==0)
        ans.push_back(z);
    if(x>0)
    {
        int tb=min(b-y,x),tc=min(c-z,x);
        dfs(x-tb,y+tb,z);
        dfs(x-tc,y,z+tc);
    }
    if(y>0)
    {
        int ta=min(a-x,y),tc=min(c-z,y);
        dfs(x+ta,y-ta,z);
        dfs(x,y-tc,z+tc);
    }
    if(z>0)
    {
        int ta=min(a-x,z),tb=min(b-y,z);
        dfs(x+ta,y,z-ta);
        dfs(x,y+tb,z-tb);
    }
}
int main()
{
    while(scanf("%d %d %d",&a,&b,&c)!=EOF)//注意加上eof
    {
        for(int i=0;i<22;i++)
            for(int j=0;j<22;j++)
                for(int k=0;k<22;k++)
                    vis[i][j][k]=0;
        ans.clear();
        dfs(0,0,c);
        sort(ans.begin(),ans.end(),[&](int a,int b)->bool{return a<b;});
        for(int c:ans)
            printf("%d ",c);
    }
}