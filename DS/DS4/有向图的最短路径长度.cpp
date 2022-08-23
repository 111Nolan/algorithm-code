#include<bits/stdc++.h>
using namespace std;
const int inf=0x3f3f3f3f;
//djkstras
int main()
{
    int m,n;
    cin>>m>>n;
    // scanf("%d %d",&m,&n);
    // vector<vector<int>>joi(m,vector<int>(m,inf));
    int joi[100][100];//奇怪的错误
    for(int i=0;i<100;i++)
        for(int j=0;j<100;j++)
            joi[i][j]=inf;
    vector<bool>vis(m,0);
    for(int i=0;i<n;i++)
    {
        char a,b;
        int t;
        cin>>a>>b>>t;
        joi[a-'A'][b-'A']=t;
        joi[b-'A'][a-'A']=t;
    }
    char a,b;
    cin>>a>>b;
    int x,y;
    x=a-'A';
    y=b-'A';
    int root=x;
    vis[root]=1;
    vector<int>dis(m);
    dis[root]=0;
    for(int i=0;i<m;i++)
    {
        if(i==root)
            continue;
        dis[i]=joi[root][i];
    }
    for(int i=1;i<m;i++)
    {
        int mini=inf,t;
        for(int j=0;j<m;j++)
        {
            if(!vis[j]&&dis[j]<mini)
            {
                mini=dis[j];
                t=j;
            }
        }
        vis[t]=1;
        for(int j=0;j<n;j++)
        {
            if(joi[t][j]!=inf)
            if(!vis[j]&&dis[t]+joi[t][j]<dis[j])
                dis[j]=dis[t]+joi[t][j];
        }
    }
    printf("%d\n",dis[y]);
}