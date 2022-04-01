#include<bits/stdc++.h>
#define inf 0x3ffffff
using namespace std;
char str[110];
int dp[110][110],pos[110][110];
void print(int i,int j)
{
	if(i>j)
		return;
	if(i==j)
	{
		if(str[i]=='('||str[i]==')')
			cout<<"()";
		else
			cout<<"[]";
	}
	else if(pos[i][j]<0)
	{
		cout<<str[i];
		print(i+1,j-1);
		cout<<str[j];
	}
	else
	{
		print(i,pos[i][j]);
		print(pos[i][j]+1,j);
	}
}
int main()
{
	 gets(str);
	int n=strlen(str);
	for(int i=0;i<n;i++)
		dp[i][i]=1;
	for(int len=1;len<n;len++)//斜线遍历的方法（左上到右下），区间dp常用 
	{
		for(int i=1;i<=n-len;i++)
		{
			int j=i+len;
			dp[i][j]=inf;
			if((str[i]=='('&&str[j]==')')||(str[i]=='['&&str[j]==']'))
			{
				dp[i][j]=dp[i+1][j-1];
				pos[i][j]=-1;
			}
			for(int k=i;k<j;k++)
			{
				int temp=dp[i][k]+dp[k+1][j];
				if(temp<dp[i][j])
				{
					dp[i][j]=temp;
					pos[i][j]=k-1;
				}
			}
		}
	}
	print(0,n-1);
	cout<<endl;
} 
