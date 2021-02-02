#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<algorithm>
using namespace std;
int f[5][9] = { 0 };
int w[5] = { 0, 2, 3, 4, 5 };
int v[5] = { 0, 3, 4, 5, 8 };
int main(void)
{
	int i, j;
	memset(f, 0, sizeof(f));
	for (int i = 1; i < 5;i++)
	for (int j = 1; j < 9; j++)
	{
		if (w[i]>j)					//如果第i件装不下
			f[i][j] = f[i - 1][j];
		else						//如果装得下，可以偷，也可以不偷，取二者的最大值
			f[i][j] = max(f[i - 1][j], f[i - 1][j - w[i]] + v[i]);
	}
	for (int i = 0; i < 5;i++)
	for (int j = 0; j < 9; j++)
		printf("f[%d][%d]=%d\n", i, j, f[i][j]);
	return 0;
}
