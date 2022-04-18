#include<bits/stdc++.h>
using namespace std;
string s1,s2;
int a1[300],a2[300],a3[600];
int main()
{
    cin>>s1>>s2;//大数乘法肯定要用字符串的
    int len1=s1.size(),len2=s2.size();
    for(int i=0;i<len1;i++)//注意字符串和数字的高低位转换
        a1[i]=s1[len1-1-i]-'0';
    for(int i=0;i<len2;i++)
        a2[i]=s2[len2-1-i]-'0';
    for(int i=0;i<len1;i++)//这里用的是0~n-1
    {
        for(int j=0;j<len2;j++)
        {
            a3[i+j]+=a1[i]*a2[j];//所以这里直接i+j就行了
            a3[i+j+1]+=a3[i+j]/10;//多个计算涉及到该位所以要+=
            a3[i+j]%=10;//只有一次计算涉及到该位所以不用+=
        }
    }
    int len=len1+len2;
    if(a3[len-1]==0)
        len--;//这里判断高位是否为0的原因是，两个数相乘有可能进位，有可能不进位
    for(int i=len-1;i>=0;i--)
        printf("%d",a3[i]);
}
