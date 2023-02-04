#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1,str2;
    while(getline(cin,str1)&&str1!="ENDOFINPUT")
    {
        getline(cin,str2);
        for(int i=0;i<str2.size();i++)
        {
            if(str2[i]>='A'+5&&str2[i]<='Z')
                str2[i]-=5;
            else if(str2[i]>='A'&&str2[i]<'A'+5)
                str2[i]+=26-5;
        }
        cout<<str2<<endl;
        string end;
        getline(cin,end);
    }
}