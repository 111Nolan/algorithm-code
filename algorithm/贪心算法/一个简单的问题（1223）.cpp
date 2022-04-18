#include<bits/stdc++.h>
using namespace std;
/*
可以用更简单的位运算完成，但是琢磨了一会，还是把位运算放在之后
*/
int count(int n)
{
    int ans=0;
    while(n)
    {
        if(n%2)
            ans++;
        n/=2;
    }
    return ans;
}
int main()
{
    int n;
    while(scanf("%d",&n)&&n)
    {
        int c=count(n);
        while(n++)
        {
            if(count(n)==c)
            {
                printf("%d\n",n);
                break;
            }
        }
    }
}