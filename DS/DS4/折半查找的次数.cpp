#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    vector<int>nums(n+1);
    for(int i=1;i<=n;i++)
        scanf("%d",&nums[i]);
    int t,ans=0;
    scanf("%d",&t);
    int l=1,r=n;
    while(l<r)
    {
        int mid=(l+r)/2;
        ans++;
        if(nums[mid]>t)
            r=mid-1;
        else if(nums[mid]<t)
            l=mid+1;
        else
        {
            cout<<ans<<endl;
            return 0;
        }
    }
    if(nums[l]==t)//由于向上取整、向下取整的原因，这里直接去掉l==r而退出的最后一次情况
        cout<<ans<<endl;
    else
        cout<<"NO"<<endl;
}