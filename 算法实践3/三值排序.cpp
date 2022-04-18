#include<bits/stdc++.h>
using namespace std;
/*
贪心算法，但是不好想（我想不到 55）
根据1 2 3的个数把数组分为三个部分，现在要将1 2 3分别归为到三个部分
如果直接考虑三个那肯定不好做，我们先考虑两个，先把前两个容器中除了3以外的元素归位
那么我们就需要统计 容器1中2的个数count1以及容器2中1的个数count2，要将他们全部归位，那么最少需要的操作数为max（count1，count2）
做完以上步骤，前两个容器中只剩下3还没排序，那么我们就只要统计出容器3中除了3以外的元素，然后和前面两个容器中3的位置交换即可
最后的ans=max(count1,count2)+count3
*/
int main()
{
    int n;
    scanf("%d",&n);
    vector<int>count(4);
    vector<int>nums(n+1);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&nums[i]);
        count[nums[i]]++;
    }
    int temp=nums[1],count1,count2,count3,x=count[1],y=count[1]+count[2];
    count1=count2=count3=0;
    for(int i=1;i<=n;i++)
    {
        if(i>=1&&i<=x&&nums[i]==2)
            count1++;
        else if(i>x&&i<=y&&nums[i]==1)
            count2++;
        else if(i>y&&i<=n&&nums[i]!=3)
            count3++;
    }
    int ans=max(count1,count2)+count3;
    printf("%d",ans);
}