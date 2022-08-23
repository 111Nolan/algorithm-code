#include<bits/stdc++.h>
using namespace std;
string s1,s2;
int a[202],b[202];
int main()
{
    cin>>s1>>s2;
    int len1=s1.size(),len2=s2.size();
    for(int i=1;i<=len1;i++)
        a[len1-i+1]=s1[i-1]-'0';
    for(int i=1;i<=len2;i++)
        b[len2-i+1]=s2[i-1]-'0';
    for(int i=1;i<=len1;i++)
    {
        if(a[i]<b[i])
        {
            a[i]+=10;
            a[i+1]--;
        }
        a[i]-=b[i];
    }
    while(a[len1]==0)
        len1--;
    for(int i=len1;i>=1;i--)
        printf("%d",a[i]);
}