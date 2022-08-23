#include<bits/stdc++.h>
using namespace std;
const int inf =0x3f3f3f3f;
void dfs(vector<int>pre,int s,int t)
{
    if(s==t)
    {
        cout<<s<<" ";
        return;
    }
    dfs(pre,s,pre[t]);
    cout<<t<<" ";
}
int main()
{
    int n,m,s,t;
    while(cin>>n>>m>>s>>t)
    {
        vector<vector<int>>joi(n+1,vector<int>(n+1,inf));
        vector<int>vis(n+1,0);
        vector<int>dis(n+1,inf);
        vector<int>pre(n+1);
        for(int i=0;i<=n;i++)
            pre[i]=i;
        for(int i=1;i<=m;i++)
        {
            int a,b,c;
            cin>>a>>b>>c;
            if(a==s)
            {dis[b]=c;pre[b]=s;}
            joi[a][b]=joi[b][a]=c;
        }
        dis[s]=0;
        vis[s]=1;
        for(int j=2;j<=n;j++)
        {
            int curminlen=inf,curv;
            for(int i=1;i<=n;i++)
            {
                if(!vis[i]&&curminlen>dis[i])
                {
                    curminlen=dis[i];
                    curv=i;
                }
            }
            vis[curv]=1;
            for(int i=1;i<=n;i++)
            {
                if(!vis[i]&&dis[i]>dis[curv]+joi[curv][i])
                {
                    dis[i]=dis[curv]+joi[curv][i];
                    pre[i]=curv;
                }
                if(!vis[i]&&dis[i]==dis[curv]+joi[curv][i]&&pre[i]>curv)//处理最小字典序的问题
                    pre[i]=curv;
            }
        }
        if(dis[t]==inf)
            cout<<-1<<endl;
        else
        {
            cout<<dis[t]<<endl;
            dfs(pre,s,t);
            cout<<endl;
        }
    }
}