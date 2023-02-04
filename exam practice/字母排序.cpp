#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    unordered_map<char,int>map;
    for(int i=0;i<26;i++)
        map[str[i]]=i;
    string a,m;
    getline(cin,a);
    stringstream ss(a);
    while(ss>>m)
    {
        int len=m.size();
        vector<int>dp(len,1);
        for(int i=1;i<len;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(map[m[i]]>=map[m[j]])
                    dp[i]=max(dp[i],dp[j]+1);
            }
        }
        int ans=0;
        for(int i=0;i<len;i++)
            ans=max(ans,dp[i]);
        printf("%d",ans);
    }
}