#include<bits/stdc++.h>
using namespace std;
/*思路：利用归并排序时候的分治思想，两边都已经是从小到大排序好的了，这时候可以进行统计*/
int n;
long long ans;//这里不用long long的话会越界
const int maxn=1e6;
int nums[maxn];
int temp[maxn];
void merge(int start,int mid,int end)
{
    int l=start,r=mid+1,t=l;
    while(l<=mid&&r<=end)
    {
        if(nums[l]>nums[r])//这时开始统计，l-mid都符合题意
        {
            ans+=mid-l+1;
            temp[t++]=nums[r++];
        }
        else
            temp[t++]=nums[l++];
    }
    while(r<=end)
        temp[t++]=nums[r++];//这时已经统计完前面比r大的了，不需要在统计
    while(l<=mid)
        temp[t++]=nums[l++];
    for(int i=start;i<=end;i++)
        nums[i]=temp[i];
}
void mergesort(int left,int right)
{
    if(left==right)
        return;
    else
    {
        int mid=(left+right)/2;
        mergesort(left,mid);
        mergesort(mid+1,right);
        merge(left,mid,right);
    }
}
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&nums[i]);
    mergesort(0,n-1);
    printf("%lld",ans);
}