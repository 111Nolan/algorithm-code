#include<bits/stdc++.h>
using namespace std;
int pivot(vector<int>&nums,int l,int r)
{
    while(l<r)
    {
        while(nums[l]<nums[r])
            l++;
        swap(nums[l],nums[r]);
        while(nums[l]<nums[r])
            r--;
        swap(nums[l],nums[r]);
    }
    return l;
}
void quicksort(vector<int>&nums,int l,int r)
{
    if(l>=r)
        return;
    int p=pivot(nums,l,r);
    quicksort(nums,l,p-1);
    quicksort(nums,p+1,r);
}
int main()
{
    int n;
    scanf("%d",&n);
    vector<int>nums(n);
    for(int i=0;i<n;i++)
        scanf("%d",&nums[i]);
    quicksort(nums,0,n-1);
    for(auto c:nums)
        cout<<c<<" ";
    cout<<endl;
}