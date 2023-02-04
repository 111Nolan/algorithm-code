#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    char m;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>m;
    int ans=1,t=1;
    while(t++)
    {
        if(pow(2,t)-1==n)
            break;
    }
    cout<<t<<endl;
}