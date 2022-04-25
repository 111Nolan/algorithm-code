#include<bits/stdc++.h>
using namespace std;
/*
这题不好像，但是其实就是一个dp（还是没学透dp）
要想到其实每个问题都取决与它的子问题，长度为i的密码有没有三个连续的0
取决于长度为i-1的情况
dp[i][0]最后一位1的非解 (dp的表达式必须包括所有状态)
dp[i][1]最后0的非解
dp[i][2]最后00的非解
dp[i][3]解的情况（这样设保证了解只在这种情况里面出现）
dp[i][0]=dp[i-1][0]+dp[i-1][1]+dp[i-1][2]
dp[i][1]=dp[i-1][0]
dp[i][2]=dp[i-1][1]
dp[i][3]=dp[i-1][3]*2+dp[i-1][2](这步是关键，先写这步再推上面的)
边界条件：dp[1][0]=1,dp[1][1/2/3]=0
*/
int main()
{
    vector<vector<int>>dp(31,vector<int>(4,0));
    dp[1][0]=dp[1][1]=1;
    dp[1][2]=dp[1][3]=0;
    for(int i=2;i<=30;i++)
    {
        dp[i][0]=dp[i-1][0]+dp[i-1][1]+dp[i-1][2];
        dp[i][1]=dp[i-1][0];
        dp[i][2]=dp[i-1][1];
        dp[i][3]=dp[i-1][3]*2+dp[i-1][2];
    }
    int n;
    while(scanf("%d",&n)!=EOF)
        printf("%d\n",dp[n][3]);

}