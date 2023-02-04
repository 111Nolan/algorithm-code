#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>nums(n+1);
    for(int i=1;i<=n;i++)
        scanf("%d",&nums[i]);
    int a,b;
    scanf("%d %d",&a,&b);
    int t=1,f=0;
    while(t<=n)
    {
        if(t==b&&!f)
        {
            cout<<a<<" ";
            f=1;
        }
        else
            cout<<nums[t++]<<' ';
    }
}