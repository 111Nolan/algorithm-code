#include<bits/stdc++.h>
using namespace std;
string path;
void dfs(int n,int t)
{
    if(t==n)
    {
        for(int i=0;i<path.size();i++)
            cout<<path[i];
        cout<<endl;
        return;
    }
    for(int i=0;i<n;i++)
    {
        char m='a'+i;
        path.push_back(m);
        dfs(n,t+1);
        path.pop_back();
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    dfs(n,0);
}