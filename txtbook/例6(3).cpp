#include<stdio.h>
int approximate(int a, int b)
{
	if (b == 0)
		return a;
	else
		return approximate(b, a%b);
}
int main(void)
{
	int n, m,result;
	printf("请输入两个正整数：");
	scanf("%d%d", &n, &m);
	if (n>0&&m>0)
	result = approximate(n, m);
	printf("%d和%d的最大公约数为%d\n", n, m, result);
	return 0;
}
