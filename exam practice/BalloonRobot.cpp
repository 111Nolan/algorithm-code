#include<bits/stdc++.h>
using namespace std;
using ll =long long;
const int maxn=1e6;
int pos[maxn];
ll unhappy[maxn];
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m,p;
        ll sum=0,ans=1e18;
        scanf("%d %d %d",&n,&m,&p);
        for(int i=1;i<=n;i++)
            scanf("%d",&pos[i]);
        for(int i=1;i<=p;i++)
        {
            int x,y;
            scanf("%d %d",&x,&y);
            unhappy[i]=(pos[x]-1-(y%m)+m)%m;
            sum+=unhappy[i];
        }
        sort(unhappy+1,unhappy+p,[&](int a,int b)->bool{return a<b;});
        for(int i=1;i<=p;i++)
            ans=min(ans,sum+(i-1)*m-p*unhappy[i]);
        cout<<ans<<endl;
    }
}