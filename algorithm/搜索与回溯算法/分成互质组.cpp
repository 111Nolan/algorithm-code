#include<bits/stdc++.h>
using namespace std;
/*
互质数就是指两个数之间只有1这一个公因子
所以乘积互斥两两互斥
对于每个数来说都有两个选择 ，要么加入可以互质的组要么不加入，
这明显就是动态规划的一个状态转移，但是在这里就直接用回溯做了
*/
using ll=long long;
int nums[15],n,ans=10;
ll group[15];//初始化全为1 这样就可以*=nums[i]
ll gcd(ll a,ll b)
{
    if(a%b==0)
        return b;
    return gcd(b,a%b);
}
void dfs(int i,int k)//i代表第i个数，k代表现在已经创建了k个组
{
    if(i==n)
    {
        ans=min(k,ans);
        return;
    }
    for(int j=0;j<k;j++)
    {
        if(gcd(group[j],nums[i])==1)
        {
            group[j]*=nums[i];
            dfs(i+1,k);//加入了以前的组
            group[j]/=nums[i];
        }
    }
    group[k]*=nums[i];//创建了新的组
    dfs(i+1,k+1);
    group[k]/=nums[i];
}
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&nums[i]);
    for(int i=0;i<15;i++)//这里用memset一直过不了 很奇怪
        group[i]=1;
    dfs(0,0);
    printf("%d\n",ans);
}