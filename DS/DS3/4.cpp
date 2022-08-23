#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    vector<bool>vis(100,0);
    vector<vector<int>>joi(100);
    for(int i=1;i<=k;i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        joi[a].push_back(b);
        joi[b].push_back(a);
    }
    for(int i=0;i<k;i++)
        sort(joi[i].begin(),joi[i].end(),[&](int a,int b)->bool{return a<b;});
    vis[0]=1;
    queue<int>myque;
    myque.push(0);
    while(!myque.empty())
    {
        int s=myque.size();
        for(int i=1;i<=s;i++)
        {
            int t=myque.front();
            myque.pop();
            cout<<t<<' ';
            for(int j:joi[t])
                if(!vis[j])
                {
                    myque.push(j);
                    vis[j]=1;
                }
        }
    }
}