#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,maxd,cur,ans=0;
    scanf("%d",&n);
    vector<int>nums(n+1);
    for(int i=1;i<=n;i++)
        scanf("%d",&nums[i]);
    cur=maxd=nums[1];
    for(int i=1;i<=cur;i++)
    {
        maxd=max(maxd,i+nums[i]);
        if(i==cur)
        {
            ans++;
            cur=maxd;
        }
        if(cur>=n)
            break;
    }
    cout<<ans<<endl;
}