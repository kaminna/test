#include <stdio.h>
int main(int argc, char** argv)
{
	int l, d, x;
	int n, m, j, k;
	int max = 1, min = 10000;
	scanf("%d%d%d", &l, &d, &x);
	int D = d;
	for (int i = l; i <= D; i++)
	{
		j = i;
		k = d;
		n = m = 0;
		while (k)
		{
			m += k % 10;
			n += j % 10;
			j /= 10;
			k /= 10;
		}
		if (m == x)
		{
			if (d >= max)
			{
				max = d;
			}
		}
		if (n == x)
		{
			if (i <= min)
			{
				min = i;
			}
		}
		if (max > min)
		{
			break;
		}
		d--;
	}
	printf("%d\n%d", min, max);
	return 0;
}