#include<bits/stdc++.h>
using namespace std;
/*
一个简单的模拟，就是贪心，相当于有m条队伍，
下一个人排的队肯定是最短的队伍，所以只需要每次都取出最小元素
然后加上这个人的等待时间即可
*/
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    vector<int>waters(n);
    vector<int>container(m);
    for(int i=0;i<n;i++)
        scanf("%d",&waters[i]);
    if(n<=m)//直接处理n<=m的情况
    {
        printf("%d\n",*max_element(waters.begin(),waters.end()));
        return 0;
    }
    for(int i=0;i<m;i++)
        container[i]=waters[i];
    for(int i=m;i<n;i++)
    {
        auto it=min_element(container.begin(),container.end());
        int tem=it-container.begin();//获取最小等待时间的下标
        container[tem]+=waters[i];
    }
    printf("%d",*max_element(container.begin(),container.end()));
}