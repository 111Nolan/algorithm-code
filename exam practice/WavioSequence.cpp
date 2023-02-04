#include<bits/stdc++.h>
using namespace std;
int nums1[10010],nums2[10010],nex[10010],pre[10010];
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            int a;
            scanf("%d",&a);
            nums1[i]=nums2[n-i+1]=a;
        }
        for(int i=1;i<=n;i++)
            nex[i]=pre[i]=1;
        for(int i=2;i<=n;i++)
        {
            for(int j=1;j<i;j++)
            {
                if(nums1[i]>nums1[j])
                    nex[i]=max(nex[i],nex[j]+1);
                if(nums2[i]>nums2[j])
                    pre[i]=max(pre[i],pre[j]+1);
            }
        }
        for(int i=1;i<=n;i++)
            if(nex[i]==pre[n-i+1])
                ans=max(ans,2*nex[i]-1);
        printf("%d\n",ans);
    }
}