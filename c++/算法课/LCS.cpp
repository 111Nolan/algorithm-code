#include<bits/stdc++.h>
using namespace std;
string a,b;
void traceback(int i,int j,vector<vector<int>>c)
{
    if(i==0||j==0)
        return;
    if(c[i][j]==1)
    {
        traceback(i-1,j-1,c);
        cout<<a[i-1];
    }
    else if(c[i][j]==2)
        traceback(i-1,j,c);
    else
        traceback(i,j-1,c);
}
int main()
{
    getline(cin,a);
    getline(cin,b);
    int n=a.size(),m=b.size();
    vector<vector<int>>s(n+1,vector<int>(m+1,0)),c(n+1,vector<int>(m+1));
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i-1]==b[j-1])
            {
                c[i][j]=1;
                s[i][j]=s[i-1][j-1]+1;
            }
            else if(s[i-1][j]>=s[i][j-1])
            {
                c[i][j]=2;
                s[i][j]=s[i-1][j];
            }
            else
            {
                c[i][j]=3;
                s[i][j]=s[i][j-1];
            }
        }
    }
    for(auto q:c)
    {
        for(auto p:q)
            cout<<p<<" ";
        cout<<endl;
    }
    cout<<s[n][m]<<endl;
    traceback(n,m,c);
}