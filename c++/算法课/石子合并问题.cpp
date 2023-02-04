#include<bits/stdc++.h>
using namespace std;
const int inf=0x3f3f3f3f;
int main()
{
    int n;
    scanf("%d",&n);
    vector<int>m(n+1);
    vector<int>sums(n+1);
    vector<vector<int>>ans(n+1,vector<int>(n+1,inf));
    sums[0]=0;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&m[i]);
        sums[i]=sums[i-1]+m[i];
        ans[i][i]=0;
    }
    for(int r=2;r<=n;r++)
    {
        for(int i=1;i<=n-r+1;i++)
        {
            int j=i+r-1;
            for(int k=i;k<j;k++)
                ans[i][j]=min(ans[i][j],ans[i][k]+ans[k+1][j]+sums[j]-sums[i-1]);
        }
    }
    cout<<ans[1][n]<<endl;
}