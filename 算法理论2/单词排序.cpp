#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string str[26];
	for(int i=0;i<n;i++)
		cin>>str[i];
	sort(str,str+n);
	for(int i=0;i<n;i++)
	{
		if(!i)
			cout<<str[i];
		else
			cout<<" "<<str[i];
	}
	cout<<endl;
}
