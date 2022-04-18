#include<bits/stdc++.h>
using namespace std;
/*
这两种情况要注意理解，注意组合的特性
1）m苹果 n盘子(m>=n)有的选
1.放满了 dfs（m-n，n） 等于每个都减去一个盘子的数量
2.没放满 dfs（m，n-1） 少一个盘子肯定也行
（m<n）没的选
2）dfs（m，n）=dfs（m,m）选m个盘子去放，因为是组合不是排列
*/
int m,n;
int dfs(int m,int n)
{
    if(m==0)//0个苹果那就全0，一种方法
        return 1;
    else if(n==0)//0个盘子那就没有方法放了
        return 0;
    else if(m<n)
        return dfs(m,m);
    else if(m>=n)
        return dfs(m-n,n)+dfs(m,n-1);
    return 0;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&m,&n);
        printf("%d\n",dfs(m,n));
    }
}