#include<bits/stdc++.h>
using namespace std;
/*
递归函数f（begin，n）begin：n的可能最小因子 n：当前的底数
f做的事就是用一个a数组保存上一次的值，然后去递归累积n的因子
*/
int a[3]={0,0,0};//0 1 2分别表示 是否为第一个数 底数 指数
void f(int begin,int n);
bool judge(int num);
int main()
{
    int n;
    scanf("%d",&n);
    f(2,n);
}
void f(int begin,int n)
{
    if(n==1)//n=1说明到最后1了
    {
        if(a[2]!=1)
            cout<<a[1]<<"^"<<a[2]<<endl;
        else
            cout<<a[1]<<endl;
        exit(0);
        /*直接使程序终止，因为下面那个for循环递归调用（相当于一个层次型递归），
        可能会出现继续调用，但是没法整除的情况，会输出一些别的值，所以这里直接终止就可以了
        为什么从小到大就一定能找到解，而不会出现上面说的无效输出的情况？
        因为分解因子的特性决定了，找到最小的能整除的，那么一条路肯定能走到底，并且前面肯定是没有路可以走的
        */
    }
    for(int i=begin;i<=n;i++)//保证每次的底数都比前次大
    {
        if(n%i==0&&judge(i))//因子必须是素数
        {
            if(a[0]==0)//第一个数，要特别判断一下，让a[0]=1，相当于一个flag的作用
            {
                a[0]=1;
                a[1]=i;//底数置为i
                a[2]++;//指数++
            }
            else//做的是输出上一步的值
            {
                if(i==a[1])//和上一个数相同就底数++
                    a[2]++;
                else
                {
                    if(a[2]!=1)
                        cout<<a[1]<<"^"<<a[2]<<"*";
                    else
                        cout<<a[1]<<"*";
                    a[1]=i;//输出完上一个数，下一个数就是i了
                    a[2]=1;
                }
            }
            f(i,n/i);
        }
    }
}
bool judge(int num)
{
    for(int i=2;i<num;i++)
        if(num%i==0)
            return false;
    return true;
}