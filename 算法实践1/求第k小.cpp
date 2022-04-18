#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int *nums=new int[n];
	for(int i=0;i<n;i++)
		cin>>nums[i];
	sort(nums,nums+n);
	cout<<nums[k-1]<<endl;
}
