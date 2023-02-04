#include<bits/stdc++.h>
using namespace std;
bool judge(int root,vector<int>&heap,int t)
{
    if(root>=t)
        return true;
    int l=root*2+1,r=root*2+2;
    if(l<t&&heap[root]>heap[l]||r<t&&heap[root]>heap[r])
        return false;
    return judge(l,heap,t)&&judge(r,heap,t);
}
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    while(n--)
    {
        vector<int>heap(n+1,0);
        string s;
        getline(cin,s);
        stringstream ss;
        int t,m=0;
        ss<<s;
        while(ss>>t)
            heap[m++]=t;
        if(judge(0,heap,m))
            cout<<"True"<<endl;
        else
            cout<<"False"<<endl;
    }
}