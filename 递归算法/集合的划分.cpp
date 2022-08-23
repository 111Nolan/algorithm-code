#include<bits/stdc++.h>
using namespace std;
/*
直接看这题是比较难的，所以我们需要先来看这题的一个子问题
对于一个元素a，它要放入集合中只有两种情况：
（1）它自己放一个集合，其他的放在k-1个集合中表示出来就是S(n-1，k-1)
（2）它跟别的放在一起，那就让别的先放，它随便挑一个集合放S(n-1,k)*k
那么S（n,k）=S（n-1，k-1）+S（n-1，k）*k
初始化：S(i,0)=0,S(i,i)=1,S(i,1)=1;(零个集合只能放肯定是0种
i个集合i个元素又要求集合非空所有肯定为1)
*/
//解法一：dp
// using ll=long long;//using 代替long long
// int n,k;
// int main()
// {
//     scanf("%d%d",&n,&k);
//     vector<vector<ll>>S(n+1,vector<ll>(k+1,0));
//     for(int i=0;i<=k;i++)
//         S[i][i]=1;
//     for(int i=1;i<=n;i++)
//         S[i][1]=1;
//     for(int i=1;i<=n;i++)
//         for(int j=1;j<=min(i-1,k);j++)//j>i肯定是0种
//             S[i][j]=S[i-1][j-1]+S[i-1][j]*j;
//     printf("%lld",S[n][k]);
// }

//解法二：递归  从上面的分析可以得到 S（n，k）是存在递推式的，所以可以用递归解决，
//但是很明显这种方法的效率远不如dp，因为没有记忆化，重复计算了很多东西

using ll=long long;
ll S(int n,int k)
{
    if(n<k)
        return 0;
    if(n==k||k==1)
        return 1;
    return S(n-1,k-1)+S(n-1,k)*k;
}
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    ll ans=S(n,k);
    printf("%lld",ans);
}