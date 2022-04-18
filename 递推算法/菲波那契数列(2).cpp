#include<bits/stdc++.h>
using namespace std;
int num[1000001];
int main()
{
    int n;
    scanf("%d",&n);
    num[1]=num[2]=1;
    for(int i=3;i<=1000000;i++)
        num[i]=(num[i-1]+num[i-2])%1000;
    while(n--)
    {
        int a;
        scanf("%d",&a);
        printf("%d\n",num[a]);
    }
    return 0;
}