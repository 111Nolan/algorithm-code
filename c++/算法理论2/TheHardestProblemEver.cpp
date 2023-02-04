#include <bits/stdc++.h>
using namespace std;
char dic [26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
int main()
{
	string str1,str;
	while(getline(cin,str)&&str!="ENDOFINPUT")
	{
		getline(cin,str1);
		for(int i=0;i<str1.size();i++)
		{
			if(str1[i]>='A'+5&&str1[i]<='Z')
				str1[i]-=5;
			else if(str1[i]>='A'&&str1[i]<'A'+5)
				str1[i]+=26-5;
		}
		cout<<str1<<endl;
		string end;//注意一下还有这个end
		getline(cin,end);
	}
}
