#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<char>sta;
    int ans=0,m=0;
    char s[7];
    for(int i=0;i<7;i++)
        cin>>s[i];
    int t=0;
    for(int i=0;i<7;i++)
    {
        if(sta.empty()||sta.top()!=s[i])
        {
            t=0;
            int n=s[i]-'a';
            for(int j=m;j<=n;j++)
                sta.push('a'+j);
            m=n+1;
        }
        int t=sta.size();
        while(sta.top()!=s[i])
            sta.pop();
        sta.pop();
        ans=max(ans,t);
    }
    cout<<ans<<endl;
}