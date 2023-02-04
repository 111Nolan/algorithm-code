#include<bits/stdc++.h>
using namespace std;
int tem[10010];
void merge(int start,int mid,int end,vector<int>&nums)
{
    int l=start,r=mid+1,t=start;
    while(l<=mid&&r<=end)
    {
        if(nums[l]<nums[r])
            tem[t++]=nums[l++];
        else
            tem[t++]=nums[r++];
    }
    while(l<=mid)
        tem[t++]=nums[l++];
    while(r<=end)
        tem[t++]=nums[r++];
    for(int i=start;i<=end;i++)
        nums[i]=tem[i];
}
void mergesort(int start,int end,vector<int>&nums)
{
    if(start>=end)
        return;
    int mid=(start+end)>>1;
    mergesort(start,mid,nums);
    mergesort(mid+1,end,nums);
    merge(start,mid,end,nums);
}
int main()
{
    int n;
    scanf("%d",&n);
    vector<int>nums(n);
    for(int i=0;i<n;i++)
        scanf("%d",&nums[i]);
    mergesort(0,n-1,nums);
    for(int i=0;i<n;i++)
        printf("%d ",nums[i]);
    printf("\n");
}