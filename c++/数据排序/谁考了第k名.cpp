#include<bits/stdc++.h>
using namespace std;
int n,k;
struct Stu//两种不同的类型，只能用struct类型
{
	int num;//学号 
	double score;//分数 
};
int main()
{
    scanf("%d%d",&n,&k);
    vector<Stu> stu(n+1);
    for(int i=1;i<=n;i++)
        scanf("%d%lf",&stu[i].num,&stu[i].score);
    sort(stu.begin()+1,stu.end(),[&](Stu a,Stu b)->bool{return a.score>b.score;});
    printf("%d %g\n",stu[k].num,stu[k].score);
}
