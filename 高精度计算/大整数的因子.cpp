#include<bits/stdc++.h>
using namespace std;
/*思路就是应用高精除低精*/
string s;
int a[50];
int div(int x)
{
    int r=0;
    for(int i=1;i<=a[0];i++)
    {
        r*=10;
        int temp=a[i]+r;
        r=temp%x;//只要处理余数就行了
    }
    return r;
}
int main()
{
    vector<int>ans;
    cin>>s;
    a[0]=s.size();
    for(int i=1;i<=a[0];i++)//除法是从高位开始，所以可以不要移位
        a[i]=s[i-1]-'0';
    for(int i=2;i<=9;i++)
        if(div(i)==0)
            ans.push_back(i);
    if(ans.size()==0)
    {
        cout<<"none"<<endl;
        return 0;
    }
    for(int i:ans)
        printf("%d ",i);
}