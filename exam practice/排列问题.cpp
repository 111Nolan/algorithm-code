#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str,',');
    sort(str.begin(),str.end());
    do
    {
        cout<<str<<" ";
    } while (next_permutation(str.begin(),str.end()));
    cout<<endl;
}