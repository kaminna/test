#include <stdio.h>
int main(int argc, char **argv)
{
	int n, sum;
	scanf("%d\n", &n);
	while (n)
	{
		sum = 1;
		while (--n)
		{
			sum = (sum + 1) * 2;
		}
		printf("%d\n", sum);
		scanf("%d", &n);
	}
	return 0;
}