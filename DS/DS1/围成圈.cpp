#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    vector<vector<int>>nod(n+1,vector<int>(2));
    for(int i=1;i<=n;i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        nod[i][0]=a;
        nod[i][1]=b;
    }
    int s;
    cin>>s;
    for(int i=1;i<=n;i++)
    {
        cout<<s<<" ";
        s=nod[s][0];
    }
}