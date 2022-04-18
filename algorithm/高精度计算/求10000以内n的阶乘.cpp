#include<bits/stdc++.h>
using namespace std;
int a[100000010];//这里必须要定义在main外自动初始化，不然会tle
int main()
{
    int n;
    cin>>n;
    a[0]=1,a[1]=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=a[0];j++)
            a[j]*=i;
        for(int j=1;j<=a[0];j++)
        {
            a[j+1]+=a[j]/10;
            a[j]%=10;
        }
        while(a[a[0]+1]>0)//这里可能会出现很多次进位
        {
            a[0]++;
            a[a[0]+1]+=a[a[0]]/10;
            a[a[0]]%=10;
        }
            
    }
    for(int i=a[0];i>=1;i--)
        printf("%d",a[i]);
}