#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int a,t;
        scanf("%d",&a);
        for(int i=1;i<n;i++)
        {
            scanf("%d",&t);
            a^=t;
        }
        if(a!=0)
            printf("Yes\n");//不用printf会超时
        else
            printf("No\n");
    }
}