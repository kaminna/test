#include<stdio.h>
int main(void)
{
	int a[10][20];
	int i, j;
	for (i = 0; i<10; i++)	//初始化为0
	for (j = 0; j<20; j++)
		a[i][j] = 0;
	a[0][9] = 1; a[9][0] = 1;	//定好位置
	for (i = 1; i<10; i++)
	for (j = 1; j<19; j++)
		a[i][j] = a[i - 1][j - 1] + a[i - 1][j + 1];//推导
	for (i = 0; i<10; i++)
	{
		for (j = 0; j<20; j++)
		if (a[i][j] == 0)
			printf(" ");
		else
			printf("%d", a[i][j]);
		printf("\n");
	}
	return 0;
}
