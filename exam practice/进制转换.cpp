#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    vector<int>nums;
    while(n)
    {
        nums.push_back(n%8);
        n/=8;
    }
    for(int i=nums.size()-1;i>=0;i--)
        cout<<nums[i];
    cout<<endl;
}