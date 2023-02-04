#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int>nums(n);
	vector<int>sums(n+1);
	vector<vector<int>>dp(n,vector<int>(n,INT_MAX));
	for(int i=0;i<n;i++)
		cin>>nums[i];
	sums[0]=0;
	for(int i=1;i<=n;i++)
		sums[i]=sums[i-1]+nums[i-1];
	for(int i=0;i<n;i++)
		dp[i][i]=0;
	for(int len=2;len<=n;len++)
	{
		for(int i=0;i<n-len+1;i++)
		{
			int j=i+len-1;
			for(int k=i;k<j;k++)
			{
				dp[i][j]=min(dp[i][j],dp[i][k]+dp[k+1][j]+sums[j+1]-sums[i]);
			}
		}
	}
	cout<<dp[0][n-1]<<endl;
}
