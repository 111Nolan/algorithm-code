#include<bits/stdc++.h>
using namespace std;
/*
经典的区间dp，注意理解
1.确定子问题
因为根据dp的思想，我们需要先确定子问题，子问题就是
从m个地方建n个学校，子问题就是从m个地方建n-1个学校或者是从m-1个地方建n-1个学校
2.确定状态
dp[i][j]代表前i个村庄建立j个学校最短距离和
c[i][j]代表i到j建立一个学校的最小距离和（这个是从确定子问题中得来的，
因为子问题m建n-1个推导m建n个其实就是确定最后一个学校的位置，这需要每两个地点建立学校的最短距离和，
并且这个是可以直接算出来的，但是没那么容易，看具体c的代码是怎么求解的）
从这里就可以看出来这其实就是一道区间dp题
3.状态转移方程
（1）初始化 dp[i][1]=c[1][i]（很好理解，前i个村庄建1个学校的最短距离和等于从第1个村庄到第i个村庄建一个学校的最短距离和）
（2）dp[i][j]=min{dp[k][j-1]+c[k+1][i]}（相当于确立断点，意义：前k个村庄建j-1个学校，k+1到i建1个学校的最短距离）
*/
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    vector<vector<int>>dis(m+1,vector<int>(m+1));
    vector<vector<int>>c(m+1,vector<int>(m+1,0));
    vector<vector<int>>dp(m+1,vector<int>(n+1,INT_MAX));
    for(int i=1;i<m;i++)
    {
        int a;
        scanf("%d",&a);
        dis[i][i+1]=a;
    }

    for(int i=1;i<=m;i++)//递推求每两个点之间的距离，便于后面计算c[i][j]
        for(int j=i+1;j<=m;j++)
            dis[i][j]=dis[j][i]=dis[i][j-1]+dis[j-1][j];
    for(int i=1;i<=m;i++)
    {
        for(int j=i+1;j<=m;j++)
        {
            int mid=(i+j)/2;//建的地方肯定是在中间，向上或者向下取整无所谓
            for(int k=i;k<=j;k++)//左右两边到中间的距离和,mid到mid的距离肯定是0，已经初始化0了，所以不需要考虑
                c[i][j]+=dis[k][mid];
        }
    }

    for(int i=1;i<=m;i++)//dp数组的初始化，只建一个学校的情况
        dp[i][1]=c[1][i];
    for(int i=1;i<=m;i++)
    {
        for(int j=2;j<=n;j++)
        {
            for(int k=j-1;k<i;k++)//k要从j-1取起，因为子问题是已经确定了j-1个学校，现在要找第j个的位置，j-1个学校，最起码前面要有j-1个村庄
                dp[i][j]=min(dp[i][j],dp[k][j-1]+c[k+1][i]);
        }
    }
    printf("%d",dp[m][n]);
}
