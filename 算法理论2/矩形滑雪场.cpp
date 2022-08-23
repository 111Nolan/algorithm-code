#include<bits/stdc++.h>
using namespace std;
const int maxm=505,maxn=505;
int board[maxm][maxn];
int ans[maxm][maxn];
int e1[4]={1,-1,0,0};
int e2[4]={0,0,1,-1};
int dfs(int row,int col,int m,int n)
{
	if(ans[row][col])
		return ans[row][col];
	ans[row][col]=1;
	for(int i=0;i<4;i++)
	{
		int newx=row+e1[i],newy=col+e2[i];
		if(newx<0||newx>=m||newy<0||newy>=n||board[newx][newy]>=board[row][col])
			continue;
		ans[row][col]=max(ans[row][col],dfs(newx,newy,m,n)+1);
	}
	return ans[row][col];
}
int main()
{
	int m,n,res=0;
	cin>>m>>n;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>board[i][j];
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			res=max(res,dfs(i,j,m,n));
	cout<<res;
}
