#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ip1[4],ip2[4],mask[4],n;
    for(int i=0;i<4;i++)
        scanf("%d.",&ip1[i]);
    for(int i=0;i<4;i++)
        scanf("%d.",&mask[i]);
    cin>>n;
    for(int i=0;i<4;i++)
        ip1[i]&=mask[i];
    while(n--)
    {
        int i;
        for(i=0;i<4;i++)
        {
            scanf("%d.",&ip2[i]);
            ip2[i]&=mask[i];
            if(ip2[i]!=ip1[i])
            {
                cout<<"OUTER"<<endl;
                break;
            }
        }
        if(i==4)
            cout<<"INNER"<<endl;
    }
}