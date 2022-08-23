#include<bits/stdc++.h>
using namespace std;
struct temp
{
	double time;
	double value;
}a[21];
static bool cmp(temp mm,temp nn)
{
	return mm.value/mm.time>nn.value/nn.time;
}
int main()
{
	int m,n;
	while(cin>>m>>n&&(m!=0||n!=0))
	{
		double ans=0;int i;
		for(i=0;i<m;i++)
		{
			cin>>a[i].time>>a[i].value;
		}
		sort(a,a+m,cmp);
		for( i=0;i<m;i++)
		{
			if(n>=a[i].time)
			{
				ans+=a[i].value;
				n-=a[i].time;
			}
			else
				break;
		}
		if(n>0)
			ans+=a[i].value/a[i].time*n;
		printf("%.2lf\n",ans);
	}
}
