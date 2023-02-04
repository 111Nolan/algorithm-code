#include<bits/stdc++.h>
using namespace std;
int num[1000001];
const int d=500000;
int main()
{
    int n,m;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        int t=1000000;
        memset(num,0,sizeof(num));
        for(int i=0;i<n;i++)
        {
            int a;
            scanf("%d",&a);
            num[a+d]++;
        }
        while(m)
        {
            if(num[t])
            {
                m--;
                num[t]--;
                printf("%d ",t-d);
                if(num[t]==0)
                    t--;
            }
            else
                t--;
        }
        cout<<endl;
    }
}