#include<bits/stdc++.h>
using namespace std;
int a[1010],b[1010];
bool cmp(int a,int b)
{
    return a<b;
}
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF&&n)
    {
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(int i=0;i<n;i++)
            scanf("%d",&b[i]);
        sort(a,a+n,cmp);
        sort(b,b+n,cmp);
        int target=n/2,ans=0,t=0;
        for(int i=0;i<n;i++)//这一层遍历的是渊子的马
        {
            if(a[i]>b[t])
            {
                ans++;
                t++;
            }
        }
        if(ans>target)
            printf("YES\n");
        else
            printf("NO\n");
    }
}