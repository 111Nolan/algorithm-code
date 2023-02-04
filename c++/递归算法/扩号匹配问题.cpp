#include<bits/stdc++.h>
using namespace std;
/*
这种括号问题，大多情况用栈模拟就行，递归会更简单一点，但是不好想（就不写了）
*/
int main()
{
    string str;
    while(cin>>str)
    {
        stack<char>mystack;
        vector<pair<int,int>>errors;
        for(int i=0;i<str.size();i++)
        {
            if(mystack.empty()&&(str[i]=='('||str[i]==')'))
            {
                mystack.push(str[i]);
                errors.push_back({i,0});
            }
            else
            {
                if(str[i]!='('&&str[i]!=')')
                    continue;
                else
                {
                    char temp=mystack.top();
                    if(temp=='('&&str[i]==')')
                    {
                        mystack.pop();
                        errors.pop_back();
                    }
                    else
                    {
                        mystack.push(str[i]);
                        errors.push_back({i,0});
                    }
                }
            }
        }
        int t=errors.size()-1;
        while(!mystack.empty())
        {
            if(mystack.top()=='(')
            {
                mystack.pop();
                errors[t--].second=1;
            }
            else
            {
                mystack.pop();
                errors[t--].second=2;
            }
        }
        t=0;
        cout<<str<<endl;
        for(int i=0;i<str.size();i++)
        {
            if(i==errors[t].first&&errors[t].second==1)
            {
                cout<<"$";
                t++;
            }
            else if(i==errors[t].first&&errors[t].second==2)
            {
                cout<<"?";
                t++;
            }
            else
                cout<<" ";
        }
        cout<<endl;
    }
}