#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    vector<int>h(n+1);
    for(int i=1;i<=n;i++)
        scanf("%d",&h[i]);
    int a,b;
    scanf("%d %d",&a,&b);
    swap(h[a],h[b]);
    for(int i=1;i<=n;i++)
        printf("%d ",h[i]);
}