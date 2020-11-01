#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i=1, j=0, s=0, n;
	printf("请输入一个正整数：");
	scanf("%d", &n);
	while (i <= n)
	{
		j += i;
		i++;
		s += j;
	}
	printf("s=1+(1+2)+(1+2+3)+...+(1+2+3+...+n)=%d\n", s);
	system("pause");
	return 0;
}
