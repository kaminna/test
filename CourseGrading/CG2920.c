#include <stdio.h>
int Least_mul(int x, int y)
{
	int temp;
	if (x < y)
	{
		temp = x;
		x = y;
		y = temp;
	}
	while (y)
	{
		temp = x % y;
		x = y;
		y = temp;
	}
	return x;
}
int main(int argc, char **argv)
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	a = (a*b) / Least_mul(a, b);
	printf("%d", (a*c) / Least_mul(a, c));
	return 0;
}