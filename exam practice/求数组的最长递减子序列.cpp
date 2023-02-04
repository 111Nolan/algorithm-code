#include<bits/stdc++.h>
using namespace std;
const int inf=0x3f3f3f3f;
int main()
{
    int n;
    scanf("%d",&n);
    vector<int>nums(n),pre(n);
    vector<int>dp(n,1);
    int m=0,maxi;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&nums[i]);
        pre[i]=i;
    }
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(nums[j]>nums[i])
            {
                int t=dp[j]+1;
                if(t>dp[i])
                {dp[i]=t;pre[i]=j;}
            }
        }
        if(dp[i]>m)
        {
            m=dp[i];
            maxi=i;
        }
    }
    vector<int>ans;
    while(pre[maxi]!=maxi)
    {
        ans.push_back(nums[maxi]);
        maxi=pre[maxi];
    }
    ans.push_back(nums[maxi]);
    for(int i=ans.size()-1;i>=0;i--)
        cout<<ans[i]<<" ";
}
