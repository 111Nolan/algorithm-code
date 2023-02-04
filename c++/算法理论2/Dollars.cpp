#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    int money[11]={5,10,20,50,100,200,500,1000,2000,5000,10000};
    ll dp[50000];//定的大点就行
    dp[0]=1;
    for(int i=0;i<11;i++)//组合，所以先遍历物品，让物品只能按一定的顺序放入背包
    {
        for(int j=money[i];j<50000;j++)
            dp[j]+=dp[j-money[i]];
    }
    int a,b;
    while(scanf("%d.%d",&a,&b)!=EOF&&(a!=0||b!=0))
    {
        int t=a*100+b;
        printf("%6.2lf%17lld\n",(double)t/100.0,dp[t]);
    }
}