#include<bits/stdc++.h>
using namespace std;
/*
递归求解，关键在于确定递归函数的定义  dfs（start，num）start是num当前的最小因数，dfs递归是累积num所有因数大于等于a的情况
*/
int ans;
void dfs(int start,int num)//start是num的当前最小因数,dfs递归时会累积所有的num分解后的最小因数大于等于a的情况
{
    for(int i=start;i<=num;i++)
    {
        if(num%i==0&&i*i<=num)//start^2要小于num，因为确定一个小的因数另一个大的也确定了s
        {
            ans++;//找到一个步骤，i、num/i
            dfs(i,num/i);
        }
        else if(i*i>num)
            break;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int a;
        scanf("%d",&a);
        ans=1;//算上a直接分解为a一个的情况
        dfs(2,a);//把1分离出来的原因是，要让递归进行下去，但是num/1=num，这样就没法进行了
        printf("%d\n",ans);
    }
}