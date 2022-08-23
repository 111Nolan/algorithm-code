#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    sort(str.begin(),str.end(),[&](char a,char b)->bool{return a>b;});
    do
    {
        cout<<str<<endl;
    } while (next_permutation(str.begin(),str.end(),[&](char a,char b)->bool{return a>b;}));
    return 0;
}