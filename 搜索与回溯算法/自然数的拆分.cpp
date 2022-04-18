#include<bits/stdc++.h>
using namespace std;
/*
简单的递归+回溯模板
*/
vector<vector<int>>ans;
vector<int>path;
void dfs(int n,int start)
{
    if(n==0)
    {
        ans.push_back(path);
        return;
    }
    for(int i=start;i<=n;i++)
    {
        if(i>n)
            break;
        path.push_back(i);
        dfs(n-i,i);
        path.pop_back();
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    dfs(n,1);
    for(int i=0;i<ans.size()-1;i++)
    {
        cout<<n<<"="<<ans[i][0];
        for(int j=1;j<ans[i].size();j++)
            cout<<"+"<<ans[i][j];
        cout<<endl;
    }
}