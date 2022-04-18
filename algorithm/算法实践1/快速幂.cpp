#include<bits/stdc++.h>
using namespace std;
const int MOD=100000007;
long long quickpow(int i,int a)
{
	if(i==0)
		return 1;
	else if(i%2==1)
		return quickpow(i-1,a)*a%MOD;
	else
	{
		long long temp=quickpow(i/2,a)%MOD;
		return temp*temp%MOD;
	}
	
}
int main()
{
	long long ans;
	long long x;
	while(cin>>x)
	{
		ans=0;
		for(int i=1;i<=x;i++)
			ans+=quickpow(i,i);
		ans=(ans+1)%MOD;
		cout<<ans<<endl;
	}
} 
