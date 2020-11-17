#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int n,i,sum = 1;
	scanf("%d", &n);
	for (i = 2; i < n; i++)
	{
		if (n%i == 0)
			sum += i;
	}
	if (sum == n)
		printf("%d是完数", n);
	else
		printf("%d不是完数", n);
	printf("\n");
	system("pause");
	return 0;
}
