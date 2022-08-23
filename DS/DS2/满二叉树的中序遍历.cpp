#include<bits/stdc++.h>
using namespace std;
vector<char>trees(50,'0');
void preordered(int t)
{
    if(trees[t]!='0')
    {
        preordered(t*2);
        cout<<trees[t];
        preordered(t*2+1);
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>trees[i];
    preordered(1);
}