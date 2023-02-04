#include<bits/stdc++.h>
using namespace std;
const int inf=0x3f3f3f3f;
int main()
{
    int m;
    scanf("%d",&m);
    while(m--)
    {
        int len,n;
        scanf("%d %d",&len,&n);
        vector<int>dis(n);
        int ans1=0,ans2=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&dis[i]);
            ans1=max(ans1,min(dis[i],len-dis[i]));
            ans2=max(ans2,max(dis[i],len-dis[i]));
        }
        printf("%d %d\n",ans1,ans2);
    }
}