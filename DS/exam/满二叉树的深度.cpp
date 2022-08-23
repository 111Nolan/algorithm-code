#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char a;
    for(int i=1;i<=n;i++)
        cin>>a;
    int t=1;
    while(1)
    {
        if(pow(2,t++)-1==n)
            break;
    }
    cout<<--t<<endl;
}