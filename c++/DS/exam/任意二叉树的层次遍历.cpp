#include<bits/stdc++.h>
using namespace std;
struct node
{
    int val=0,l,r;
};
int main()
{
    int n;
    cin>>n;
    vector<node>tree(n+1);
    for(int i=1;i<=n;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        tree[a].l=b;
        tree[a].r=c;
        if(b!=-1)
            tree[b].val=1;
        if(c!=-1)
            tree[c].val=1;
    }
    int root;
    for(int i=1;i<=n;i++)
        if(tree[i].val==0)
        {
            root=i;
            break;
        }
    queue<int>myque;
    myque.push(root);
    while(!myque.empty())
    {
        int s=myque.size();
        for(int i=1;i<=s;i++)
        {
            int t=myque.front();
            myque.pop();
            cout<<t<<" ";
            if(tree[t].l!=-1)
                myque.push(tree[t].l);
            if(tree[t].r!=-1)
                myque.push(tree[t].r);
        }
    }
}