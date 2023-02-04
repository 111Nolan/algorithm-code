#include<bits/stdc++.h>
using namespace std;
struct process
{
    int t,v,id;
};
bool tim[10010];
int main()
{
    int n,res=0;
    scanf("%d",&n);
    vector<process>p(n);
    vector<process>ans;
    for(int i=0;i<n;i++)
    {
        p[i].id=i+1;
        scanf("%d %d",&p[i].v,&p[i].t);
    }
    sort(p.begin(),p.end(),[&](process a,process b)->bool{return a.v==b.v?a.t<b.t:a.v>b.v;});
    for(int i=0;i<n;i++)
    {
        if(!tim[p[i].t])
        {
            tim[p[i].t]=1;
            ans.push_back(p[i]);
        }
    }
    sort(ans.begin(),ans.end(),[&](process a,process b)->bool{return a.t<b.t;});
    stringstream ss;
    for(auto it:ans)
    {
        ss<<it.id<<" ";
        res+=it.v;
    }
    // cout<<ss.str()<<endl;
    // cout<<res<<endl;
    cout<<"最优价值为："<<res<<endl;
    cout<<"最优的排列顺序为："<<ss.str()<<endl;
}