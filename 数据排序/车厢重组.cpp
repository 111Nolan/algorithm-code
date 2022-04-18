#include<bits/stdc++.h>
using namespace std;
/*简单的考查冒泡排序题*/
int main()
{
    int n,ans=0;
    scanf("%d",&n);
    vector<int>nums(n);
    for(int i=0;i<n;i++)
        scanf("%d",&nums[i]);
    for(int i=0;i<n;i++)
        for(int j=1;j<n-i;j++)
            if(nums[j]<nums[j-1])
            {
                swap(nums[j],nums[j-1]);
                ans++;
            }
    printf("%d",ans);
}