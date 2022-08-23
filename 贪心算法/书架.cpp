#include<bits/stdc++.h>
using namespace std;
/*
简单的贪心，排序一下从大往小取就行了
*/
int main()
{
    int n,b,ans=0;
    scanf("%d %d",&n,&b);
    vector<int>heights(n+1);
    for(int i=1;i<=n;i++)
        scanf("%d",&heights[i]);
    sort(heights.begin()+1,heights.end(),[&](int a,int b)->bool{return a>b;});
    for(int i=1;i<=n;i++)
    {
        if(b<=0)
            break;
        b-=heights[i];
        ans++;
    }
    printf("%d",ans);
}