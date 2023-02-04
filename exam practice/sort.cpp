#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        vector<int>nums(n);
        for(int i=0;i<n;i++)
            scanf("%d",&nums[i]);
        sort(nums.begin(),nums.end(),[&](int a,int b)->bool{return a>b;});
        for(int i=0;i<m;i++)
            printf("%d ",nums[i]);
        printf("\n");
    }
}