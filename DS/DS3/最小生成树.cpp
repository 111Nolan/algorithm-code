#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>pic(100,vector<int>(100,0));
vector<bool>vis(100,0);
int m,n,ans;
void prim(int root)
{
    vis[root]=1;
    for(int i=1;i<m;i++)
    {
        int t=INT_MAX,ti,tj;
        for(int j=0;j<m;j++)
        {
            if(vis[j])
            {
                for(int k=0;k<100;k++)
                    if(pic[j][k]&&!vis[k]&&pic[j][k]<t)
                    {
                        t=pic[j][k];
                        ti=j,tj=k;
                    }
            }
        }
        ans+=pic[ti][tj];
        vis[tj]=1;
    }
}
int main()
{
    cin>>m>>n;
    for(int i=1;i<=n;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        pic[a][b]=pic[b][a]=c;
    }
    prim(0);
    cout<<ans<<endl;
}