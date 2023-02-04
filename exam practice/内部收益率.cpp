#include<bits/stdc++.h>
using namespace std;
int cf[10010];
const int inf=0x3f3f3f3f;
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF&&n)
    {
        for(int i=0;i<=n;i++)
            scanf("%d",&cf[i]);
        double l=-1.0,r=inf,sum=0,mid;
        while(r-l>1e-4)
        {
            mid=(l+r)/2;
            sum=0;
            for(int i=1;i<=n;i++)
                sum+=cf[i]/pow((1+mid),i);
            if(sum>-cf[0])
                l=mid;
            else
                r=mid;
        }
        printf("%.2lf\n",mid);
    }
}