#include<bits/stdc++.h>
using namespace std;
int tri[30][30],dp[30][30];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=i;j++)
        {
            scanf("%d",&tri[i][j]);
            dp[i][j]=tri[i][j];
        }
    for(int i=2;i<=n;i++)
    {
        dp[i][1]=dp[i-1][1]+tri[i][1];
        dp[i][i]=dp[i-1][i-1]+tri[i][i];
    }
    for(int i=3;i<=n;i++)
        for(int j=2;j<=i;j++)
            dp[i][j]=max(dp[i-1][j],dp[i-1][j-1])+tri[i][j];
    int ans=INT_MIN;
    for(int i=1;i<=n;i++)
        ans=max(ans,dp[n][i]);
    cout<<ans<<endl;
}