#include<bits/stdc++.h>
using namespace std;
using ll =long long;
int main()
{
    stack <int>sta;
    ll ans=0;
    int n,t;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&t);
        while(!sta.empty()&&sta.top()<=t)
            sta.pop();
        ans+=sta.size();
        sta.push(t);
    }
    printf("%lld\n",ans);
}