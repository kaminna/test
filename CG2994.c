#include <stdio.h>
int main(int argc, char **argv)
{
	int a, b, c, d, e, f, g, h, i, x, y, z, n, count = 0;
	for (a = 1; a <= 9; a++)
	{
		for (b = 1; b <= 9; b++)
		{
			if (a == b)
				continue;
			for (c = 1; c <= 9; c++)
			{
				if (c == a || c == b)
					continue;
				for (d = 1; d <= 9; d++)
				{
					if (d == a || d == b || d == c)
						continue;
					for (e = 1; e <= 9; e++)
					{
						if (e == a || e == b || e == c || e == d)
							continue;
						for (f = 1; f <= 9; f++)
						{
							if (f == a || f == b || f == c || f == d || f == e)
								continue;
							for (g = 1; g <= 9; g++)
							{
								if (g == a || g == b || g == c || g == d || g == e || g == f)
									continue;
								for (h = 1; h <= 9; h++)
								{
									if (h == a || h == b || h == c || h == d || h == e || h == f || h == g)
										continue;
									for (i = 1; i <= 9; i++)
									{
										if (i == a || i == b || i == c || i == d || i == e || i == f || i == g || i == h)
											continue;
										x = a;
										y = b * 100 + c * 10 + d;
										z = e * 10 + f;
										n = g * 100 + h * 10 + i;
										if (x * y == z * n)
										{
											count++;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	printf("%d", count);
	return 0;
}