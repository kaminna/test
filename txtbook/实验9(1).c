#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void sort(int a[], int n)
{
	int i, j, k, t;
	for (i = 0; i < n-1; i++)		//选择法排序
	{
		k = i;
		for (j = i + 1; j < n; j++)
		if (a[k]<a[j]) k = j;
		if (k != i)
		{
			t = a[i]; a[i] = a[k]; a[k] = t;
		}
	}
/*	for (i = 0; i < n - 1;i++)		//冒泡法
	for (j = 0; j < n - 1 - i;j++)
	if (a[j] < a[j + 1])
	{
		t = a[j]; a[j] = a[j + 1]; a[j + 1] = t;
	}*/
}
int main(void)
{
	int score[20],i;
	srand(time(0));
	printf("排序前：\n");
	for (i = 0; i < 20; i++)
	{
		score[i] = rand() % 101;
		printf("%4d", score[i]);
		if ((i + 1) % 5 == 0)
			printf("\n");
	}
	sort(score, 20);
	printf("排序后：\n");
	for (i = 0; i < 20; i++)
	{
		printf("%4d", score[i]);
		if ((i+1) % 5 == 0)
			printf("\n");
	}
	return 0;
}
