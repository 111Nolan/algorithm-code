#include<bits/stdc++.h>
using namespace std;
int a[101], b[101], ans, n;				// n进制，ans步数 
bool judge(int []);						// 判别整数数组是否为回文数
void add(int []);						// 整数数组与其反序数组进行n进制加法运算 
int main() 
{
	string s;
	cin >> n >> s;						// 读入进制n和字符串s 
	a[0] = s.length();					// a[0]计算字符串s的位数
	for (int i=1; i<=a[0]; i++) 
    {
		if (s[a[0]-i]>='0' && s[a[0]-i]<='9') 
			a[i] = s[a[0]-i] - '0';		
		else 
			a[i] = s[a[0]-i] - 'A' + 10;
		
	} 
	if (judge(a)) 
    {
		cout << 0 << endl;				// 如果a是回文数，输出步数0 
		return 0;
	} 
	ans = 0;							// 步数初始化0 
	while (ans <= 30) 
    {
		ans++;
		add(a);
		if (judge(a)) 
        {
			cout << ans << endl;
			return 0;
		}
	}
	cout << "Impossible";				// 输出无解信息 
	return 0;
}
bool judge(int a[]) 
{					// 判别整数数组是否为回文数
	for (int i=1; i<=a[0]; i++)
		if (a[i] != a[a[0]-i+1]) 
			return false;
	return true;
} 

void add(int a[]) {						// 整数数组a与其反序数组b进行n进制加法运算 
	for (int i=1; i<=a[0]; i++) 
		b[i] = a[a[0]-i+1];				// 反序数组b 
	for (int i=1; i<=a[0]; i++) 
		a[i] += b[i];					// 逐位相加 
	for (int i=1; i<=a[0]; i++) 
    {
		a[i+1] += a[i] / n;				// 处理进位
		a[i] %= n; 
	} 
	if (a[a[0]+1] > 0) 
		a[0]++;							// 修正新的a的位数（a+b最多只能进一位） 
}

