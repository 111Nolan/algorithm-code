#include<bits/stdc++.h>
using namespace std;
const int mod=1000000007;
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int a[4];
        a[1]=1,a[2]=2;
        if(n==1||n==2)
        {
            printf("%d\n",a[n]);
            continue;
        }
        for(int i=1;i<=(n-2);i++)
        {
            a[3]=(a[1]+a[2])%mod;
            a[1]=a[2];
            a[2]=a[3];
        }
        printf("%d\n",a[2]);
    }
}