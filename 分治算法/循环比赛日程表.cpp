#include<bits/stdc++.h>
using namespace std;
/*
很经典的分治算法 每个大问题都可以拆解为小问题解决
1 2
2 1
所有问题都可以归结为上面的那种形式
*/
int a[1020][1020];
int main()
{
    int m;
    scanf("%d",&m);
    int k=1<<m;//2^m
    int f=1,mid=1;
    a[1][1]=1;
    while(f<=m)
    {
        for(int i=1;i<=mid;i++)//左上角到右下角
            for(int j=1;j<=mid;j++)
                a[i+mid][j+mid]=a[i][j];
        for(int i=1;i<=mid;i++)//左上到左下、右上
            for(int j=1;j<=mid;j++)
                a[i+mid][j]=a[i][j+mid]=a[i][j]+mid;
        f++,mid*=2;
    }
    for(int i=1;i<=k;i++)
    {
        for(int j=1;j<=k;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
}