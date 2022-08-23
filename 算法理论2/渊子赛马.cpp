#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	while(cin>>n&&n)
	{
		int target=n/2;
		int ans=0;
		int *me=new int[n];
		int *enemy=new int[n];
		for(int i=0;i<n;i++)
			cin>>me[i];
		for(int i=0;i<n;i++)
			cin>>enemy[i];
		sort(me,me+n);
		sort(enemy,enemy+n);
		int i=0,j=0;
		for(;i<n;i++)
		{
			if(me[i]<=enemy[j])
				continue;
			ans++;
			j++;
		}
		if(ans>target)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl; 
	}
}
