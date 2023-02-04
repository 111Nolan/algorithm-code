#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int a;
        scanf("%d",&a);
        vector<int>m;
        while(a)
        {
            m.push_back(a%2);
            a/=2;
        }
        for(int i=m.size()-1;i>=0;i--)
            cout<<m[i];
        cout<<endl;
    }
}