#include<bits/stdc++.h>
using namespace std;
const int inf=0x3f3f3f3f;
int main()
{
	int T;
	while(cin>>T&&T)
	{
		vector<int>nums(T+1);
		for(int i=0;i<=T;i++)
			scanf("%d",&nums[i]);
		double l=-1.0,r=inf,mid,sum;
		while(r-l>1e-8)
		{
			mid=(l+r)/2,sum=0;
			for(int j=1;j<=T;j++)
				sum+=nums[j]/(pow(1+mid,j));
			if(sum>-nums[0])
				l=mid;
			else
				r=mid;
		}
		printf("%.2lf\n",mid);
	}
}

