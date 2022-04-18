#include<bits/stdc++.h>
using namespace std;
string s;
int a[102],ans[102];
int main()
{
    cin>>s;
    int len=s.size();
    for(int i=1;i<=len;i++)
        a[i]=s[i-1]-'0';
/* 
    高精度除低精度 
    模拟一下：
    123 / 4
    是用高位除低位，所以不用倒序 
*/
    int r=0;//r作为余数
    for(int i=1;i<=len;i++)
    {
        int temp=r*10+a[i];//低位要处理高位的余数
        ans[i]=temp/13;
        r=temp%13;//这个余数是不断在更新的，更新到最后就是答案了
    }
    int l=1;//从最后一位开始处理前导0
    while(ans[l]==0)
        l++;
    for(int i=l;i<=len;i++)
        printf("%d",ans[i]);
    cout<<endl;
    printf("%d",r);
}