#include<bits/stdc++.h>
using namespace std;
struct btrees
{
    int val=1;
    int r,l;
};
int main()
{
    int n;
    cin>>n;
    vector<btrees>trees(n+1);
    vector<bool>vis(n+1,0);
    for(int i=0;i<n;i++)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        trees[a].l=b;
        trees[a].r=c;
        if(b!=-1)
            trees[b].val=0;
        if(c!=-1)
            trees[c].val=0;
    }
    int root;
    for(int i=1;i<=n;i++)
        if(trees[i].val)
        {
            root=i;
            break;
        }
    queue<int>myque;
    myque.push(root);
    vis[root]=1;
    while(!myque.empty())
    {
        int s=myque.size();
        for(int i=1;i<=s;i++)
        {
            int t=myque.front();
            cout<<t<<" ";
            myque.pop();
            int l=trees[t].l,r=trees[t].r;
            if(l!=-1&&!vis[l])
            {
                vis[l]=1;
                myque.push(l);
            }
            if(r!=-1&&!vis[r])
            {
                vis[r]=1;
                myque.push(r);
            }
        }
    }
    cout<<endl;
}