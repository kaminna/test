#include<stdio.h>
int main(void)
{
	int M[4][4];
	int i, j, n=0, m=0, sum;
	for (i = 0; i < 4; i++)
	for (j = 0; j < 4; j++)
		scanf("%d", &M[i][j]);
	for (i = 0; i < 4; i++)
	{
		n += M[i][i];
		m += M[i][3 - i];
	}
	sum = n + m;
	printf("M[4][4]两条对角线元素值的和为%d\n", sum);
	return 0;
}
