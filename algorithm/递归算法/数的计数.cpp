#include<bits/stdc++.h>
using namespace std;
/*
简单的记忆化搜索，用一个nums数组存储每个数的子答案即可
*/
vector<int>nums(1001,0);
void dfs(int cur)
{
    if(nums[cur])//如果这个数已经访问过了就直接返回
        return;
    int temp=1;
    for(int i=1;i<=cur/2;i++)
    {
        dfs(i);//必须先dfs，再判断
        if(nums[i])
        {
            temp+=nums[i];
        }
    }
    nums[cur]=temp;
}
int main()
{
    int n;
    scanf("%d",&n);
    nums[1]=1;//给1赋初始值，后面的值依赖于1存在
    dfs(n);
    printf("%d",nums[n]);
}