#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    vector<int>ans(21);
    ans[1]=1,ans[2]=1;
    for(int i=3;i<=20;i++)
        ans[i]+=ans[i-1]+ans[i-2];
    while(n--)
    {
        int a;
        scanf("%d",&a);
        printf("%d\n",ans[a]);
    }
}