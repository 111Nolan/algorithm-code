#include<bits/stdc++.h>
using namespace std;
int num[500],sum[500];
/*整体思路就是用高精乘和高精加来实现,不同的是，必须要维护sum和num的长度*/
void mul(int x)
{
    for(int i=1;i<=num[0];i++)//这里必须得分开，跟高精乘不一样，因为这里直接覆盖了原数组，高精乘开辟了新的数组（直接修改了位数）
        num[i]*=x;
    for(int i=1;i<=num[0];i++)
    {
        num[i+1]+=num[i]/10;
        num[i]%=10;
    }
    int i=num[0];
    while(num[i+1]>0)//第一次更新长度，看要不要进位
        i++;
    num[0]=i;
    while(num[i]>10)//更新进位
    {
        num[i+1]+=num[i]/10;
        num[i]%=10;
        i++;
    }
    num[0]=i;
}
void add()
{
    sum[0]=max(sum[0],num[0]);//更新sum的长度
    for(int i=1;i<=sum[0];i++)
    {
        sum[i]+=num[i];
        sum[i+1]+=sum[i]/10;
        sum[i]%=10;
    }
    if(sum[sum[0]+1]>0)
        sum[0]++;
}
int main()
{
    int n;
    scanf("%d",&n);
    num[0]=1,num[1]=1,sum[0]=1,sum[1]=0;//初始化
    for(int i=1;i<=n;i++)
    {
        mul(i);
        add();
    }
    for(int i=sum[0];i>=1;i--)
        printf("%d",sum[i]);
}