#include<bits/stdc++.h>
using namespace std;
int num[1000001];
int main()
{
    int n;
    scanf("%d",&n);
    num[1]=1,num[2]=2;
    for(int i=3;i<=1000000;i++)
        num[i]=(2*num[i-1]+num[i-2])%32767;
    while(n--)
    {
        int a;
        scanf("%d",&a);
        printf("%d\n",num[a]);
    }
}