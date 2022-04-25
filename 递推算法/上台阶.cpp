#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a[71]={0};
    a[1]=1,a[2]=2,a[3]=4;
    for(int i=4;i<=70;i++)
        a[i]=a[i-3]+a[i-2]+a[i-1];
    int n;
    while(scanf("%d",&n)!=EOF&&n)
    {
        printf("%lld\n",a[n]);
    }
}