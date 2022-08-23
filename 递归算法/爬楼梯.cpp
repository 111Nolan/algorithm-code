#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>layers(31);
    layers[1]=1,layers[2]=2;
    for(int i=3;i<=30;i++)
        layers[i]+=layers[i-1]+layers[i-2];
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        printf("%d\n",layers[n]);
    }
}