#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a, b,c,a1,b1;
	printf("请输入两个数：");
	scanf("%d %d", &a, &b);
	a1 = a;
	b1 = b;
	if (a<b)
	{
		c = b;
		b = a;
		a = c;
	}
	else
	{
		c = 1;
	}
	while (c!=0)
	{
		c = a%b;
		a = b;
		b = c;
	}
	printf("%d和%d的最大公约数为：%d\n",a1,b1, a);
	system("pause");
	return 0;
}
