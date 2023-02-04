#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int mod=100000007;
ll quickpow(ll a,ll b)
{
    if(b==0)
        return 1;
    if(b==1)
        return a;
    if(b%2)
        return quickpow(a,b-1)*a%mod;
    else
    {
        ll tem=quickpow(a,b/2)%mod;
        return tem*tem%mod;
    }
    return 1;
}
int main()
{
    int n;
    while(cin>>n)
    {
        ll ans=0;
        for(int i=1;i<=n;i++)
        {
            ans+=quickpow(i,i)%mod;
            ans%=mod;
        }
        ans++;
        ans%=mod;
        cout<<ans<<endl;
    }
}