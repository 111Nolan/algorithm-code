#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m=0;
    char s[7];
    for(int i=0;i<7;i++)
        cin>>s[i];
    stack<int>sta;
    for(int i=0;i<7;i++)
    {
        if(sta.empty())
        {
            int n=s[i]-'a';
            for(int j=m;j<=n;j++)
                sta.push(j+'a');
            m=n;
        }
        if(sta.top()>s[i])
        {
            cout<<"False"<<endl;
            return 0;
        }
        else
        {
            int n=s[i]-'a';
            for(int j=m;j<=n;j++)
                sta.push(j+'a');
            m=n;
        }
        sta.pop();
    }
    cout<<"True"<<endl;
    return 0;
}