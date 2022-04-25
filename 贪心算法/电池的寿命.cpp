#include<bits/stdc++.h>
using namespace std;
/*
（真不好想，看的答案）
设所有的电池使用时间总和为sum
毫无疑问我们希望这sum全部被消耗，那么时间就是sum/2
什么时候才能全部被消耗？
由于电子使用时间都是正整数，所以都是可以整除0.5的。
对于使用时间小的那么就肯定能被消耗完，对于时间长的就存在消耗不完的情况
所以我们要考虑的就是时间长的能不能被消耗完
设最长的使用时间为max 并且要注意到这里只有两种电子使用时间
所以只需要考虑 sum-max是否大于max 如果大于max 那就说明 即使多出一个max那也一定可以被剩下的配合消耗完，所以答案就是sum/2
如果小于max  那就说明可能存在消耗不完的情况 所以 答案应该是sum-max 因为 max没有被消耗完，那就把剩下的消耗完
如果等于max 那就说明只有两个max 所以答案还是sum-max 情况三可以并到情况二或者情况一
*/
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        double a,max1=0,sum=0;
        while(n--)
        {
            scanf("%lf",&a);
            sum+=a;
            max1=max(max1,a);
        }
        if(sum-max1>max1)
            printf("%.1lf\n",sum/2);
        else
            printf("%.1lf\n",sum-max1);
    }
}