#include<bits/stdc++.h>
using namespace std;
void hanoi(char a,char b,char c,int n)
{
    if(n==0)
        return;
    hanoi(a,c,b,n-1);
    printf("%c->%d->%c\n",a,n,b);
    hanoi(c,b,a,n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    hanoi('A','B','C',n);
}