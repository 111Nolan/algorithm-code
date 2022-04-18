#include<bits/stdc++.h>
using namespace std;
/*
求最大的n！<=2^len
len=pow(2,(year-1940)/10)
*/
int main()
{
    int y;
    while(scanf("%d",&y)!=EOF&&y)
    {
        int len=pow(2,(y-1940)/10);
        double sum=0;//sum要定成double型的
        int i;
        for(i=1;;i++)
        {
            sum+=log(i)/log(2.0);
            if(sum>len)
                break;
        }
        printf("%d\n",--i);
    }
}