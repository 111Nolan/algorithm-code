#include<bits/stdc++.h>
using namespace std;
//跟高精乘一样就行了
int a[202],b[202],c[500];
string s1,s2;
int main()
{  
    cin>>s1;
    cin>>s2;
    int len1=s1.size(),len2=s2.size(),len=len1+len2;
    for(int i=1;i<=len1;i++)
        a[len1-i+1]=s1[i-1]-'0';
    for(int i=1;i<=len2;i++)
        b[len2-i+1]=s2[i-1]-'0';
    for(int i=1;i<=len1;i++)
    {
        for(int j=1;j<=len2;j++)
        {
            c[i+j-1]+=a[i]*b[j];
            c[i+j]+=c[i+j-1]/10;
            c[i+j-1]%=10;
        }
    }
    if(c[len]==0)
        len--;
    for(int i=len;i>=1;i--)
        printf("%d",c[i]);
}