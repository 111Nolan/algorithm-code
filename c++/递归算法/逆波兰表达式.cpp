#include<bits/stdc++.h>
using namespace std;
/*
自己写栈实现好难（我失败了）
但是起始直接用函数递归（利用系统栈）就可以了，遇到符号就调用
*/
string str;
double dfs()
{
    cin>>str;
    if(str[0]=='+')
        return dfs()+dfs();
    else if(str[0]=='-')
        return dfs()-dfs();
    else if(str[0]=='*')
        return dfs()*dfs();
    else if(str[0]=='/')
        return dfs()/dfs();
    else
        return stod(str);
}
int main()
{
    printf("%lf",dfs());
}