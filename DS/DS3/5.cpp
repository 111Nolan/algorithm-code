#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>pic(101,vector<int>(101,0));
vector<int>poi;
vector<bool>vis(100,0);
int ans=0;
void prim(int n)
{
    poi.push_back(0);
    vis[0]=1;
    for(int i=1;i<n;i++)
    {
        int t=INT_MAX,s;
        for(int j=0;j<poi.size();j++)
        {
            for(int k=0;k<100;k++)
            {
                if(!vis[k]&&pic[poi[j]][k]&&pic[poi[j]][k]<t)
                {
                    t=pic[poi[j]][k];
                    s=k;
                }
            }
        }
        poi.push_back(s);
        vis[s]=1;
        ans+=t;
    }
}
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    for(int i=1;i<=k;i++)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        pic[a][b]=c;
        pic[b][a]=c;
    }
    prim(n);
    cout<<ans<<endl;
}