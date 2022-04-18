#include<bits/stdc++.h>
using namespace std;
/*
最好用两个变量将卵的个数和成虫的个数分开存储
要点就是像动态规划一样取寻找状态转移方程
根据题意可以得到 状态转移方程：
bits[i]=bits[i-1]+eggs[i-2]（上个月的成虫+两个月前的蛋）
eggs[i]=y*bits[i-x]（x前的成虫产卵*一次会产的卵的个数）
注意题目说的是z个月以后有多少成虫，相当于问的是z+1个月的成虫数
*/
long long bits[51], eggs[51];
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    for(int i=0;i<=x;i++)
        bits[i]=1;
    for(int i=x+1;i<=z+1;i++)
    {
        bits[i]=bits[i-1]+eggs[i-2];
        eggs[i]=y*bits[i-x];
    }
    printf("%lld",bits[z+1]);
}