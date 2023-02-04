#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    int notes[11]={5,10,20,50,100,200,500,1000,2000,5000,10000};
    ll dp[50000]={0};//记得要赋初始值
    dp[0]=1;
    for(int i=0;i<11;i++)
        for(int j=notes[i];j<=50000;j++)
            dp[j]+=dp[j-notes[i]];
    int a,b;
    while(scanf("%d.%d",&a,&b)&&(a!=0||b!=0))
    {
        int t=a*100+b;
        printf("%6.2lf%17lld\n",(double)(a+b/100.0),dp[t]);
    }
}
