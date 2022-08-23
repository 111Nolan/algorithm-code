#include<bits/stdc++.h>
using namespace std;
//注意到GCD（n,n+1）=1,那就直接输出+1序列即可
int main()
{
    int n;
    scanf("%d",&n);
    vector<int>odds(n);
    for(int i=0;i<n;i++)
        scanf("%d",&odds[i]);
    for(int i=0;i<n;i++)
        cout<<odds[i]+1<<" ";
}