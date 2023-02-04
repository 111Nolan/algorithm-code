#include<bits/stdc++.h>
using namespace std;
/*
做题冷静！
这题贪心一点也不难
首先肯定是先按价值排序
对于任意一个任务（已经排序好的），
如果这个任务的任务期限已经在之前加入过的当中出现，那就不加入
否则就可以加入
（因为做完任务的时间均为1，数组之间的间距也为1）
这里符合贪心的思想，当前时间肯定要做的是价值最大的任务，全局也是如此
由局部最优推出全局最优

时间复杂度：O（n*logn*logn）只需要遍历一遍就可以出结果了，set红黑树查找、插入均为logn
（因为这里要求出最优解的情况，所以需要插入。也可以直接开辟一个time数组存放已经加入的任务的时间，那么时间复杂度会直接变成O(n),但是空间复杂度会变大）
空间复杂度：O（n）几个存放任务各类信息的数组  如果是用time数组 那么就是O（(max(t),n)），最大所需要的时间
*/
struct task
{
    int t,v,id;
};
int main()
{
    int n,ans=0;
    scanf("%d",&n);
    vector<task>ts(n);
    set<int>t;
    vector<task>res;
    for(int i=0;i<n;i++)
    {
        ts[i].id=i+1;
        scanf("%d %d",&ts[i].t,&ts[i].v);
    }
    sort(ts.begin(),ts.end(),[&](task a,task b)->bool{return a.v>b.v;});
    res.push_back(ts[0]);
    t.insert(ts[0].t);
    ans+=ts[0].v;
    for(int i=1;i<n;i++)
        if(t.find(ts[i].t)==t.end())//找不到该任务的时间，就把该任务加入
        {
            res.push_back(ts[i]);
            ans+=ts[i].v;
            t.insert(ts[i].t);
        }
    sort(res.begin(),res.end(),[&](task a,task b)->bool{return a.t<b.t;});//最后输出按时间从小到大的顺序输出
    stringstream ss;
    for(task it:res)
        ss<<it.id<<" ";
    cout<<ss.str()<<endl;
    printf("%d\n",ans);
}