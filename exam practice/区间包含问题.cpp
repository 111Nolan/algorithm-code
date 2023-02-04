#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        vector<vector<int>>areas(n,vector<int>(2));
        vector<vector<int>>con(m,vector<int>(2));
        for(int i=0;i<n;i++)
            scanf("%d %d",&areas[i][0],&areas[i][1]);
        sort(areas.begin(),areas.end(),[&](vector<int>a,vector<int>b)->bool{return a[1]==b[1]?a[0]<b[0]:a[1]<b[1];});
        for(int i=0;i<m;i++)
            scanf("%d %d",&con[i][0],&con[i][1]);
        for(int i=0;i<m;i++)//这层遍历的是区间
        {
            int j,miniright,ans=0;
            for(j=0;j<n;j++)
                if(areas[j][0]>=con[i][0])
                {
                    ans++;
                    break;
                }
            miniright=areas[j][1];
            for(;j<n;j++)
            {
                if(areas[j][0]>=miniright&&areas[j][1]<=con[i][1])
                {
                    ans++;
                    miniright=areas[j][1];
                }
            }
            printf("%d\n",ans);
        }
    }
}