#include<bits/stdc++.h>
using namespace std;
/*
一本通上面有个样例一直过不了，不考虑为什么了，网上有个贪心的倒是直接过了
贪心的思路：遍历所有矩阵四个边界，然后找最大的（其实就是暴力）

dp：
最大子矩阵 是最大子数列的升级问题
常规的思路就是先两层遍历找点，再两层遍历求和 这个时间复杂度肯定是n^4
降为n^3的思路是：先遍历起始行再遍历末尾行，再遍历列，把行的和压缩到列上
然后转换为一维最大子数列的问题
*/
int maxsum(int n,vector<int>b)
{
    int ans=INT_MIN,x=0;//最大字段和只需要前一个值，所以没必要开辟一个dp数组
    for(int i=1;i<=n;i++)
    {
        if(x>0)
            x+=b[i];
        else
            x=b[i];
        ans=max(ans,x);
    }
    return ans;
}
int main()
{
    int n,ans=0;
    scanf("%d",&n);
    vector<vector<int>>a(n+1,vector<int>(n+1));
    vector<int>b(n+1);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            scanf("%d",&a[i][j]);
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=n;k++)
            b[k]=0;
        for(int j=i;j<=n;j++)
        {
            for(int k=1;k<=n;k++)//这步就是压缩存储了
                b[k]+=a[j][k];
            int m=maxsum(n,b);
            ans=max(ans,m);
        }
    }
    printf("%d",ans);
}