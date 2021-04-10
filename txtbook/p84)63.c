#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 1, j = 0, s = 0,f=1, n;
	printf("请输入一个正整数：");
	scanf("%d", &n);
	while (i <= n)
	{
		j = i*(i + 1);
		s = s + f*j;
		i++;
		f = -f;
	}
	printf("s=%d\n", s);
	system("pause");
	return 0;
}
