#include<bits/stdc++.h>
using namespace std;
struct node
{
    int val=0;
    char l,r;
};
int main()
{
    int n;
    cin>>n;
    vector<node>tree(n);
    for(int i=0;i<n;i++)
    {
        char a,b;
        cin>>a>>b;
        tree[i].l=a;
        tree[i].r=b;
        if(a!='-')
            tree[a-'0'].val=1;
        if(b!='-')
            tree[b-'0'].val=1;
    }
    int root;
    bool f=0;
    for(int i=0;i<n;i++)
        if(tree[i].val==0)
        {
            root=i;
            break;
        }
    queue<int>myque;
    myque.push(root);
    int ans=root;
    while(!myque.empty())
    {
        int s=myque.size();
        for(int i=1;i<=s;i++)
        {
            int t=myque.front();
            myque.pop();
            if(tree[t].l!='-')
            {
                if(f==1)
                {
                    cout<<"NO"<<" "<<root<<endl;
                    return 0;
                }
                myque.push(tree[t].l-'0');
                ans=tree[t].l-'0';
            }
            else
                    f=1;
            if(tree[t].r!='-')
            {
                    if(f==1)
                {
                    cout<<"NO"<<" "<<root<<endl;
                    return 0;
                }
                myque.push(tree[t].r-'0');
                ans=tree[t].r-'0';
            }
            else
                f=1;
        }
    }
    cout<<"YES"<<" "<<ans<<endl;
}