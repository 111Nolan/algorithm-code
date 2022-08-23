#include<bits/stdc++.h>
using namespace std;
/*
dp[i][j] 前i个数是否能被j整除
*/
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    vector<vector<bool>>dp(n+1,vector<bool>(k+1,0));
    vector<int>nums(n+1);
    for(int i=1;i<=n;i++)
    {
        int a;
        scanf("%d",&a);
        nums[i]=a%k;//模的和==和的模，在这里处理方便后面处理负数的情况
    }
    dp[1][nums[1]]=true;//初始化，第一个数
    dp[1][-nums[1]+k]=true;
    for(int i=2;i<=n;i++)
    {
        for(int j=0;j<k;j++)
        {
            if(dp[i-1][j])
            {
                dp[i][(j+nums[i])%k]=true;//状态转移方程，注意理解
                dp[i][(j-nums[i]+k)%k]=true;
            }
        }
    }
    if(dp[n][0])
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}