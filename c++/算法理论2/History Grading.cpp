#include<bits/stdc++.h>
using namespace std;
/*
输入有点绕
*/
int main()
{
    int n;
    cin>>n;
    vector<int>ans(n+1),stu(n+1);
    vector<vector<int>>dp(n+1,vector<int>(n+1,0));
    int a;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a);
        ans[a]=i;
    }
    while(cin>>a)
    {
        stu[a]=1;
        for(int i=2;i<=n;i++)
        {
            scanf("%d",&a);
            stu[a]=i;
        }
        for(int i=0;i<=n;i++)
            dp[i][0]=dp[0][i]=0;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
            {
                if(ans[i]==stu[j])
                    dp[i][j]=dp[i-1][j-1]+1;
                else
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        printf("%d\n",dp[n][n]);
    }
}