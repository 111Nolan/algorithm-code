#include<bits/stdc++.h>
using namespace std;
/*
简单的分数加法模拟，还有一个递归求最大公因数
*/
struct fraction
{
    int a;
    int b;
};
void add(fraction &x,fraction y);
int gcd(int a,int b);
void easy(fraction &x);
int main()
{
    int n;
    scanf("%d",&n);
    vector<fraction>fractions(n);
    for(int i=0;i<n;i++)
        scanf("%d/%d",&fractions[i].a,&fractions[i].b);
    for(int i=1;i<n;i++)
        add(fractions[0],fractions[i]);
    easy(fractions[0]);
    if(fractions[0].b==1)
        printf("%d",fractions[0].a);
    else
        printf("%d/%d\n",fractions[0].a,fractions[0].b);

}
void add(fraction &x,fraction y)
{
    int temp=x.b;
    x.b*=y.b;
    x.a=x.a*y.b+y.a*temp;
}
int gcd(int a,int b)
{
    if(a%b==0)
        return b;
    return gcd(b,a%b);
}
void easy(fraction &x)
{
    int div=gcd(x.a,x.b);
    x.a/=div;
    x.b/=div;
}