#include<bits/stdc++.h>
using namespace std;
vector<int>dis(31);
int main()
{
    for(int i=1;i<=31;i++)
        cin>>dis[i];//假定是升序输入的,那么就是一个求最小上闭界的题目
    int t;
    cin>>t;
    int l=1,r=30,mid,ans=31;//31是为了防止出现30个都小于的情况
    while(l<=r)//左闭右闭的写法
    {
        mid=(l+r)/2;
        if(dis[mid]<t)
            l=mid+1;
        else
        {
            ans=mid;
            r=mid-1;
        }
    }
    cout<<ans<<endl;//第mid小的位置
}