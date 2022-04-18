#include<bits/stdc++.h>
using namespace std;
const int maxm=25;
int main()
{
	int n,temp;
	int ans[maxm],stu[maxm];
	int dp[maxm][maxm];
	while(cin>>n)
	{
		for(int i=1;i<=n;i++)
		{
			cin>>temp;
			ans[temp]=i;
		}
		while(cin>>temp)
		{
			stu[temp]=1;
			for(int i=2;i<=n;i++)
			{
				cin>>temp;
				stu[temp]=i;
			}
			for(int i=0;i<=n;i++)
				dp[i][0]=0,dp[0][i]=0;
			for(int i=1;i<=n;i++)
			{
				for(int j=1;j<=n;j++)
				{
					if(ans[i]==stu[j])
						dp[i][j]=dp[i-1][j-1]+1;
					else
						dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
				}
			}
			cout<<dp[n][n]<<endl;
		}
	}

}
