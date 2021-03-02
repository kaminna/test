#include <stdio.h>
int main(int argc, char **argv)
{
	int lin, n, a;
	scanf("%d", &n);
	for (lin = 1; lin<=4472; lin++)
	{
		if ((lin * lin + lin) >= 2 * n)
		{
			a = n - (lin*lin + lin) / 2 + lin;
			if (lin % 2)
			{
				printf("%d/%d", lin + 1 - a, a);
				break;
			}
			else
			{
				printf("%d/%d", a, lin + 1 - a);
				break;
			}
		}
	}
	return 0;
}