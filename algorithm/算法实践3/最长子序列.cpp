#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int *nums=new int[n];
	int *dp=new int[n];
	int ans=INT_MIN;
	for(int i=0;i<n;i++)
	{
		cin>>nums[i];
		dp[i]=nums[i];
	}
	for(int i=1;i<n;i++)
		dp[i]=max(dp[i],dp[i-1]+nums[i]);
	for(int i=0;i<n;i++)
		ans=max(ans,dp[i]);
	cout<<ans<<endl;
}
