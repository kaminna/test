#include<stdio.h>
void perfect(int n)
{
	int i, sum = 1;
	for (i = 2; i < n; i++)
	{
		if (n%i == 0)
		sum += i;
	}
	if (sum == n)
		printf("%d是完数\n", n);
	else
		printf("%d不是完数\n", n);
}
int main(void)
{
	int n;
	scanf("%d", &n);
	if (n > 1)
		perfect(n);
	else
		printf("%d不是完数\n", n);
	return 0;
}
