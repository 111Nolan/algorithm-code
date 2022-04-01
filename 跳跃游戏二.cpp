#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n!=1)
	{
		vector<int>nums(n);
		for(int i=0;i<n;i++)
			cin>>nums[i];
		int ans=1,cur=nums[0],maxlen=0;
		for(int i=0;i<=cur;i++)
		{
			if(cur>=n-1)
				break;
			maxlen=max(maxlen,i+nums[i]);
			if(i==cur)
			{
				ans++;
				cur=maxlen;
			}
		}
		cout<<ans<<endl;
	}
	else
		cout<<1<<endl;
	
} 
