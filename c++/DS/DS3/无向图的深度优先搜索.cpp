#include<bits/stdc++.h>
using namespace std;
int n,k,l;
vector<vector<int>>joi(100);
vector<bool>vis(100,0);
void dfs(int t)
{
    l++;
    vis[t]=1;
    cout<<t<<" ";
    for(int i=0;i<joi[t].size();i++)
        if(!vis[joi[t][i]])
            dfs(joi[t][i]);
}
int main()
{
    cin>>n>>k;
    for(int i=1;i<=k;i++)
    {
        int a,b;
        cin>>a>>b;
        joi[a].push_back(b);
        joi[b].push_back(a);
    }
    for(int i=0;i<n;i++)
        sort(joi[i].begin(),joi[i].end(),[&](int a,int b)->bool{return a<b;});
    dfs(0);
}