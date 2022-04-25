#include<bits/stdc++.h>
using namespace std;
int search(int l,int r,int num,vector<int>&dp)
{
	int mid;
	while(l<=r)
	{
		mid=(l+r)/2;
		if(dp[mid]==num)
			return mid;
		else if(dp[mid]<num)
			l=mid+1;//因为不够要的就是后面的位置
		else
			r=mid-1;//因为多了要的就是前面的位置
	}
	return l;//最后返回较大的值，因为我们要的是尽可能小，要把大的位置的替换掉
}
int main()
{
	int n;
	while(cin>>n)
	{
		vector<int>dp(n+1),pre(n+1),next(n+1),nums1(n+1),nums2(n+1);//nums1、nums2中存着的是正序、逆序的数。 pre、next中存的是以i结尾的最长前（后）递增序列的长度
		for(int i=1;i<=n;i++)
		{
			cin>>nums1[i];
			nums2[n-i+1]=nums1[i];
		}
		pre[1]=1;
		dp[1]=nums1[1];
		int len=1;
		for(int i=2;i<=n;i++)
		{
			if(dp[len]<nums1[i])
				dp[++len]=nums1[i];
			else
			{
				int pos=search(1,i,nums1[i],dp);
				dp[pos]=nums1[i];
			}
			pre[i]=len;
		}
		next[1]=1;
		dp[1]=nums2[1];
		len=1;
		for(int i=2;i<=n;i++)
		{
			if(dp[len]<nums2[i])
				dp[++len]=nums2[i];
			else
			{
				int pos=search(1,i,nums2[i],dp);
				dp[pos]=nums2[i];
			}
			next[i]=len;
		}
		int ans=0,p;
		for(int i=1;i<=n;i++)
			if(pre[i]==next[n-i+1])//这里要把next的下标变回去比较
				ans=max(ans,2*pre[i]-1);//这里-1是因为 把自己这个数算了两遍，所以要减掉
		cout<<ans<<endl;
	}
}
