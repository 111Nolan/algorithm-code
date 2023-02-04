#include<bits/stdc++.h>
using namespace std;
int nums[1000010];
const int d=500000;
int main()
{
    int n,m;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        for(int i=0;i<1000010;i++)
            nums[i]=0;
        for(int i=1;i<=n;i++)
        {
            int a;
            scanf("%d",&a);
            nums[a+d]++;
        }
        int t=1000000;
        while(m)
        {
            if(nums[t]!=0)
            {
                m--;
                nums[t]--;
                printf("%d ",t-d);
                if(nums[t]==0)
                    t--;
            }
            else
                t--;
        }
        cout<<endl;
    }

}