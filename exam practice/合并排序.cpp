#include<bits/stdc++.h>
using namespace std;
int tem[1010];
void merge(vector<int>&nums,int l,int r,int mid)
{
    int i=l,j=mid+1,t=l;
    while(i<=mid&&j<=r)
    {
        if(nums[i]<nums[j])
            tem[t++]=nums[i++];
        else
            tem[t++]=nums[j++];
    }
    while(i<=mid)
        tem[t++]=nums[i++];
    while(j<=r)
        tem[t++]=nums[j++];
    for(int x=l;x<=r;x++)
        nums[x]=tem[x];
}
void mergesort(vector<int>&nums,int l,int r)
{
    if(l>=r)
        return;
    int mid=(l+r)>>1;
    mergesort(nums,l,mid);
    mergesort(nums,mid+1,r);
    merge(nums,l,r,mid);
}
int main()
{
    int n;
    scanf("%d",&n);
    vector<int>nums(n);
    for(int i=0;i<n;i++)
        cin>>nums[i];
    mergesort(nums,0,n-1);
    for(auto c:nums)
        cout<<c<<" ";
    cout<<endl;
}