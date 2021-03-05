#include <stdio.h>
int main(int argc, char** argv)
{
	int n;
	scanf("%d", &n);
	int x, k;
	n /= 52;
	for (x = 100; x > 0; x--)
	{
		k = (n - 7 * x) / 21;
		if (k > 0)
		{
			if (7 * x + 21 * k == n)
			{
				printf("%d\n%d", x, k);
				break;
			}
		}
	}
	return 0;
}
//7x+21k=n;