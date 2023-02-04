#include<bits/stdc++.h>
using namespace std;
string s;
void fbi(int l,int r)
{
    if(l==r)
    {
        if(s[l]=='0')
            cout<<'B';
        else
            cout<<'I';
        return ;
    }
    int mid=(l+r)/2;
    fbi(l,mid);
    fbi(mid+1,r);
    vector<int>a(2,0);
    for(int i=l;i<=r;i++)
        a[s[i]-'0']++;
    if(a[0]!=0&&a[1]!=0)
        cout<<"F";
    else if(a[0]!=0)
        cout<<'B';
    else
        cout<<"I";
}
int main()
{
    int n;
    cin>>n;
    cin>>s;
    fbi(0,s.size()-1);
}