#include <stdio.h>
int main(int argc, char** argv)
{
	for (int i = 1; i <= 40; i++)
	{
		for (int j = i; j <= 40-i; j++)
		{
			for (int m = j; m <= 40-i-j; m++)
			{
				for (int n = m; n <= 40 - i - j - m; n++)
				{
					if (i + j + n + m == 40)
					{
						printf("%d %d %d %d\n", i, j, m, 40 - i - j - m);
					}
				}
			}
		}
	}
	return 0;
}