#include<bits/stdc++.h>
using namespace std;
int w[1005];
int v[1005];
int m[105][105];
int main()
{
    int n,c;
    while(~scanf("%d %d",&n,&c))
    {
        for(int i=1;i<=n;i++)
            scanf("%d",&v[i]);
        for(int j=1;j<=n;j++)
            scanf("%d",&w[j]);
        int min1=min(w[n]-1,c);//防止数组越界，物品的重量超过背包的容量了
        for(int i=0;i<=min1;i++)//小于w[n]的填0
            m[n][i]=0;
        for(int j=w[n];j<=c;j++)//大于等于w[n]的填v[n]
            m[n][j]=v[n];
        for(int i=n-1;i>=1;i--)
        {
            int min2=min(w[i]-1,c);//防止数组越界，物品的重量超过背包的容量了
            for(int j=0;j<=min2;j++)
                m[i][j]=m[i+1][j];
            for(int j=w[i];j<=c;j++)
                m[i][j]=max(m[i+1][j],m[i+1][j-w[i]]+v[i]);
        }
        printf("%d\n",m[1][c]);
    }
    return 0;
}
