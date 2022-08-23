#include<bits/stdc++.h>
using namespace std;
struct btree
{
    bool val=1;
    int l,r;
};
void preordered(vector<btree>tree,int root)
{
    if(root!=-1)
    {
        preordered(tree,tree[root].l);
        cout<<root<<' ';
        preordered(tree,tree[root].r);
    }
}
int main()
{
    int n;
    cin>>n;
    vector<btree>tree(n+1);
    vector<bool>vis(n+1,1);
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        cin>>tree[a].l>>tree[a].r;
        if(tree[a].l!=-1)
            tree[tree[a].l].val=0;
        if(tree[a].r!=-1)
            tree[tree[a].r].val=0;
    }
    int root;
    for(int i=1;i<=n;i++)
        if(tree[i].val)
        {
            root=i;
            break;
        }
    preordered(tree,root);
}