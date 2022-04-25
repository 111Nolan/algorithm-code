#include<bits/stdc++.h>
using namespace std;
/*
就是一个快速幂的题目
*/
using ll=long long;
ll k;
ll quickpow(ll b,ll p)
{
    if(p==0)
        return 1;
    else if(p%2!=0)
        return quickpow(b,p-1)*b%k;
    else
    {
        ll temp=quickpow(b,p/2);
        return temp*temp%k;
    }
}
int main()
{
    ll b,p;
    scanf("%lld %lld %lld",&b,&p,&k);
    printf("%lld^%lld mod %lld=%lld",b,p,k,quickpow(b,p));
}