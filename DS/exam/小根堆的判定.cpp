#include<bits/stdc++.h>
using namespace std;
bool judge(int root,vector<int>nums,int s)
{
    if(root>=s)
        return true;
    int l=root*2+1,r=root*2+2;
    if(l<s&&nums[l]<nums[root])
        return false;
    if(r<s&&nums[r]<nums[root])
        return false;
    return judge(l,nums,s)&&judge(r,nums,s);
}
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    while(n--)
    {
        string a;
        getline(cin,a);
        stringstream ss(a);
        int t;
        vector<int>nums;
        while(ss>>t)
            nums.push_back(t);
        if(judge(0,nums,nums.size()))
            cout<<"True"<<endl;
        else
            cout<<"False"<<endl;
    }
}