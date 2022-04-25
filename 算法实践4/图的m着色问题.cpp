#include<bits/stdc++.h>
using namespace std;
/*
这题毫无疑问就是一个图的上色问题
一开始的想法是 回溯+图的深度优先遍历 但是这个想法是不对的
因为图的深度优先遍历的时候，可能不存在可以遍历全部点的起点
如果是全部都遍历那么肯定会重复计算很多遍相同的值

这里需要考虑到的就是一共就n个点并且编号就是1-n，所以思路可以简单一点
直接按序号遍历所有点，每个点上色的时候再进行检查即可
*/
int n,k,m,ans;
const int maxn=1010;
vector<vector<int>>joints(maxn);
vector<int>colors(maxn);
bool judge(int a,int m)
{
    for(int i=0;i<joints[a].size();i++)
        if(colors[joints[a][i]]==m)
            return false;
    return true;
}
void dfs(int a)
{
    if(a==n+1)
    {
        ans++;
        return;
    }
    for(int i=1;i<=m;i++)
    {
        if(judge(a,i))
        {
            colors[a]=i;
            dfs(a+1);
            colors[a]=0;
        }
    }
}
int main()
{
    scanf("%d %d %d",&n,&k,&m);
    for(int i=1;i<=k;i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        joints[a].push_back(b);
        joints[b].push_back(a);
    }
    dfs(1);
    printf("%d\n",ans);
}