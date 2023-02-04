#include<bits/stdc++.h>
using namespace std;
/*水题，不解释*/
int main()
{
    string str;
    int n=2;
    cin>>str;
    int a[26];
    for(char c:str)
        a[c-'a']++;
    nth_element(a,a+n,a+26);
    cout<<(char)(n+'a')<<" "<<a[n]<<endl;
}