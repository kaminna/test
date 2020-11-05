#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int n, i, sum =0;
	printf("请输入一个正整数：");
	scanf("%d", &n);
	while (n>0)
	{
		i = n % 10;
		n /= 10;
		sum += i;
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}
