#include<bits/stdc++.h>
using namespace std;
string str,path;
vector<string>ans;
vector<bool>visited;
void trackback()
{
    if(path.size()==str.size())
    {
        ans.push_back(path);
        return;
    }
    for(int i=0;i<str.size();i++)
    {
        if(visited[i])
            continue;
        path.push_back(str[i]);
        visited[i]=true;
        trackback();
        visited[i]=false;
        path.pop_back();
    }
}
int main()
{
    cin>>str;
    visited.resize(str.size(),0);
    sort(str.begin(),str.end());
    trackback();
    for(auto it:ans)
        cout<<it<<endl;
}