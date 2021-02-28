#include <stdio.h>
int main(int argc, char **argv)
{
	int a, b, i;
	for (i = 100; i <= 999; i++)
	{
		a = i * i;
		b = a % 1000;
		if (i == b)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}