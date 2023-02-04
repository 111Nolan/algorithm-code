#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<int>num;
    scanf("%d",&n);
    while(n)
    {
        int t=n%8;
        num.push_back(t);
        n/=8;
    }
    for(int i=num.size()-1;i>=0;i--)
        cout<<num[i];
    cout<<endl;
}