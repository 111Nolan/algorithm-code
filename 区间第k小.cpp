#include<bits/stdc++.h>
using namespace std;
const int N = 100005;
int a[N];
int n, k;
long long max_position(int x)
{
	long long result=0;
	int l=0,r=-1,num=0;
	while(r<n)
	{
		if(num<k)
		{
			if(a[r+1]<=x)	num++;
			r++;
		}
		else
		{
			result+=n-r;
			if(a[l]<=x)num--;
			l++;
		}
	}
	return result;
}

int main()
{
	cin>>n>>k;
	int *b=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		b[i]=a[i];
	}
	sort(b,b+n);
	int len=unique(b,b+n)-b;
	int l=0,r=len-1;
	int ans=0;
	while(l<=r)
	{
		int mid=(l+r)/2;
		long long ret=max_position(b[mid]);
		if(ret>=k)
		{
			ans=b[mid];
			r=mid-1;
		}
		else
			l=mid+1;
	}
	cout<<ans;
}



