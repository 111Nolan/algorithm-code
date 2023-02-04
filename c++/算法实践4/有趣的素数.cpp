#include<bits/stdc++.h>
using namespace std;
int ans[17],path[17],vis[17];
bool judge(int x)
{
    for(int i=2;i*i<=x;i++)//注意：这里i*i<=x!!!!
        if(x%i==0)
            return false;
    return true;
}
void dfs(int n,int s)
{
    if(s==n&&judge(path[0]+path[n-1]))
    {
        ans[n]++;
        return;
    }
    for(int i=1;i<=n;i++)
    {
        if(!vis[i]&&judge(i+path[s-1]))
        {
            path[s]=i;
            vis[i]=1;
            dfs(n,s+1);
            vis[i]=0;
        }
    }
}
int main()
{
    int n;
    while(cin>>n)
    {
        for(int i=0;i<17;i++)
            vis[i]=0;
        path[0]=1;
        vis[1]=1;//这里有个默认规定 素数环从1开始
        dfs(n,1);
        cout<<ans[n]<<endl;
    }
}