#include<bits/stdc++.h>
using namespace std;
//汉诺塔dp转移方程 + 高精
int n,h[300]={0};
int main()
{
    h[0]=1;
    h[1]=2;
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
    {
        h[1]=h[1]*2+2;
        int rest=0;
        if(h[1]>=10)
        {
            rest=1;
            h[1]-=10;
        }
        for(int j=2;j<=h[0];j++)
        {
            h[j]=h[j]*2+rest;
            if(h[j]>=10)
            {
                rest=1;
                h[j]-=10;
            }
            else
                rest=0;
        }
        if(rest)
        {
            h[0]++;
            h[h[0]]=1;
        }
    }
    for(int i=h[0];i>=1;i--)
        cout<<h[i];
}
