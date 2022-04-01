#include<bits/stdc++.h>
using namespace std;
const int MOD=1000000007;
int main()
{
	int n;
	while(cin>>n)
	{
		int nums[4];
		nums[1]=1,nums[2]=2;
		if(n<=2)
			cout<<nums[n]<<endl;
		else
		{
			for(int i=3;i<=n;i++)
			{
				nums[3]=(nums[1]+nums[2])%MOD;
				nums[1]=nums[2];
				nums[2]=nums[3];
			}
			cout<<nums[2]<<endl;
		}
	}
}
