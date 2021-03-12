#include <stdio.h>
int main(int argc, char** argv)
{
	int k, n = 0, def = 0;
	long long sum = 0;
	scanf("%d", &k);
	for (int i = 1; i <= k; i++)
	{
		if (i*(i + 1) >= 2 * k)
		{
			n = i - 1;
			def = k - n * (n + 1) / 2;
			break;
		}
	}
	for (int i = 1; i <= n; i++)
	{
		sum += i * i;
	}
	sum += (n + 1) * def;
	printf("%lld", sum);
	return 0;
}