#include<bits/stdc++.h>
using namespace std;
/*
典型的dfs搜索，这里有点难度的就是如何处理‘ ’空格
因为n是1~9，所以答案中不会出现连续两个空格的情况，所以只需要多保存一个pre值
就可以下一次取空格回到上一次的状态了
然后就是按ascii码输出的问题，这里我是直接用ans数组存了答案，然后用sort直接对string排列
输出答案
*/
vector<string>ans;
string sym;
int n;
void dfs(int pre,int cur,int k)
{
    if(k>n&&cur==0)
    {
        ans.push_back(sym);
        return;
    }
    else if(k>n)
        return;
    for(int i=1;i<=3;i++)
    {
        if(i==3)
        {
            sym[k]='+';
            dfs(cur,cur+k,k+1);
        }
        else if(i==1)
        {
            sym[k]='-';
            dfs(cur,cur-k,k+1);
        }
        else
        {
            sym[k]=' ';
            if(cur==pre+k-1)//判断上一个的符号
                dfs(cur,pre+(k-1)*10+k,k+1);
            else if(cur==pre-k+1)
                dfs(cur,pre-((k-1)*10+k),k+1);
        }
    }
}
int main()
{
    sym="1111111111";
    scanf("%d",&n);
    dfs(0,1,2);
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++)
    {
        printf("%d",1);
        for(int j=2;j<=n;j++)
        {
            printf("%c%d",ans[i][j],j);
        }
        printf("\n");
    }
}