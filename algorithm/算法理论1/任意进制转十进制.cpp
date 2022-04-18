#include<bits/stdc++.h>
using namespace std;
/*
十转八的太容易了就不做了
做一下myoj上面的任意进制转换
*/
int main()
{
    int m,ans=0;
    string x;
    scanf("%d",&m);
    cin>>x;
    int n=x.size();
    for(int i=n-1;i>=0;i--)
    {
        if(x[i]>='0'&&x[i]<='9')
            ans+=pow(m,n-i-1)*(x[i]-'0');
        else
            ans+=pow(m,n-i-1)*(x[i]-'A'+10);
    }
    printf("%d",ans);
}