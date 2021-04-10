#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i;
	scanf("%d", &i);
	if (i % 5 == 0 && i % 7 == 0)
	{
		printf("%d能同时被5和7整除\n", i);
	}
	else
	{
		printf("%d不能同时被5和7整除\n", i);
	}
	system("pause");
	return 0;
}
