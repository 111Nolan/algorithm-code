#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    bool flag=0;
    while(cin>>n&&n&&cin>>k)
    {
        if(flag)
            cout<<endl;
        flag=1;
        string m1,m2;
        int p1,p2;
        int win[110]={0},lose[110]={0};
        for(int i=1;i<=k*n*(n-1)/2;i++)
        {
            cin>>p1;
            cin>>m1;
            cin>>p2;
            cin>>m2;
            if(m1=="scissors"&&m2=="paper"||m1=="paper"&&m2=="rock"||m1=="rock"&&m2=="scissors")
            {win[p1]++;lose[p2]++;}
            else if(m1=="paper"&&m2=="scissors"||m1=="rock"&&m2=="paper"||m1=="scissors"&&m2=="rock")
            {lose[p1]++;win[p2]++;}
        }
        for(int i=1;i<=n;i++)
            printf("%.3lf\n",(double)win[i]/(win[i]+lose[i]));
    }
}