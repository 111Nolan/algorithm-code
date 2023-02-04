#include<bits/stdc++.h>
using namespace std;
int nums[1010];
int main()
{
    int n,x=0,ans=INT_MIN;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&nums[i]);
    for(int i=0;i<n;i++)
    {
        if(x>0)
            x+=nums[i];
        else
            x=nums[i];
        ans=max(ans,x);
    }
    printf("%d\n",ans);
}