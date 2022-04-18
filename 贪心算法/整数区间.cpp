#include<bits/stdc++.h>
using namespace std;
/*
这题就是一个简单的贪心，因为最后集合的元素可以不连续
所以直接按开始元素的大小排序，然后不断更新end的值，end和比较下一个开始的
*/
int main()
{
    int n;
    scanf("%d",&n);
    vector<vector<int>>areas(n,vector<int>(2));
    for(int i=0;i<n;i++)
        scanf("%d %d",&areas[i][0],&areas[i][1]);
    sort(areas.begin(),areas.end(),[&](vector<int>a,vector<int>b)->bool{return a[0]<b[0];});
    int ans=1,end=areas[0][1];
    for(int i=1;i<n;i++)
    {
        if(areas[i][0]<=end)
            continue;
        ans++;
        end=areas[i][1];
    }
    printf("%d\n",ans);
}