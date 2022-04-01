#include<bits/stdc++.h>
using namespace std;
unordered_map<char,int>dict;
int num(string a)
{
	int n=a.size();
	vector<int>dp(n,1);
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(dict[a[i]]>=dict[a[j]])
				dp[i]=max(dp[i],dp[j]+1);
		}
	}
	int ans=0;
	for(int i=0;i<n;i++)
		ans=max(ans,dp[i]);
	return ans;
}
int main()
{
	vector<int>ans;
	string temp;
	getline(cin,temp);
	for(int i=0;i<temp.size();i++)
		dict[temp[i]]=i;

	string str;
	getline(cin,str);
	stringstream ss(str);
	string s;
	while(ss>>s)
		ans.push_back(num(s));
	
	for(int i=0;i<ans.size();i++)
		cout<<ans[i];
	cout<<endl;
} 
