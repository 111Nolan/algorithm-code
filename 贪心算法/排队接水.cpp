#include<bits/stdc++.h>
using namespace std;
/*
简单的贪心
*/
int main()
{
    int n;
    scanf("%d",&n);
    vector<vector<double>>times(n,vector<double>(2));
    for(int i=0;i<n;i++)
    {
        times[i][0]=i+1;
        scanf("%lf",&times[i][1]);
    }
    sort(times.begin(),times.end(),[&](vector<double>a,vector<double>b)->bool{return a[1]==b[1]?a[0]<b[0]:a[1]<b[1];});
    for(int i=0;i<n;i++)
        printf("%.0lf ",times[i][0]);
    printf("\n");
    double sum=0,pre=0,now;
    for(int i=1;i<n;i++)
    {
        now=pre+times[i-1][1];
        sum+=now;
        pre=now;
    }
    printf("%.2lf",sum/n);
}