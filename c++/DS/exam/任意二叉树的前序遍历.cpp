#include<bits/stdc++.h>
using namespace std;
struct node
{
    int l,r;
    int val=0;
};
void preorder(vector<node>tree,int root)
{
    cout<<root<<" ";
    int le=tree[root].l,ri=tree[root].r;
    if(le!=-1)
        preorder(tree,le);
    if(ri!=-1)
        preorder(tree,ri);
}
int main()
{
    int n;
    scanf("%d",&n);
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
    preorder(tree,root);
}