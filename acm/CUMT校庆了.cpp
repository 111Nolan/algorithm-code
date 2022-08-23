#include<bits/stdc++.h>
using namespace std;
//简单的数学题，一个取整，还有注意一下数值范围
using ll =long long;
const ll a=6161616161;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        ll l,r,t,m;
        scanf("%lld %lld",&l,&r);
        m=ceil(l*1.0/a)*a;//向上取整
        if(m>r)
            cout<<-1<<endl;
        else
            cout<<m<<endl;
    }
}