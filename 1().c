#include<stdio.h>
void prime(int n)
{
	int i,right=1;
	if (n == 1) right = 0;
	for (i = 2; i <= n / 2; i++)
	{
		if (n%i == 0)
			right = 0;
	}
	if (right)
		printf("%d是素数\n", n);
	//else
	//	printf("%d不是素数\n", n);
}
int main(void)
{
	int n,i;
	scanf("%d", &n);
	if (n>0)//素数为非零自然数
	prime(n);
	printf("100~999之间的素数有：\n");
	for (i = 100; i <= 999; i++)
		prime(i);
	return 0;
}
