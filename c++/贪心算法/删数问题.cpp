#include<bits/stdc++.h>
using namespace std;
/*
贪心题，要尽可能的让小的数在前面
要去除 s位，数字有 n 位，那么要保留的就是 n-s位 已经选了 x位数
那么我们要做的就是 从 i~n-x中选最小的（i是上一次选出来最小的后一位）
注意：要去除前导0，不然ac不了
*/
using ll=long long;
int main()
{
    int s,t=0,pre=0;
    string str;
    cin>>str>>s;
    vector<int>num;
    vector<int>ans(str.size()-s);
    for(int i=0;i<str.size();i++)
        num.push_back(str[i]-'0');
    int m=str.size()-s;
    for(int i=1;i<=m;i++)
    {
        auto it=min_element(num.begin()+pre,num.end()-m+i);
        pre=it-num.begin()+1;//通过迭代器访问下标
        ans[t++]=*it;
    }
    int i=0;
    while(ans[i]==0)//去前导0
        i++;
    for(;i<ans.size();i++)
        printf("%d",ans[i]);

}