#include <stdio.h>
int main(int argc, char** argv)
{
	int cnt = 0;
	for (int a = 1; a <= 9; a++)
	{
		for (int b = 1; b <= 9; b++)
		{
			if (a == b)
			{
				continue;
			}
			for (int c = 1; c <= 9; c++)
			{
				if (c == a || c == b)
				{
					continue;
				}
				for (int d = 1; d <= 9; d++)
				{
					if (d == a || d == b || d == c)
					{
						continue;
					}
					for (int e = 1; e <= 9; e++)
					{
						if (e == a || e == b || e == c || e == d)
						{
							continue;
						}
						if ((a * 10 + b)*(c * 100 + d * 10 + e) == (a * 100 + d * 10 + b)*(c * 10 + e))
						{
							cnt++;
						}
					}
				}
			}
		}
	}
	printf("%d", cnt/2);
	return 0;
}