#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0,maxi;
    cin>>n;
    vector<int>nums(n+1),s(n+1),c(n+1);
    for(int i=1;i<=n;i++)
        cin>>nums[i];
    s[1]=nums[1];
    c[1]=1;
    for(int i=2;i<=n;i++)
    {
        if(s[i-1]>0)
        {
            s[i]=s[i-1]+nums[i];
            c[i]=i-1;
        }
        else
        {
            s[i]=nums[i];
            c[i]=i;
        }
        if(s[i]>ans)
        {
            ans=s[i];
            maxi=i;
        }
    }
    vector<int>res;
    while(c[maxi]!=maxi)
    {
        res.push_back(nums[maxi]);
        maxi=c[maxi];
    }
    res.push_back(nums[maxi]);
    for(int i=res.size()-1;i>=0;i--)
        cout<<res[i]<<" ";
}