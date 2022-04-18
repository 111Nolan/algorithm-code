#include<bits/stdc++.h>
using namespace std;
/*
最多不重叠区间问题，做过很多遍了不解释
*/
int main()
{
    int n;
    scanf("%d",&n);
    vector<vector<int>>times(n,vector<int>(2));
    for(int i=0;i<n;i++)
        scanf("%d %d",&times[i][0],&times[i][1]);
    sort(times.begin(),times.end(),[&](vector<int>a,vector<int>b)->bool{return a[1]<b[1];});
    int miniover=times[0][1],ans=1;
    for(int i=1;i<n;i++)
    {
        if(times[i][0]>=miniover)
        {
            ans++;
            miniover=times[i][1];
        }
    }
    printf("%d\n",ans);
}