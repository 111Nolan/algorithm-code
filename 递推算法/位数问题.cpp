#include<bits/stdc++.h>
using namespace std;
/*这位偶数的3的个数=上位奇数3的个数*1+上位偶数3的个数*9（最后一位*8因最高不能为0）*/
int main()
{
    int n;
    scanf("%d",&n);
    vector<vector<long long>>bits(n,vector<long long>(2));
    bits[0][0]=9,bits[0][1]=1;
    for(int i=1;i<n-1;i++)
    {
        bits[i][0]=(bits[i-1][0]*9+bits[i-1][1])%12345;
        bits[i][1]=(bits[i-1][0]+bits[i-1][1]*9)%12345;
    }
    bits[n-1][0]=(bits[n-2][0]*8+bits[n-2][1])%12345;//最后一位最高为不能为0，所以少了一个
    printf("%lld\n",bits[n-1][0]);
}