#include<bits/stdc++.h>
using namespace std;
int n;
string path;
vector<string>ans;
void dfs(int t)
{
    if(t==n)
    {
        ans.push_back(path);
        return;
    }
    for(int i=0;i<n;i++)
    {
        path.push_back('a'+i);
        dfs(t+1);
        path.pop_back();
    }
}
int main()
{
    path="";
    cin>>n;
    dfs(0);
    sort(ans.begin(),ans.end());
    for(auto c:ans)
        cout<<c<<endl;
}