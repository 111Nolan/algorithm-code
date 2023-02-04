#include<bits/stdc++.h>
using namespace std;
bool judge(int num)
{
    for(int i=2;i*i<num;i++)
        if(num%i==0)
            return false;
    return true;
}
bool nums[100100]={0};
int main()
{
    int n;
    scanf("%d",&n);
    int t=sqrt(n);
    for(int i=2;i<=t;i++)
        if(judge(i))
        {
            int p=i*2,q=2;
            while(p<=n)
            {
                nums[p]=1;
                q++;
                p=i*q;
            }
        }
    for(int i=2;i<=n;i++)
        if(!nums[i])
            cout<<i<<" ";
}