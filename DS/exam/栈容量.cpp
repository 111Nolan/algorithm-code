#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<char>mystack;
    vector<char>s(8);
    for(int i=0;i<7;i++)
        cin>>s[i];
    int m=0,ans=0;
    for(int i=0;i<7;i++)
    {
        while(mystack.empty()||s[i]>='a'+m)
        {
            mystack.push('a'+m);
            m++;
        }
        int t=mystack.size();
        ans=max(ans,t);
        if(mystack.top()==s[i])
            mystack.pop();
    }
    cout<<ans<<endl;
}