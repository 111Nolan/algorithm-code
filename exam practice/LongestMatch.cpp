#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int p=1;
    while(getline(cin,a))
    {
        getline(cin,b);
        printf(" %d. ",p++);
        vector<string>a1,b1;
        string t;
        int len1=a.size(),len2=b.size();
        for(int i=0;i<len1;i++)
        {
            if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
                t+=a[i];
            else
            {
                a1.push_back(t);
                t="";
            }
        }
        if(t!="")
        {
            a1.push_back(t);
            t="";
        }
        for(int i=0;i<len2;i++)
        {
            if(b[i]>='a'&&b[i]<='z'||b[i]>='A'&&b[i]<='Z')
                t+=b[i];
            else
            {
                b1.push_back(t);
                t="";
            }
        }
        if(t!="")
        {
            b1.push_back(t);
            t="";
        }
        vector<vector<int>>dp(a1.size()+1,vector<int>(b1.size()+1,0));
        for(int i=1;i<=a1.size();i++)
            for(int j=1;j<=b1.size();j++)
            {
                if(a1[i-1]==b1[j-1])
                    dp[i][j]=dp[i-1][j-1]+1;
                else
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        if(!len1||!len2)
        {
            printf("Blank!\n");
            continue;
        }
        printf("Length of longest match: %d\n",dp[a1.size()][b1.size()]);
    }
}