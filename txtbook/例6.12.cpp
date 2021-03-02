#include<iostream>
using namespace std;
int main(void)
{
	const int n = 3, m = 4;
	int i, j, max, maxj, a[n][m] = { 1, 2, 3, 13, 5, 6, 7, 8, 9, 10, 11, 12 };
	bool flag;
	for (i = 0; i < n; i++)
	{
		max = a[i][0]; maxj = 0;
		for (j = 0; j < m;j++)
		if (a[i][j]>max)
		{
			max = a[i][j];
			maxj = j;
		}
		flag = true;
		for (int k = 0; k < n;k++)
		if (max>a[k][maxj])
		{
			flag = false;
			break;
		}
		if (flag)
		{
			cout << "鞍点a[" << i << "][" << maxj << "]=" << max << endl; break;
		}
	}
	if (!flag)
	{
		cout << "鞍点不存在！" << endl;
	}
	return 0;
}
