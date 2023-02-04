#include<bits/stdc++.h>
using namespace std;
int ans[31];
int main()
{
    ans[0]=0,ans[1]=0,ans[2]=0,ans[3]=1;
    for(int i=4;i<=30;i++)
        ans[i]=ans[i-1]*2+(1<<(i-4))-ans[i-4];
    int n;
    while(cin>>n)
    {
        cout<<ans[n]<<endl;
    }
}