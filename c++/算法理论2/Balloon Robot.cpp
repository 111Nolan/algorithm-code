#include<bits/stdc++.h>
using namespace std;
// using ll=long long;
typedef long long ll;
const int maxn=1e5+1;
int pos[maxn],unhappy[maxn];
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m,q;
        ll sum=0,ans=1e18;//这俩个可能超出2 32 次方所以用longlong
        scanf("%d %d %d",&n,&m,&q);//n个队伍 m个座位 q次ac
        for(int i=0;i<n;i++)
            scanf("%d",&pos[i]);
        for(int i=0;i<q;i++)
        {
            int x;
            int y;
            scanf("%d %d",&x,&y);
            unhappy[i]=(pos[x-1]-1-(y%m)+m)%m;//注意这里的下标
            sum+=unhappy[i];
        }
        sort(unhappy,unhappy+q,[&](int a,int b)->bool{return a<b;});
        for(int i=0;i<q;i++)
            if(i==0||unhappy[i]!=unhappy[i-1])//一个剪枝，免去多次计算同一个队伍多次ac的情况
                ans=min(ans,sum+i*m-q*unhappy[i]);//因为这边有*操作 所以要定成longlong
        /*由于已经按照时间排好了序，所以在i前面的那些点减去i之后肯定是小于0的，此时就需要为
        这些点加上m，总共需要加上i*m，所有点需要减去d[i]，即q*d[i]。*/
        printf("%lld\n",ans);
    }
}