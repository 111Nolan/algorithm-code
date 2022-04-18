#include<bits/stdc++.h>
using namespace std;
string strs[21];
int visited[21];
int n,ans;
bool judge(string a,string b,int k)//判断a的后k位和b的前k位是否匹配
{
    int len=a.size()-1;
    for(int i=0;i<=k;i++)//要判断到第k位
        if(a[len-k+i]!=b[i])
            return false;
    return true;
}
void add(string &a,string b,int k)//将b第k位以后串到a上
{
    for(int i=k+1;i<b.size();i++)
        a+=b[i];
}
void dfs(string now)//now代表现在正在处理的字符串
{
    int len=now.size();
    ans=max(len,ans);
    for(int i=0;i<n;i++)
    {
        if(visited[i]>1)//每个串不能使用超过两次
            continue;
        int l=strs[i].size();
        int maxk=min(l,len);
        for(int j=0;j<maxk;j++)
        {
            if(judge(now,strs[i],j))
            {
                string temp=now;
                add(temp,strs[i],j);
                if(temp==now)
                    continue;//这一步很关键，如果加了跟没加一样就不要加，不然的话会影响到后面的解，而且题目也有不能有包含关系的约束
                visited[i]++;
                dfs(temp);
                visited[i]--;
            }
        }
    }
}
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        cin>>strs[i];
    string begin;
    cin>>begin;
    dfs(begin);
    printf("%d\n",ans);
}