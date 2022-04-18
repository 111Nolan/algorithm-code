#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int *nums=new int[n];
	int *dp=new int[n];
	int *pre=new int[n];
	for(int i=0;i<n;i++)
		dp[i]=-1,pre[i]=-1;
	int ans=0,pos=0;
	for(int i=0;i<n;i++)
		cin>>nums[i];
	dp[0]=1;
	for(int i=1;i<n;i++)
		for(int j=0;j<i;j++)
			if(nums[i]<nums[j])
				if(dp[i]<dp[j]+1)
				{
					dp[i]=max(dp[i],dp[j]+1);
					pre[i]=j;
				}
	for(int i=0;i<n;i++)
		if(ans<dp[i])
		{
			ans=dp[i];
			pos=i;
		}
	stack<int>mystack;
	while(pre[pos]!=-1)
	{
		mystack.push(nums[pos]);
		pos=pre[pos];
	}
	mystack.push(nums[pos]);
	while(!mystack.empty())
	{
		cout<<mystack.top()<<" ";
		mystack.pop();
	}
}
