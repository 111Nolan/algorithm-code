#include<bits/stdc++.h>
using namespace std;
struct patient
{
    string id;
    int num;
    int age;
}a[101];
bool cmp(patient a,patient b)
{
    if(a.age>=60||b.age>=60)
        return a.age==b.age?a.num>b.num:a.age>b.age;
    return a.num<b.num;
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].id;
        cin>>a[i].age;
        a[i].num=i;
    }
    sort(a+1,a+n+1,cmp);
    for(int i=1;i<=n;i++)
        cout<<a[i].id<<endl;
}