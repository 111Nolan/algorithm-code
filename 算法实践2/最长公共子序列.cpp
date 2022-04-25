#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    getline(cin,a,' ');
    getline(cin,b);
    int len1=a.size(),len2=b.size();
    vector<vector<int>>dp(len1+1,vector<int>(len2+1,0));
    for(int i=1;i<=len1;i++)
    {
        for(int j=1;j<=len2;j++)
        {
            if(a[i-1]==b[j-1])
                dp[i][j]=dp[i-1][j-1]+1;
            else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    printf("%d",dp[len1][len2]);
}