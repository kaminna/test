#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a;
	printf("请输入金额：");
	scanf("%d", &a);
	if (a > 5000)
		printf("应付：%f元", a*0.8);
	else if (a > 3000)
		printf("应付：%f元", a*0.85);
	else if (a > 2000)
		printf("应付：%f元", a*0.9);
	else if (a > 1000)
		printf("应付：%f元", a*0.95);
	else
		printf("应付：%d元", a);
	system("pause");
	return 0;
}
