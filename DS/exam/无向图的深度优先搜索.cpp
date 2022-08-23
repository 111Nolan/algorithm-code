#include<bits/stdc++.h>
using namespace std;
int m,n;
void dfs(int root,vector<vector<int>>pic,vector<bool>&vis)
{
    cout<<root<<" ";
    vis[root]=1;
    for(int i=0;i<pic[root].size();i++)
    {
        int t=pic[root][i];
        if(!vis[t])
            dfs(t,pic,vis);
    }
}
int main()
{
    cin>>m>>n;
    vector<vector<int>>pic(m);
    vector<bool>vis(m,0);
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        pic[a].push_back(b);
        pic[b].push_back(a);
    }
    for(int i=0;i<m;i++)
        sort(pic[i].begin(),pic[i].end(),[&](int a,int b)->bool{return a<b;});
    dfs(0,pic,vis);
}