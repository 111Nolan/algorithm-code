#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++)
        cin>>nums[i];
    int a;
    cin>>a;
    int ans=0;
    int l=0,r=n-1;
    while(l<r)
    {
        int mid=(l+r)/2;
        ans++;
        if(nums[mid]>a)
            r=mid-1;
        else if(nums[mid]<a)
            l=mid+1;
        else
        {
            cout<<ans<<endl;
            return 0;
        }
    }
    if(nums[l]==a)
        cout<<ans<<endl;
    else
        cout<<"NO"<<endl;
}