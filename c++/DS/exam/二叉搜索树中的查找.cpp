#include<bits/stdc++.h>
using namespace std;
int ans;
bool f=0;
struct node
{
    int val;
    node *l,*r;
};
void insert(int v,node *&root)
{
    if(!root)
    {
        root =new node;
        root->val=v;
        root->l=NULL;
        root->r=NULL;
    }
    if(root->val>v)
        insert(v,root->l);
    else if(root->val<v)
        insert(v,root->r);
}
void search(int v,node *root)
{
    ans++;
    if(!root)
        return;
    if(v>root->val)
        search(v,root->r);
    else if(v<root->val)
        search(v,root->l);
    else
        f=1;
}
int main()
{
    int n;
    cin>>n;
    node *root=NULL;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        insert(a,root);
    }
    int t;
    cin>>t;
    search(t,root);
    if(f)
        cout<<ans<<endl;
    else
        cout<<"NO"<<endl;
}