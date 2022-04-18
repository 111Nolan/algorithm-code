#include<bits/stdc++.h>
using namespace std;
/*
本题的思路是：对于第一个炮弹来说肯定是要新开一个系统
对于后面的炮弹来说那就是可以和之前的合用一个系统，若是高度不够那就新开一个系统
对于很多个系统而言，那要贪心找到一个和这个炮弹最接近的系统
*/
int main()
{
    int height[1010]={0};//导弹的高度
    int sys[1010]={0};//每个系统所能拦截的导弹的最低高度
    int n=0,a;
    while(cin>>height[n]&&height[n]!=0){n++;}
    n--;
    int t=1;
    sys[0]=height[0];//初始化
    for(int i=1;i<n;i++)
    {
        int h=0;//用于更新的系统的值s
        for(int j=0;j<t;j++)
        {
            if(height[i]<=sys[j])
                h=max(h,sys[j]);
        }
        if(h==0)
            sys[++t]=height[i];//开辟一个新的系统
        else
            sys[t]=h;//更新旧的系统
    }
    printf("%d",t);
}