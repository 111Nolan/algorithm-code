#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	cin>>str;
	int n=str.size();
	int flag[3]={0};
	for(int i=n;i>=0;i--)
	{
		if(str[i]==')')
			flag[0]++;
		else if(str[i]==']')
			flag[1]++;
		else if(str[i]=='}')
			flag[2]++;
		else if(str[i]=='(')
		{
			if(flag[0])
				flag[0]--;
			else
				str=str.substr(0,i+1)+")"+str.substr(i+1);			
		}		
		else if(str[i]=='[')
		{
			if(flag[1])
				flag[1]--;
			else
				str=str.substr(0,i+1)+"]"+str.substr(i+1);			
		}
		else if(str[i]=='{')
		{
			if(flag[2])
				flag[2]--;
			else
				str=str.substr(0,i+1)+"}"+str.substr(i+1);			
		}
	}
	cout<<str<<endl; 
}
