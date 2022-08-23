#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    vector<vector<int>>pic(m);
    vector<bool>vis(m,0);
    for(int i=1;i<=n;i++)
    {
        int a,b;
        cin>>a>>b;
        pic[a].push_back(b);
        pic[b].push_back(a);
    }
    for(int i=0;i<m;i++)
        sort(pic[i].begin(),pic[i].end(),[&](int a,int b)->bool{return a<b;});
    vis[0]=1;
    queue<int>myque;
    myque.push(0);
    while(!myque.empty())
    {
        int s=myque.size();
        for(int i=1;i<=s;i++)
        {
            int t=myque.front();
            cout<<t<<" ";
            myque.pop();
            for(int j=0;j<pic[t].size();j++)
            {
                if(!vis[pic[t][j]])
                {
                    myque.push(pic[t][j]);
                    vis[pic[t][j]]=1;
                }
            }
        }
    }
}