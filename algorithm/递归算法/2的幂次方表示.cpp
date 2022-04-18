#include<bits/stdc++.h>
using namespace std;
/*
做这种递归题的要点就是确定递归函数在干嘛，递归函数的参数是什么
*/
void f(int n)//f（n）的作用是，将n分为2的最大次幂（小于n的）+（n-前面那个数）
{
    if(n==1)
        printf("2(0)");
    else if(n==2)
        printf("2");
    else
    {
        int m=1,e=0;//m=2^e
        while(m<=n)
        {
            e++;
            m=pow(2,e);
        }
        m/=2,e--;//回退一步
        if(m==2)//本来m就等2，那么就没有必要表示成2（2（0））
            printf("2");
        else
        {
            printf("2(");
            f(e);
            printf(")");
        }
        if(n-m>0)
        {
            printf("+");
            f(n-m);
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    f(n);
    printf("\n");
}

