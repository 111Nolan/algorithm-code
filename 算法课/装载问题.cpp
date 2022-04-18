#include<bits/stdc++.h>
using namespace std;
/*
简单的回溯就可以做出来了，dfs搜索即可
*/
int n,c,ans;
int w[1010];
void dfs(int t,int m)
{
    if(t>n)
    {
        ans=max(ans,m);
        return;
    }
    if(m+w[t]<=c)
        dfs(t+1,m+w[t]);
    dfs(t+1,m);
}
int main()
{
    scanf("%d %d",&n,&c);
    for(int i=1;i<=n;i++)
        scanf("%d",&w[i]);
    dfs(1,0);
    printf("%d\n",ans);
}