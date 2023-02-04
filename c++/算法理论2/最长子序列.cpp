#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    vector<int>nums(n);
    for(int i=0;i<n;i++)
        scanf("%d",&nums[i]);
    int sum,b;
    sum=b=nums[0];
    for(int i=1;i<n;i++)
    {
        if(b>=0)
            b+=nums[i];
        else
            b=nums[i];
        sum=max(sum,b);
    }
    cout<<sum<<endl;
}