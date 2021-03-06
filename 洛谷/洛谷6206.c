#include <stdio.h>
int main(int argc, char** argv)
{
	int score = 0;
	long long n;
	scanf("%lld", &n);
	while (n!=1)
	{
		if (n % 2)
		{
			n = n * 3 + 1;
		}
		else
		{
			n /= 2;
		}
		score++;
	}
	printf("%d", score);
	return 0;
}