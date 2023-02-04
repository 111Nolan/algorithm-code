#include<bits/stdc++.h>
using namespace std;
bool p[550][550];
int ans,n,k,m,c[550];
bool judge(int t,int l)
{
    for(int i=1;i<=n;i++)
        if(p[t][i]==1&&c[i]==l)
            return false;
    return true;
}
void dfs(int t)
{
    if(t>n)
    {
        ans++;
        return;
    }
    for(int i=1;i<=m;i++)
        if(judge(t,i))
        {
            c[t]=i;
            dfs(t+1);
            c[t]=0;
        }
}
int main()
{
    scanf("%d %d %d",&n,&k,&m);
    for(int i=1;i<=k;i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        p[a][b]=p[b][a]=1;
    }
    dfs(1);
    printf("%d\n",ans);
}