#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    vector<vector<int>>blocks(m+1,vector<int>(n+1));
    blocks[1][1]=1;
    for(int i=2;i<=m;i++)
        blocks[i][1]=1;
    for(int i=2;i<=n;i++)
        blocks[1][i]=1;
    for(int i=2;i<=m;i++)
        for(int j=2;j<=n;j++)
            blocks[i][j]=blocks[i-1][j]+blocks[i][j-1];
    printf("%d",blocks[m][n]);
}