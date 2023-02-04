#include<bits/stdc++.h>
using namespace std;
/*
简单的贪心，字符串两端选小的那个加入新的字符串，
如果相等就往里面继续走，知道哪个先小就加入哪个，如果都一样那就随便加入一个
*/
int main()
{
    string ans,a;
    int n;
    while(cin>>n>>a)
    {
        ans="";
        for(int l=0,r=a.size()-1;l<=r;)
        {
            if(a[l]<a[r])
            {
                ans+=a[l];
                l++;
            }
            else if(a[l]>a[r])
            {
                ans+=a[r];
                r--;
            }
            else
            {
                int t1=l,t2=r,f1=0;
                while(t1<t2)
                {
                    if(a[t1]<a[t2])
                    {
                        f1=1;
                        break;
                    }
                    else if(a[t1]>a[t2])
                        break;
                    t1++,t2--;
                }
                if(f1)
                {
                    ans+=a[l];
                    l++;
                }
                else
                {
                    ans+=a[r];
                    r--;
                }
            }
        }
        cout<<ans<<endl;
    }

}