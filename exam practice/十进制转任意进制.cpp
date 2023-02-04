#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,b;
    scanf("%d %d",&n,&b);
    stack<char>sta;
    while(n)
    {
        int t=n%b;
        char temp;
        if(t>=10)
            temp=(char)t-10+'A';
        else
            temp=(char)t+'0';
        n/=b;
        sta.push(temp);
    }
    while(!sta.empty())
    {
        printf("%c",sta.top());
        sta.pop();
    }
    printf("\n");
}