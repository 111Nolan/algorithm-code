#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    vector<int>nums(n);
    vector<int>c(n);
    vector<int>dp(n,1);
    for(int i=0;i<n;i++)
        c[i]=i;
    for(int i=0;i<n;i++)
        scanf("%d",&nums[i]);
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(nums[j]>nums[i])
            {
                if(dp[j]+1>dp[i])
                {
                    dp[i]=dp[j]+1;
                    c[i]=j;
                }
            }
        }
    }
    int max=INT_MIN,maxi;
    for(int i=0;i<n;i++)
    {
        if(max<dp[i])
        {
            max=dp[i];
            maxi=i;
        }
    }
    vector<int>ans;
    while(c[maxi]!=maxi)
    {
        ans.push_back(nums[maxi]);
        maxi=c[maxi];
    }
    ans.push_back(nums[maxi]);
    for(int i=ans.size()-1;i>=0;i--)
        printf("%d ",ans[i]);
}
