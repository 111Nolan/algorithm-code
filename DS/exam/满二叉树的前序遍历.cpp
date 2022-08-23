#include<bits/stdc++.h>
using namespace std;
int n;
void preorder(int root,vector<char>ls)
{
    if(root>=n)
        return;
    cout<<ls[root];
    preorder(root*2+1,ls);
    preorder(root*2+2,ls);
}
int main()
{
    scanf("%d",&n);
    vector<char>ls(n);
    for(int i=0;i<n;i++)
        cin>>ls[i];
    preorder(0,ls);
}