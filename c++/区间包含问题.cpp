#include<bits/stdc++.h>
using namespace std;
static bool cmp(vector<int> a,vector<int> b)
{
	return a[1]<b[1];
}
int main()
{
	int n,m;
	while(cin>>n>>m)
	{
		vector<vector<int>>intervals(n,vector<int>(2));
		vector<vector<int>>areas(m,vector<int>(2));
		for(int i=0;i<n;i++)
			cin>>intervals[i][0]>>intervals[i][1];
		for(int i=0;i<m;i++)
			cin>>areas[i][0]>>areas[i][1];
		sort(intervals.begin(),intervals.end(),cmp);

		for(int i=0;i<m;i++)
		{
			int ans=0;
			int l=areas[i][0];
			int r=areas[i][1];
			for(int j=0;j<n;j++)
			{	
				if(intervals[j][0]>=l)
				{
					if(intervals[j][1]<=r)
					{
						l=intervals[j][1];
						ans++;
					}
					else
						break;
				}
			}
			cout<<ans<<endl;
		}
	}
}

