#include<bits/stdc++.h>
using namespace std;
const int inf=0x3f3f3f3f;
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int len,num,ans1=0,ans2=0;
        scanf("%d %d",&len,&num);
        vector<int>dis(num);
        for(int i=0;i<num;i++)
            scanf("%d",&dis[i]);
        for(int i=0;i<num;i++)
        {
            ans1=max(ans1,min(len-dis[i],dis[i]));
            ans2=max(ans2,max(len-dis[i],dis[i]));
        }
        printf("%d %d\n",ans1,ans2);
    }
}