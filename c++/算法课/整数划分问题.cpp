#include<bits/stdc++.h>
using namespace std;
/*
其实就是动态规划的递归写法 把各种情况如何变化考虑清楚即可
*/
int q(int n,int m)
{
    if(n<1||m<1)
        return 0;
    if(n==1||m==1)
        return 1;
    if(n<m)
        return q(n,n);
    if(n==m)
        return q(n,n-1)+1;
    return q(n,m-1)+q(n-m,m);
}
int main()
{
    int n;
    scanf("%d",&n);
    cout<<q(n,n)<<endl;
}