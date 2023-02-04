#include<bits/stdc++.h>
using namespace std;
int div1(int a,int b)
{
    if(a%b==0)
        return b;
    cout<<a<<" "<<b<<endl;
    return div1(b,a%b);
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    cout<<div1(fabs(a),fabs(b))<<endl;
}