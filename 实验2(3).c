#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	float a, b, c, t;
	printf("请输入三个浮点数：");
	scanf("%f%f%f", &a, &b, &c);
	t = (a + b + c) / 3;
	printf("这三个浮点数的平均数为：%f\n", t);
	system("pause");
	return 0;
}
