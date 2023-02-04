#include<bits/stdc++.h>
using namespace std;
int ans;
struct node
{
    int val;
    node *l;
    node *r;
};
void insert(node *&root,int v)
{
    if(root==NULL)
    {
        root=new node;
        root->val=v;
        root->l=NULL;
        root->r=NULL;
    }
    if(v<root->val)
        insert(root->l,v);
    else if(v>root->val)
        insert(root->r,v);
}
bool search(int v,node *root)
{
    while(root)
    {
        ans++;
        if(root->val==v)
        {
            cout<<ans<<endl;
            return true;
        }
        else if(root->val<v)
            root=root->r;
        else
            root=root->l;
    }
    return false;
}
int main()
{
    int n;
    scanf("%d",&n);
    node *root=NULL;
    for(int i=1;i<=n;i++)
    {
        int a;
        scanf("%d",&a);
        insert(root,a);
    }
    int t;
    scanf("%d",&t);
    if(!search(t,root))
        cout<<"NO";
}