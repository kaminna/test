#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 1, j = 0, n;
	double s = 0, d = 1.0;
	printf("请输入一个正整数：");
	scanf("%d", &n);
	while (i <= n)
	{
		j += i;
		s = s + d / j;
		i++;
	}
	printf("s=%f\n", s);
	system("pause");
	return 0;
}
