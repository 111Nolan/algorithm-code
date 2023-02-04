#include<bits/stdc++.h>
using namespace std;
const int inf=0x3f3f3f3f;
int main()
{
    int n;
    scanf("%d",&n);
    vector<int>m(n+1);
    vector<int>sums(n+1);
    vector<vector<int>>dp(n+1,vector<int>(n+1,0));
    sums[0]=0;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&m[i]);
        sums[i]=sums[i-1]+m[i];
    }
    for(int len=2;len<=n;len++)
        for(int i=1;i<=n-len+1;i++)
        {
            int j=i+len-1;
            dp[i][j]=inf;
            for(int k=i;k<j;k++)
                dp[i][j]=min(dp[i][j],dp[i][k]+dp[k+1][j]+sums[j]-sums[i-1]);
        }
    printf("%d\n",dp[1][n]);
}