#include <bits/stdc++.h>
using namespace std;
const int maxn=2e5+10;
long long pos[maxn],unhappy[maxn];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,m,q;
		cin>>n>>m>>q;
		long long sum=0;
		for(int i=1;i<=n;i++)
			cin>>pos[i];
		for(int i=1;i<=q;i++)
		{
			long long x,y;
			cin>>x>>y;
			unhappy[i]=(pos[x]-1-(y%m)+m)%m;
			sum+=unhappy[i];
		}
		sort(unhappy+1,unhappy+q+1);
		long long ans=1e18;
		for(int i=1;i<=q;i++)
			ans=min(ans,sum+m*(i-1)-unhappy[i]*q);
		cout<<ans<<endl;
	}
}



