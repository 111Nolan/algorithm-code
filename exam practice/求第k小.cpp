#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    vector<int>nums(n);
    for(int i=0;i<n;i++)
        cin>>nums[i];
    nth_element(nums.begin(),nums.begin()+k-1,nums.end());
    cout<<nums[k-1]<<endl;
}