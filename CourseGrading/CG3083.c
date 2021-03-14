#include <stdio.h>
long long fib[100] = { 1, 2 };
long long fibonacci(int n)
{
	if (fib[n])
	{
		return fib[n];
	}
	return fib[n] = fibonacci(n - 1) + fibonacci(n - 2);
}
int main(int argc, char** argv)
{
	int n, i;
	long long cal;
	scanf("%d", &n);
	double sum = 0;
	cal = fibonacci(n);
	for (i = 0; i < n; i++)
	{
		sum += (1.0*fib[i + 1] / fib[i]);
	}
	printf("%.4lf", sum);
	return 0;
}
