#include<bits/stdc++.h>
using namespace std;
const int inf=0x3f3f3f3f;
void traceback(int l,int r,vector<vector<int>>s)
{
    if(l==r)
    {
        cout<<"A"<<l;
        return;
    }
    cout<<"(";
    traceback(l,s[l][r],s);
    traceback(s[l][r]+1,r,s);
    cout<<")";
}
int main()
{
    int n;
    cin>>n;
    vector<int>p(n+1);
    for(int i=0;i<=n;i++)
        cin>>p[i];
    vector<vector<int>>c(n+1,vector<int>(n+1,inf));
    vector<vector<int>>s(n+1,vector<int>(n+1));
    for(int i=1;i<=n;i++)
        c[i][i]=0;
    for(int r=2;r<=n;r++)
    {
        for(int i=1;i<=n+1-r;i++)
        {
            int j=i+r-1;
            for(int k=i;k<j;k++)
            {
                int t=c[i][k]+c[k+1][j]+p[i-1]*p[k]*p[j];
                if(c[i][j]>t)
                {
                    c[i][j]=t;
                    s[i][j]=k;
                }
            }
        }
    }
    cout<<c[1][n]<<endl;
    traceback(1,n,s);
}