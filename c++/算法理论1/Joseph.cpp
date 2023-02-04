#include<bits/stdc++.h>
using namespace std;
int ans[15];
bool jos(int i,int k)
{
    int n=2*i,t=0,m=i;
    while(i--)
    {
        t+=k;
        t%=n;
        n--;
        if(t<m)
            return false;
    }
    return true;
}
int main()
{
    for(int i=1;i<=14;i++)
    {
        int k;
        for(k=i;;k++)
            if(jos(i,k))
                break;
        ans[i]=++k;
    }
    int n;
    while(scanf("%d",&n)!=EOF&&n)
    {
        printf("%d\n",ans[n]);
    }
}