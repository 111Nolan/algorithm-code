#include<bits/stdc++.h>
using namespace std;
int main()
{
    string key,text;
    cin>>key;
    cin>>text;
    for(int i=0;i<key.size();i++)
        if(key[i]>='A'&&key[i]<='Z')
            key[i]+='a'-'A';
    int t=0;//t作为密文指针，要不断循环
    int s=key.size();
    for(int i=0;i<text.size();i++)
    {
        int k=key[t++]-'a';
        if(text[i]<='z'&&text[i]>='a'+k||text[i]<='Z'&&text[i]>='A'+k)
            text[i]-=k;
        else
            text[i]+=26-k;
        t%=s;
    }
    cout<<text<<endl;
}