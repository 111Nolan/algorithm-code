#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    string a;
    cin>>a;
    int l=0,r=a.size();
    string ans;
    while(l<=r)
    {
        if(a[l]<a[r])
            ans+=a[l++];
        else if(a[l]>a[r])
            ans+=a[r--];
        else
        {
            int f=0,x=l,y=r;
            while(x<=y)
            {
                if(a[x]<a[y])
                {
                    f=1;
                    break;
                }
                else if(a[x]>a[y])
                    break;
                x++,y--;
            }
            if(f)
                ans+=a[l++];
            else
                ans+=a[r--];
        }
    }
    cout<<ans<<endl;
}