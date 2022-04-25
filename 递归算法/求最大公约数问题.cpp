#include<bits/stdc++.h>
using namespace std;
/*
用递归实现辗转相除即可
*/
int gcd(int a,int b)
{
    if(a%b==0)
        return b;
    return gcd(b,a%b);
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",gcd(a,b));
}