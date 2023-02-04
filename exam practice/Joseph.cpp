#include<bits/stdc++.h>
using namespace std;
int ans[15];
bool jos(int i,int k)
{
    int n=2*i,m=i,t=0;
    while(i--)
    {
        t+=k-1;
        t%=n;
        if(t<m)
            return false;
        n--;
    }
    return true;
}
int main()
{
    for(int i=1;i<=14;i++)
    {
        for(int k=i+1;;k++)
            if(jos(i,k))
            {
                ans[i]=k;
                break;
            }
    }
    int a;
    while(cin>>a&&a)
        cout<<ans[a]<<endl;
}