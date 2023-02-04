#include<bits/stdc++.h>
using namespace std;
/*
最长递减子序列的另一种方法
先把数组非升序排序 然后求和原数组的最长公共子序列即可
*/
void print(int i,int j,vector<vector<int>>c,vector<int>nums1)
{
    if(i==0||j==0)
        return;
    else if(c[i][j]==1)
    {
        print(i-1,j-1,c,nums1);
        cout<<nums1[i-1]<<' ';
    }
    else if(c[i][j]==2)
        print(i-1,j,c,nums1);
    else
        print(i,j-1,c,nums1);
}
int main()
{
    int n;
    cin>>n;
    vector<int>nums1(n),nums2(n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&nums1[i]);
        nums2[i]=nums1[i];
    }
    sort(nums2.begin(),nums2.end(),[&](int a,int b)->bool{return a>b;});
    vector<vector<int>>dp(n+1,vector<int>(n+1,0)),c(n+1,vector<int>(n+1));
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(nums1[i-1]==nums2[j-1])
            {
                dp[i][j]=dp[i-1][j-1]+1;
                c[i][j]=1;
            }
            else if(dp[i-1][j]>=dp[i][j-1])
            {
                dp[i][j]=dp[i-1][j];
                c[i][j]=2;
            }
            else
            {
                dp[i][j]=dp[i][j-1];
                c[i][j]=3;
            }
        }
    }
    print(n,n,c,nums1);
}