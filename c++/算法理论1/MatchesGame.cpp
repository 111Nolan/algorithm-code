#include<bits/stdc++.h>
using namespace std;
/*
要用scanf printf
所有的值异或 最后如果是0那就NO 非0就YES
*/
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int a,k;
        scanf("%d",&a);
        for(int i=1;i<n;i++)
        {
            scanf("%d",&k);
            a^=k;
        }
        if(!a)
            printf("No\n");
        else
            printf("Yes\n");
    }
}