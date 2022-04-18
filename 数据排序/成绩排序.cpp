#include<bits/stdc++.h>
using namespace std;
struct Stus
{
    string name;
    int score;
};
int main()
{
    int n;
    cin>>n;
    vector<Stus>stus(n);
    for(int i=0;i<n;i++)
        cin>>stus[i].name>>stus[i].score;
    sort(stus.begin(),stus.end(),[&](Stus a,Stus b)->bool{return a.score==b.score?a.name<b.name:a.score>b.score;});
    for(int i=0;i<n;i++)
        cout<<stus[i].name<<" "<<stus[i].score<<endl;
}