#include<bits/stdc++.h>
using namespace std;
struct stu
{
    int l,r;
};
int main()
{
    int n;
    scanf("%d",&n);
    vector<stu>s(n+1);
    for(int i=1;i<=n;i++)
        scanf("%d %d",&s[i].l,&s[i].r);
    int a;
    scanf("%d",&a);
    for(int i=1;i<=n;i++)
    {
        cout<<a<<" ";
        a=s[a].l;
    }
}