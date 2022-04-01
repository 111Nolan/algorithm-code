#include<stdio.h>
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
#define inf 0x3ffffff
char s[110];
int dp[110][110],vis[110][110];
void print(int i,int j)
{
    if(i>j)
        return;
    if(i==j)
    {
        if(s[i]=='('||s[i]==')')
          printf("()");
        else if(s[i]=='['||s[i]==']')
          printf("[]");
    }
    else if(vis[i][j]==-1)//˵�� i��jƥ���������ľ����� 
    {
        printf("%c",s[i]);
        print(i+1,j-1);
        printf("%c",s[j]);
    }
    else//˵�������жϵ� 
    {
        print(i,vis[i][j]);
        print(vis[i][j]+1,j);
    }
}
int main()
{
    cin>>s;
    int len=strlen(s);
    for(int i=0;i<len;i++)
        dp[i][i]=1;
    for(int l=1;l<len;l++)//�������� 
        for(int i=0;i<len-l;i++)//������� 
        {
           int j=l+i;//�Ҷ˵� 
           dp[i][j]=inf;
           if((s[i]=='('&&s[j]==')')||(s[i]=='['&&s[j]==']'))
            {
                 if(dp[i][j]>dp[i+1][j-1])
                 {
                     dp[i][j]=dp[i+1][j-1];
                     vis[i][j]=-1;///��ʾs[i] ��s[j] ƥ��ʱ�����ŵ�;
                 }
            }
            for(int k=i;k<j;k++)
            {
                 if(dp[i][j]>dp[i][k]+dp[k+1][j])
                 {
                      dp[i][j]=dp[i][k]+dp[k+1][j];
                      vis[i][j]=k;///��ʾ��kΪ�ָ��ƥ��ʱ����;
                 }
            }
        }
    print(0,len-1);
    printf("\n");
    return 0;
}
