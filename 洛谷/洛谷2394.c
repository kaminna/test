#include <stdio.h>
int main(int argc, char** argv)
{
	long double x;
	scanf("%15Lf", &x);
	printf("%.8Lf", 1.0 * x / 23);
	return 0;
}