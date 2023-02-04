#include<bits/stdc++.h>
using namespace std;
int pivot(int start,int end,vector<int>&nums)
{
    while(start<end)
    {
        while(nums[start]<nums[end]&&start<end)
            start++;
        swap(nums[start],nums[end]);
        while(nums[start]<nums[end]&&start<end)
            end--;
        swap(nums[start],nums[end]);
    }
    return start;
}
void quicksort(int start,int end,vector<int>&nums)
{
    if(start>=end)
        return;
    int p=pivot(start,end,nums);
    quicksort(start,p-1,nums);
    quicksort(p+1,end,nums);
}
int main()
{
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++)
        cin>>nums[i];
    quicksort(0,n-1,nums);
    for(auto i:nums)
        cout<<i<<" ";
}