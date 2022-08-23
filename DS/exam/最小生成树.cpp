#include<bits/stdc++.h>
using namespace std;
const int inf =0x3f3f3f3f;
int main()
{
    int m,n;
    cin>>m>>n;
    vector<vector<int>>pic(m,vector<int>(m,inf));//可能会赋不上值，再赋一次
    vector<bool>vis(m,0);
    for(int i=0;i<n;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        pic[a][b]=pic[b][a]=c;
    }
    vis[0]=1;
    int ans=0;
    for(int k=1;k<m;k++)
    {
        int mini=inf,t,q;
        for(int i=0;i<m;i++)
        {
            if(vis[i])
            {
                for(int j=0;j<m;j++)
                {
                    if(!vis[j]&&pic[i][j]!=inf&&pic[i][j]<mini)
                    {
                        mini=pic[i][j];
                        q=i;
                        t=j;
                    }
                }
            }
        }
        vis[t]=1;
        ans+=mini;
    }
    cout<<ans<<endl;
}