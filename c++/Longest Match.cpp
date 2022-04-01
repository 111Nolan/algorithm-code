#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num=0;
	string str1,str2;
	while(getline(cin,str1))
	{
		num++;
		getline(cin,str2);
		int len1=str1.size(),len2=str2.size();
		for(int i=0;i<len1;i++)
		{
			if(str1[i]>='a'&&str1[i]<='z'||str1[i]>='A'&&str1[i]<='Z')
				continue;
			else 
				str1[i]=' ';
		}
		for(int i=0;i<len2;i++)
		{
			if(str2[i]>='a'&&str2[i]<='z'||str2[i]>='A'&&str2[i]<='Z')
				continue;
			else 
				str2[i]=' ';
		}
		string temp;
		stringstream s1(str1),s2(str2);
		vector<string>temp1;
		vector<string>temp2;
		while(s1>>temp)
			temp1.push_back(temp);
		while(s2>>temp)
			temp2.push_back(temp);
		int length1=temp1.size(),length2=temp2.size();
		int dp[length1+1][length2+1];
		for(int i=0;i<=length1;i++)
			dp[i][0]=0;
		for(int i=0;i<=length2;i++)
			dp[0][i]=0;
		for(int i=1;i<=length1;i++)
		{
			for(int j=1;j<=length2;j++)
			{
				if(temp1[i-1]==temp2[j-1])
					dp[i][j]=dp[i-1][j-1]+1;
				else
					dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			}
		}
		printf("%2d. ",num);
		if(!len1||!len2)
			cout<<"Blank!"<<endl;
		else
			cout<<"Length of longest match: "<<dp[length1][length2]<<endl;
		
	}
}
