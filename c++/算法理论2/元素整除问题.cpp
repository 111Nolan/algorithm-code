#include <bits/stdc++.h>
using namespace std;
int main()
{
	set<int>myset;
	for(int i=1;i<=20;i++)
	{
		int a;
		scanf("%d",&a);
		myset.insert(a);
	}
	for(auto it=myset.begin();it!=myset.end();it++)
	{
		for(auto a:myset)
		{
			if(a>=(*it))
				break;
			if((*it)%a==0)
			{
				printf("%d\n",(*it));
				break;
			}
		}
	}
}


