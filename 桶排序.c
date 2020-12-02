#include<stdio.h>
int main(void)
{
	int a[11], i, j, t;
	for (i = 0; i <= 10; i++)
		a[i] = 0;				//初始化为0
	for (i = 1; i <= 5; i++)	//循环读入5个数
	{
		scanf("%d", &t);		//把每一个数读到变量t中
		a[t]++;					//进行计数
	}
	for (i = 0; i <= 10;i++)	//依次判断a[0]~a[10]
	for (j = 1; j <= a[i]; j++)	//出现了几次就打印几次
		printf("%d", i);
	return 0;
}
