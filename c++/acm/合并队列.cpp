#include<bits/stdc++.h>
using namespace std;
//简单模拟就行
int main()
{
    int n;
    scanf("%d",&n);
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
        scanf("%d",&b[i]);
    int p,q;
    p=q=0;
    while(q<n&&p<n)
    {
        if(a[q]<=b[p])
            printf("%d ",a[q++]);
        else
            printf("%d ",b[p++]);
    }
    while(q<n)
        printf("%d ",a[q++]);
    while(p<n)
        printf("%d ",b[p++]);
}