#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d\n",&n);
    string str,a;
    vector<string>ans;
    getline(cin,str);
    stringstream ss(str);
    while(ss>>a)
        ans.push_back(a);
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    cout<<endl;
}