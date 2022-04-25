#include<bits/stdc++.h>
using namespace std;
/*
用递归模拟两个人取石子的过程
*/
bool dfs(int a,int b)
{
    if(a/b>=2||a==b)// a/b>=2这个是题目条件  一堆跟另一堆一样，先手肯定赢
        return true;
    return !dfs(b,a-b);// a/b<2 a-b一定小于b  这样保证了下一个人取的还是多的
}
int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF&&(a!=0||b!=0))
    {
        if(a<b)//保证取的是多的那一份
            swap(a,b);
        if(dfs(a,b))
            printf("win\n");
        else
            printf("lose\n");
    }
}