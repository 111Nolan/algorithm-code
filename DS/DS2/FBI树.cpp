#include<bits/stdc++.h>
using namespace std;
void output(int l,int r,vector<int>s)
{
    if(l==r)
    {
        if(s[l])
            cout<<"I";
        else
            cout<<"B";
        return;
    }
    int a,b;
    a=b=0;
    for(int i=l;i<=r;i++)
    {
        if(s[i])
            a++;
        else
            b++;
    }
    output(l,(l+r)/2,s);
    output((l+r)/2+1,r,s);
    if(a!=0&&b!=0)
        cout<<"F";
    else if(b!=0)
        cout<<"B";
    else
        cout<<"I";
}
int main()
{
    int n;
    string a;
    cin>>n;
    cin>>a;
    vector<int>s(pow(2,n)+1);
    for(int i=0;i<pow(2,n);i++)
        s[i+1]=a[i]-'0';
    output(1,pow(2,n),s);
}