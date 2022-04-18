#include <iostream>
using namespace std;
const int arr_num = 20;
int main()
{
	int i, j, k, a[arr_num];
	k = 0;
	for (i = 0; i < arr_num; i++)
		cin >> a[i];
	for (i = 0; i < arr_num; i++)
	{
//		k = i;
//		a[k] = a[i];
		for (j = 0; j < arr_num; j++)
		{
			if (i == j)
			{
				continue;
			}
			else
			{
				if (a[i] % a[j] == 0)
				{
					cout << a[i] << endl;
					break;
				}
			}
		}
	}
	return 0;
}


