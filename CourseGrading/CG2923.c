#include <stdio.h>
int main(int argc, char **argv)
{
	int i, j, k, l;
	for (i = 1; i <= 4; i++)
	{
		for (j = 1; j <= 4; j++)
		{
			if (j == i)
			{
				continue;
			}
			for (k = 1; k <= 4; k++)
			{
				if (k == i || k == j)
				{
					continue;
				}
				for (l = 1; l <= 4; l++)
				{
					if (l == i || l == k || l == j)
					{
						continue;
					}
					printf("%d\n", i*1000+j*100+k*10+l);
				}
			}
		}
	}
	return 0;
}