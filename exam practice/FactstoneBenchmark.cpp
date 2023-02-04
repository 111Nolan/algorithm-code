#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y;
    while(cin>>y&&y)
    {
        int len=pow(2,(y-1940)/10);
        double sum=0;
        int i;
        for(i=1;;i++)
        {
            sum+=log(i)/log(2.0);
            if(sum>len)
                break;
        }
        cout<<--i<<endl;
    }
}