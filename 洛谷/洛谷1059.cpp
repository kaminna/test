#include<stdio.h>
int main(void)
{
	int a[100], n, i, j, t;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (i = 0; i < n - 1; i++)
		for (j = 0; j < n - i - 1; j++)
			if (a[j]>a[j + 1])
			{t = a[j + 1]; a[j + 1] = a[j]; a[j] = t;}
	t = 0;
	for (i = 0; i < n; i++)
	{
		if (a[i] == a[i + 1])
			continue;
		else
			t++;
	}
	printf("%d\n",t);
	for (i = 0; i < n; i++)
	{
		if (a[i] == a[i + 1])
			continue;
		else
		{
			printf("%d", a[i]);
			if (i != n - 1)
				printf(" ");
		}
	}
	printf("\n");
	return 0;
}