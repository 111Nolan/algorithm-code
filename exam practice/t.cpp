#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    vector<int>nums(n);
    for(int i=0;i<n;i++)
        scanf("%d,",&nums[i]);
    sort(nums.begin(),nums.end());
    cout<<nums[13]<<endl;
}