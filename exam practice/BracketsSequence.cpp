#include<bits/stdc++.h>
using namespace std;
string str;
const int inf=0x3f3f3f3f;
int dp[110][110],c[110][110];
void print(int i,int j)
{
    if(i>j)
        return;
    else if(i==j)
    {
        if(str[i]=='('||str[i]==')')
            cout<<"()";
        else if(str[i]=='['||str[i]==']')
            cout<<"[]";
    }
    else if(c[i][j]==-1)
    {
        cout<<str[i];
        print(i+1,j-1);
        cout<<str[j];
    }
    else
    {
        print(i,c[i][j]);
        print(c[i][j]+1,j);
    }
}
int main()
{
    cin>>str;
    for(int i=0;i<str.size();i++)
        dp[i][i]=1;
    for(int r=2;r<=str.size();r++)
    {
        for(int i=0;i<str.size()-r+1;i++)
        {
            int j=i+r-1;
            dp[i][j]=inf;//放在这里写
            if((str[i]=='('&&str[j]==')')||(str[i]=='['&&str[j]==']'))
            {
                dp[i][j]=dp[i+1][j-1];
                c[i][j]=-1;
            }
            for(int k=i;k<j;k++)
            {
                int t=dp[i][k]+dp[k+1][j];
                if(t<dp[i][j])
                {
                    dp[i][j]=t;
                    c[i][j]=k;
                }
            }
        }
    }
    print(0,str.size()-1);
    cout<<endl;
}