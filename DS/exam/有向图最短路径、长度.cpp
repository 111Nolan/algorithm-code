#include<bits/stdc++.h>
using namespace std;
const int inf =0x3f3f3f3f;
void print(int y,vector<int>pre)
{
    char a='A'+y;
    if(pre[y]!=y)
    {
        print(pre[y],pre);
        cout<<a<<" ";
    }
    else
        cout<<a<<" ";
}
int main()
{
    int m,n;
    cin>>m>>n;
    vector<vector<int>>pic(m,vector<int>(m,inf));
    vector<bool>vis(m,0);
    vector<int>dis(m,inf);
    vector<int>pre(m);
    for(int i=0;i<n;i++)
    {
        char a,b;
        int c;
        cin>>a>>b>>c;
        int x=a-'A',y=b-'A';
        pic[x][y]=c;
    }
    char a,b;
    cin>>a>>b;
    int x,y;
    x=a-'A',y=b-'A';
    vis[x]=1;
    pre[x]=x;
    // cout<<x<<" "<<y<<endl;
    for(int i=0;i<m;i++)
    {
        if(i==x)
            dis[i]=0;
        else if(pic[x][i]!=inf)
        {
            dis[i]=pic[x][i];
            pre[i]=x;
        }
        else
            dis[i]=inf;
    }
    for(int i=1;i<m;i++)
    {
        int mini=inf,t;
        for(int i=0;i<m;i++)
        {
            if(!vis[i]&&mini>dis[i])
            {
                mini=dis[i];
                t=i;
            }
        }
        vis[t]=1;
        for(int i=0;i<m;i++)
        {
            if(!vis[i]&&pic[t][i]!=inf&&dis[t]+pic[t][i]<dis[i])
            {
                dis[i]=mini+pic[t][i];
                pre[i]=t;
            }
        }
    }
    // cout<<dis[y]<<endl;   //这是最短长度
    print(y,pre);
    cout<<endl;
}