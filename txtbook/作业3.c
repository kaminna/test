#include<stdio.h>
#include<stdlib.h>
int main()
{
	unsigned a;
	printf("请输入一个数：");
	scanf("%d", &a);
	if (a % 2 == 0)
	{
		printf("%d为偶数\n", a);
	}
	else
	{
		printf("%d为奇数\n", a);
	}
	system("pause");
	return 0;
}
