#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    vector<int>nums(n);
    for(int i=0;i<n;i++)
        scanf("%d",&nums[i]);
    int target;
    scanf("%d",&target);
    int l=0,r=n,mid;
    while(l<=r)//左闭右闭的写法
    {
        mid=(l+r)>>1;
        if(nums[mid]>target)
            r=mid-1;
        else if(nums[mid]<target)
            l=mid+1;
        else
        {
            cout<<mid+1<<endl;
            break;
        }
    }
}