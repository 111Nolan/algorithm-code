#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c;
    double ans;
    while(scanf("%d %d",&n,&c)!=EOF&&(n!=0||c!=0))
    {
        ans=0;
        vector<vector<int>>paper(n,vector<int>(2));
        for(int i=0;i<n;i++)
            scanf("%d %d",&paper[i][0],&paper[i][1]);
        sort(paper.begin(),paper.end(),[&](vector<int>a,vector<int>b)->bool{return (double)a[1]/a[0]>(double)b[1]/b[0];});
        int i;
        for(i=0;i<n;i++)
        {
            if(c-paper[i][0]>=0)
            {
                ans+=paper[i][1];
                c-=paper[i][0];
            }
            else
                break;
        }
        if(c>0)
            ans+=(double)paper[i][1]/paper[i][0]*c;
        printf("%.2lf\n",ans);
    }
}