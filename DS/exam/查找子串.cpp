#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int ans=0;
    string a;
    cin>>n;
    cin>>a;
    string s="yydsyy";
    for(int i=0;i<a.size();i++)
    {
        int j=0;
        if(a[i]=='y')
        {
            for(j=1;j<=5;j++)
            {
                if(i+j>=a.size()||s[j]!=a[i+j])
                    break;
            }
        }
        if(j==6)
        {
            i=i+5;
            ans++;
        }
    }
    cout<<ans<<endl;
}