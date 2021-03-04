#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{
	string s;
	string a[1000];
	int c[1000];
	int flag, n, i, j, count = 0;
	int k = 0;
	cin >> s;
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> a[i];
	for (i = 0; i < n; i++)
	{
		flag = 0;
		for (j = 0; j < 9; j++)
		{
			if (s[j] != '*')
			{
				if (s[j] != a[i][j])
				{
					flag = 1;
					break;
				}

			}
		}
		if (flag == 0)
		{
			count++;
			c[k++] = i;
		}
	}
	cout << count << endl;
	for (i = 0; i < k; i++)
		cout << a[c[i]] << endl;
	return 0;
}