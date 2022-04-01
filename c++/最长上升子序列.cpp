#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,q;
	string str;
	cin>>n>>q;
	cin>>str;
	int *dp=new int[n];
	for(int i=0;i<n;i++)
		dp[i]=1;
	for(int i=n-2;i>=0;i--)
	{
		for(int j=n-1;j>i;j--)
		{
			if(str[i]<str[j])
				dp[i]=max(dp[i],dp[j]+1);
		}
	}
	int x;
	while(q--)
	{
		cin>>x;
		cout<<dp[x]<<" ";
	}
}
