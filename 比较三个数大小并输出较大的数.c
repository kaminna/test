#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a, b,c,max,a1,b1,c1;
	printf("请输入三个数");
	scanf("%d%d%d", &a, &b,&c);
	a1 = a;
	b1 = b;
	c1 = c;
	if (a < b)
	{
		max = b;
	}
	else
	{
		max = a;
	}
	if (max < c)
	{
		max = c;
	}
	printf("%d %d %d中最大的数为：%d\n",a1,b1,c1,max);
	system("pause");
	return 0;
}
