#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 1, s = 0, n;
	printf("请输入一个正整数：");
	scanf("%d", &n);
	while (i <= n)
	{
		s = s + (10 * i + 2);
		i++;
	}
	printf("s=%d\n", s);
	system("pause");
	return 0;
}
