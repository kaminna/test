#include<cstdio>
int main(void)
{
	int n, m=1,i=1;
	scanf("%d", &n);
	if (n <= 20)
	{
		for (i = 1; i < n; i++)
		{
			m = (m + 1) * 2;
		}
	}
	printf("%d\n", m);
	return 0;
}

