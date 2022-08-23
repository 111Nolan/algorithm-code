#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>joi(100);
vector<bool>vis(100,0);
int main()
{
    int n,k;
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
    queue<int>myque;
    myque.push(0);
    vis[0]=1;
    while(!myque.empty())
    {
        int s=myque.size();
        for(int i=1;i<=s;i++)
        {
            int t=myque.front();
            cout<<t<<" ";
            myque.pop();
            for(int j=0;j<joi[t].size();j++)
                if(!vis[joi[t][j]])
                {
                    myque.push(joi[t][j]);
                    vis[joi[t][j]]=1;
                }
        }
    }
}