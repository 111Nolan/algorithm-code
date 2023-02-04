#include<bits/stdc++.h>
using namespace std;
int main()
{
    int win[110],lose[110];
    int n,k;
    bool flag=0;
    while(cin>>n&&n)
    {
        cin>>k;
        memset(win,0,sizeof(win));
        memset(lose,0,sizeof(lose));
        if(flag)//注意这个输出格式！！！
            cout<<endl;
        flag=1;
        string s1,s2;
        int n1,n2;
        for(int i=1;i<=k*n*(n-1)/2;i++)
        {
            cin>>n1>>s1>>n2>>s2;
            if(s1=="rock"&&s2=="scissors"||s1=="scissors"&&s2=="paper"||s1=="paper"&&s2=="rock")
                {win[n1]++;lose[n2]++;}
            if(s1=="rock"&&s2=="paper"||s1=="scissors"&&s2=="rock"||s1=="paper"&&s2=="scissors")
                {lose[n1]++;win[n2]++;}
        }
        for(int i=1;i<=n;i++)
        {
            printf("%.3lf\n",(double)win[i]/(win[i]+lose[i]));
        }
    }
}