#include<bits/stdc++.h>
using namespace std;
struct patient
{
    string id;
    int num;
    int age;
};
bool cmp(patient a,patient b)
{
    if(a.age>60||b.age>60)
        return a.age==b.age?a.num<b.num:a.age>b.age;
    else
        return a.num<b.num;
}
int main()
{
    int n;
    cin>>n;
    vector<patient>p(n);
    for(int i=0;i<n;i++)
    {
        string a;
        int b;
        cin>>a>>b;
        p[i].num=i;
        p[i].age=b;
        p[i].id=a;
    }
    sort(p.begin(),p.end(),cmp);
    for(int i=0;i<n;i++)
        cout<<p[i].id<<endl;
}