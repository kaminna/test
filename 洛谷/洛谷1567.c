#include <stdio.h>
int main(int argc, char** argv)
{
	int n, i;
	scanf("%d", &n);
	if (n == 1)
	{
		printf("1");
		return 0;
	}
	int a, b, cnt = 0, max = -1;
	scanf("%d", &a);
	for (i = 1; i < n; i++)
	{
		scanf("%d", &b);
		if (b > a)
		{
			cnt++;
			a = b;
			if (cnt > max)
			{
				max = cnt;
			}
		}
		else
		{
			if (cnt > max)
			{
				max = cnt;
			}
			cnt = 0;
			a = b;
		}
	}
	printf("%d", max+1);
	return 0;
}