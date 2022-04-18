#include<bits/stdc++.h>
using namespace std;
/*整体思路就是从1开始乘2，然后每一位都乘2，然后转化为高精加*/
int num[110];
int main()
{
    int n;
    scanf("%d",&n);
    num[0]=1,num[1]=1;//第0位存数字的长度，这步在初始化
    while(n--)
    {
        for(int i=1;i<=num[0];i++)
            num[i]*=2;
        for(int i=1;i<=num[0];i++)//转化为高精加
        {
            num[i+1]+=num[i]/10;
            num[i]%=10;
        }
        if(num[num[0]+1]>0)//每次最多进一位
            num[0]++;
    }
    for(int i=num[0];i>=1;i--)
        printf("%d",num[i]);
    return 0;
}

