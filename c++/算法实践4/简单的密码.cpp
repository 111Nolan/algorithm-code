#include<bits/stdc++.h>
using namespace std;
/*
连续三个零只有两种情况
1.最后一个数作为那三个零的其中之一  那就是加上 2^(i-4)-dp[i-4]  相当于前面i-4位随便取，我们之前算的时候已经加上dp[i-4]了，现在只要补个差值即可
2.最后一个数不作为那三个零的其中之一  那就是加上dp[i-1]*2  相当于最后一位01随便取
*/
int main()
{
    int dp[31]={0,0,0,1};
    for(int i=4;i<=30;i++)
        dp[i]=dp[i-1]*2+(1<<(i-4))-dp[i-4];
    int n;
    while(cin>>n)
        cout<<dp[n]<<endl;
}