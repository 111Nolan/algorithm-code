#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    vector<int>nums(n+1);
    for(int i=1;i<=n;i++)
        scanf("%d",&nums[i]);
    int a;
    scanf("%d",&a);
    for(int i=1;i<=n;i++)
    {
        if(i==a)
            continue;
        else
            cout<<nums[i]<<" ";
    }
}