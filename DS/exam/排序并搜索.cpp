#include<bits/stdc++.h>
using namespace std;
int pivot(int start,int end,vector<int>&nums)
{
    while(start<end)
    {
        while(start<end&&nums[start]<nums[end])
            start++;
        swap(nums[start],nums[end]);
        while(start<end&&nums[start]<nums[end])
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
    int a;
    cin>>a;
    quicksort(0,n-1,nums);
    for(int c:nums)
        cout<<c<<" ";
    cout<<endl;
    int l=0,r=n-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(a<nums[mid])
            r=mid-1;
        else if(a>nums[mid])
            l=mid+1;
        else
        {
            cout<<mid<<endl;
            return 0;
        }
    }
}