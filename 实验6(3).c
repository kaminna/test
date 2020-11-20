#include<stdio.h>
void conversion(int n)
{
	int a;
	a = n % 2;
	if (n == 1);
	else
	{
		conversion(n/2);
	}
	printf("%d", a);
}
int main(void)
{
	int n;
	printf("请输入一个十进制数：");
	scanf("%d", &n);
	printf("%d用二进制表示为：", n);
	conversion(n);
	printf("\n");
	return 0;
}
