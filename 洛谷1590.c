#include <stdio.h>
#include <math.h>
int main(int argc, char **argv)
{
	int t, j, a[10000];
	unsigned int n, result, i;
	scanf("%d", &t);
	for (i = 0; i < t; i++)
	{
		result = 0;
		j = 0;
		scanf("%ud", &n);
		while (n)
		{
			if (n % 10 < 7)
			{
				result += (n % 10) * pow(9, j);
			}
			else
			{
				result += ((n % 10) - 1)*pow(9, j);
			}
			n /= 10;
			j++;
		}
		a[i] = result;
	}
	for (i = 0; i < t; i++)
	{
		printf("%u", a[i]);
		if (i != t - 1)
		{
			printf("\n");
		}
	}
	return 0;
}