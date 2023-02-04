#include<bits/stdc++.h>
using namespace std;
/*
dp[i][j]代表 i长度的str1 和j长度的str2 最大匹配字符串的数目
若str1[i]==st2[j]  dp[i][j]=dp[i-1][j-1]+1
若！=              dp[i][j]=max(dp[i-1][j],dp[i][j-1])
初始化             dp[0][i]=0  dp[i][0]=0
*/
int main()
{
    string a,b;
    int t=1;
    while(getline(cin,a)&&a!="late breaking.")
    {
        getline(cin,b);
        printf("%2d. ",t++);//注意这里有一个占两格的限制
        string temp="";
        int len1=a.size(),len2=b.size();
        vector<string>str1;
        vector<string>str2;
        for(int i=0;i<len1;i++)
        {
            if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
                temp+=a[i];
            else
            {
                str1.push_back(temp);
                temp="";
            }
        }
        if(temp!="")
        {
            str1.push_back(temp);
            temp="";
        }
        for(int i=0;i<len2;i++)
        {
            if(b[i]>='a'&&b[i]<='z'||b[i]>='A'&&b[i]<='Z')
                temp+=b[i];
            else
            {
                str2.push_back(temp);
                temp="";
            }
        }
        if(temp!="")
            str2.push_back(temp);
        vector<vector<int>>dp(str1.size()+1,vector<int>(str2.size()+1,0));
        for(int i=1;i<=str1.size();i++)
        {
            for(int j=1;j<=str2.size();j++)
            {
                if(str1[i-1]==str2[j-1])
                    dp[i][j]=dp[i-1][j-1]+1;
                else
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        if(!len1||!len2)
            printf("Blank!\n");
        else
            printf("Length of longest match: %d\n",dp[str1.size()][str2.size()]);
    }
}