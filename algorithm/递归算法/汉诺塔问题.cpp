#include<bits/stdc++.h>
using namespace std;
/*
一道经典的递归问题，dfs（a,c,b,n-1）表示 起始：a，中转：b，终点：c 要移动的盘子的最后一个编号
递归的过程就是 将n-1个盘子通过c移动到b，n从a到c
下一步就是 将n-1个盘子通过a从b移动到c（这个过程很复杂，不断地分解成子问题）
最终的边界则是n=1的时候，直接从a移到c，所以下一层递归n-1=0直接返回即可
*/
void dfs(char a,char c,char b,int n)
{
    if(n==0)
        return;
    dfs(a,b,c,n-1);//先把n-1个盘子通过c从a到b
    printf("%c->%d->%c\n",a,n,c);
    dfs(b,c,a,n-1);//n已经移到c了，现在的要做的是把n-1个盘子通过a移动到从b移动到c
}
int main()
{
    int n;
    char a,b,c;
    scanf("%d %c %c %c",&n,&a,&b,&c);
    dfs(a,b,c,n);
}