#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int n, k;
	double s;
	for (n = 1; n <= 10; n = n + 1)
	{
		s = 1.0;
		for (k = 1; k <= n; k = k + 1)
			s = s*k;
		printf("%2d!=%lf\n", n, s);
	}
	system("pause");
	return 0;
}
