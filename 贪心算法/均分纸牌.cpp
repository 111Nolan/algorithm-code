#include<bits/stdc++.h>
using namespace std;
/*
贪心题，用一个Sn前缀和数组，数组的平均数为a
若Si！=i*a 那么就需要操作 让操作数+1，
少了就从后往前补，多了就补给后面，这样的操作不影响后续的前缀和
*/
int main()
{
    int n;
    scanf("%d",&n);
    vector<int>heaps(n+1);
    vector<int>sums(n+1);
    sums[0]=0;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&heaps[i]);
        sums[i]=sums[i-1]+heaps[i];
    }
    int ave=sums[n]/n,ans=0;
    for(int i=1;i<=n;i++)
    {
        if(sums[i]!=ave*i)
            ans++;
    }
    printf("%d\n",ans);
}