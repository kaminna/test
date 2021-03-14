#include <stdio.h>
#include <math.h>
int main(int argc, char** argv)
{
	int n, i = 0, cnt = 0, m;
	scanf("%d", &n);
	m = n;
	while (n)
	{
		i = n;
		n /= 10;
		cnt++;
	}
	i = (i + 1) * pow(10, cnt-1);
	printf("%d", i - m);
	return 0;
}