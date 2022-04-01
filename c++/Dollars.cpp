#include<bits/stdc++.h>
using namespace std;
int nums[15]={5,10,20,50,100,200,500,1000,2000,5000,10000};
int main()
{
	long long dp[33000];
	memset(dp,0,30005);
	dp[0]=1;
	for(int i=0;i<11;i++)
	{
		for(int j=nums[i];j<=30000;j++)
		{
			dp[j]+=dp[j-nums[i]];	
		} 
	}
	int a,b;
	while(scanf("%d.%d",&a,&b)&&(a||b))
	{
		int x=a*100+b;
		printf("%6.2lf%17lld\n",(double)x/100.0,dp[x]);
	}
}
