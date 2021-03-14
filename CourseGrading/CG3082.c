#include <stdio.h>
#include <stdlib.h>
int cmp(void const* a, void const* b)
{
	return *(int*)a - *(int*)b;
}
int main(int argc, char** argv)
{
	int t, i, j;
	scanf("%d", &t);
	int a[10][1001], element[1001];
	for (i = 0; i < t; i++)
	{
		scanf("%d", &element[i]);
		for (j = 0; j < element[i]; j++)
		{
			scanf("%d", &a[i][j]);
		}
		qsort(a[i], element[i], sizeof(int), cmp);
	}
	for (i = 0; i < t; i++)
	{
		for (j = 0; j < element[i]; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}