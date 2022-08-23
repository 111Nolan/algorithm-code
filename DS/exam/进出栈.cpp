#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<char>mystack;
    int t=0,m=0;
    vector<char>s(7);
    for(int i=0;i<7;i++)
        cin>>s[i];
    for(int i=0;i<7;i++)
    {
        while(mystack.empty()||s[i]>='a'+t)
        {
            mystack.push('a'+t);
            t++;
        }
        if(mystack.top()==s[i])
            mystack.pop();
        else if(mystack.top()>s[i])
        {
            cout<<"False"<<endl;
            return 0;
        }
    }
    cout<<"True"<<endl;
}