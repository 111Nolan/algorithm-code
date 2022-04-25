#include<bits/stdc++.h>
using namespace std;
int tri[25][25];
int dp[25][25];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            scanf("%d",&tri[i][j]);
        }
    }
    dp[1][1]=tri[1][1];
    for(int i=2;i<=n;i++)//边界值 最左边和最右边只能从一个方向来
    {
        dp[i][1]=dp[i-1][1]+tri[i][1];
        dp[i][i]=dp[i-1][i-1]+tri[i][i];
    }
    for(int i=3;i<=n;i++)
    {
        for(int j=2;j<=i-1;j++)
            dp[i][j]=max(dp[i-1][j],dp[i-1][j-1])+tri[i][j];
    }
    int ans=0;
    for(int j=1;j<=n;j++)
        ans=max(ans,dp[n][j]);
    printf("%d\n",ans);
}