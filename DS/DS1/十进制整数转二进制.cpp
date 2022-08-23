#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    vector<int>nums;
    while(n--)
    {
        int a;
        scanf("%d",&a);
        nums.clear();
        int b;
        while(a)
        {
            b=a%2;
            a/=2;
            nums.push_back(b);
        }
        for(int i=nums.size()-1;i>=0;i--)
            cout<<nums[i];
        cout<<endl;
    }
}