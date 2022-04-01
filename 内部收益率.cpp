#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	while(cin>>T&&T)
	{
		int *nums=new int(T+1);
		for(int i=0;i<=T;i++)
			cin>>nums[i];
		double l=-1.0,r=1e8,mid,sum;
		for(int i=0;i<100;i++)
		{
			mid=(l+r)/2,sum=0;
			for(int j=1;j<=T;j++)
				sum+=nums[j]/(pow(1+mid,j));
			if(sum>-nums[0])
				l=mid;
			else
				r=mid;
		}
		cout<<setprecision(2)<<fixed<<mid<<endl;
	}
}


