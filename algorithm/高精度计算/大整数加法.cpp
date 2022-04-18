#include<bits/stdc++.h>
using namespace std;
string s1,s2;
int a[302],b[302],c[303];
int main()
{
    cin>>s1>>s2;
    int len1=s1.size(),len2=s2.size(),len=max(len1,len2)+1;
    for(int i=1;i<=len1;i++)
        a[len1-i+1]=s1[i-1]-'0';
    for(int i=1;i<=len2;i++)
        b[len2-i+1]=s2[i-1]-'0';
    for(int i=1;i<=len;i++)
    {
        c[i]+=a[i]+b[i];//这里不需要考虑a、b的前导0，因为a b初始化就是有前导0 
        c[i+1]+=c[i]/10;
        c[i]%=10;
    }
    while(c[len]==0)//这里必须用while来去除前导0
        len--;
    for(int i=len;i>=1;i--)
        printf("%d",c[i]);
    return 0;
}