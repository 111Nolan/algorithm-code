#include<bits/stdc++.h>
using namespace std;
string str,path;
void dfs(int k)
{
    if(k>=str.size())
    {
        cout<<str<<endl;
        return;
    }
    for(int i=k;i<str.size();i++)
    {
        swap(str[k],str[i]);
        dfs(k+1);
        swap(str[k],str[i]);
    }
}
int main()
{
    cin>>str;
    dfs(0);
}