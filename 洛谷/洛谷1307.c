#include <stdio.h>
#include <math.h>
int main(int argc, char** argv)
{
	int N, n, count = 0, revers = 0;
	scanf("%d", &N);
	n = N;
	while (N)
	{
		count++;
		N /= 10;
	}
	while (n)
	{
		count--;
		revers += n % 10 * pow(10, count);
		n /= 10;
	}
	printf("%d", revers);
	return 0;
}