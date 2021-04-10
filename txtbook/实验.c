#include<stdio.h>
int main(void)
{
	int temp,a[10];
	int *p = a, *q = &a[9];
	printf("请输入10个数字:");
	for (temp = 0; temp < 10; temp++)
		scanf("%d", &a[temp]);
	while (p != q)
	{
		while (*p % 2 == 0)		//判断*p为偶数
		{
			while (*q % 2 != 0)	//判断*q为奇数
			{
				temp = *p; *p = *q; *q = temp;	//交换
			}
			q--;
		}
		p++;
	}
	for (temp = 0; temp < 10; temp++)
		printf("%d ", a[temp]);
	printf("\n");
	return 0;
}
