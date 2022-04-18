#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,k;
    scanf("%d",&t);
    while(t--)
    {
        string str;
        cin>>str;
        scanf("%d",&k);
        k%=26;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]<='Z'&&str[i]>='A'+k||str[i]<='z'&&str[i]>='a'+k)
                str[i]-=k;
            else if(str[i]>='A'&&str[i]<'A'+k||str[i]>='a'&&str[i]<'a'+k)
                str[i]+=26-k;
        }
        cout<<str<<endl;
    }
}