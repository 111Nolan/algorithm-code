#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    vector<int>nums(n+1);
    for(int i=1;i<=n;i++)
        scanf("%d",&nums[i]);
    int a,b;
    scanf("%d %d",&a,&b);
    for(int i=1;i<=n;i++)
    {
        if(i==b)
            cout<<a<<" ";
        cout<<nums[i]<<" ";
    }
}