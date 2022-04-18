#include<bits/stdc++.h>
using namespace std;
/*
这种含有两个元素的贪心，一般来说是要先按一个元素排列
我们按开始时间排序，这样的话就可以找到最早开始的。
如果下一个元素的开始时间大于当前结束时间，那么就可以更新当前开始时间和当前结束时间以及最长休息时间。
关键的是工作时间，因为每次出现的元素即使和上一次没有重合也可能成为最长的工作时间，所以工作时间每次都要更新
（为什么可以这样做呢？因为是根据开始时间排序的，后面再也不会出现比当前元素更早开始的了，
也就是说这样做可以找到最长的重叠区域以及不重叠区域）
*/
int main()
{
    int n,working,breaking;
    scanf("%d",&n);
    vector<vector<int>>workers(n+1,vector<int>(2));
    for(int i=1;i<=n;i++)
        scanf("%d %d",&workers[i][0],&workers[i][1]);
    sort(workers.begin(),workers.end(),[&](vector<int>a,vector<int>b)->bool{return a[0]==b[0]?a[1]<b[1]:a[0]<b[0];});
    working=workers[1][1]-workers[1][0];//第一个人直接处理
    breaking=0;//注意看题目条件是从有人工作开始
    int start=workers[1][0],end=workers[1][1];
    for(int i=1;i<=n;i++)
    {
        if(workers[i][0]>end)
        {
            breaking=max(breaking,workers[i][0]-end);
            start=workers[i][0];
        }
        end=max(end,workers[i][1]);//每次end也都要更新
        working=max(working,end-start);//包含了出现断层以及不出现断层的情况
    }
    printf("%d %d\n",working,breaking);
}