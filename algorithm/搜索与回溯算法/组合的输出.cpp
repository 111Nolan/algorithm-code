#include<bits/stdc++.h>
using namespace std;
/*
标准的组合题，不解释
*/
int n,r;
vector<int>path;
vector<vector<int>>ans;
void dfs(int start)
{
    if(path.size()==r)
    {
        ans.push_back(path);
        return;
    }
    else
    {
        for(int i=start;i<=n;i++)
        {
            path.push_back(i);
            dfs(i+1);
            path.pop_back();
        }
    }
}
int main()
{
    scanf("%d %d",&n,&r);
    dfs(1);
    for(auto it:ans)
    {
        for(auto c:it)
            printf("%3d",c);
        cout<<endl;
    }
}