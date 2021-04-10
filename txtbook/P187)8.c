#include<stdio.h>
int main(void)
{
	int a[180][180];
	int m, n;
	double sum, average[180];
	printf("请输入二维数组的行列数：\n");
	scanf("%d%d", &m, &n);
	int i, j;
	printf("请输入该二维数组：\n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
			scanf("%d", &a[i][j]);
	}
	for (i = 0; i < m; i++)			//计算平均值
	{
		sum = 0;
		for (j = 0; j < n; j++)
			sum += a[i][j];
		average[i] = sum / n;
	}
	printf("每行的平均值为：");
	for (i = 0; i < m; i++)			//输出平均值
	{
		printf("\n%f", average[i]);
	}
	printf("\n");
	return 0;
}
