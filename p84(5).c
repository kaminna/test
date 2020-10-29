#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j,n;
	long sum = 0;
	for (n = 1; n <= 9; n += 2)
	{
		i = 1; j = 1;
		while (i <= n)
		{
			j *= i;
			i++;
		}
		sum += j;
	}
	printf("1!+3!+5!+7!+9!=%d\n", sum);
	system("pause");
	return 0;
}
