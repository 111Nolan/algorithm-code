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
			l=mid+1;//��Ϊ����Ҫ�ľ��Ǻ����λ�� 
		else
			r=mid-1;//��Ϊ����Ҫ�ľ���ǰ���λ�� 
	}
	return l;//��󷵻ؽϴ��ֵ����Ϊ����Ҫ���Ǿ�����С��Ҫ�Ѵ��λ�õ��滻�� 
}
int main()
{
	int n;
	while(cin>>n)
	{
		vector<int>dp(n+1),pre(n+1),next(n+1),nums1(n+1),nums2(n+1);//nums1��nums2�д��ŵ���������������� pre��next�д������i��β���ǰ���󣩵������еĳ��� 
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
			if(pre[i]==next[n-i+1])//����Ҫ��next���±���ȥ�Ƚ� 
				ans=max(ans,2*pre[i]-1);//����-1����Ϊ ���Լ�������������飬����Ҫ���� 
			
		cout<<ans<<endl;
	}	
}
