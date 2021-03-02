#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b, max;
	printf("Input two numbers:  ");
	scanf("%d%d", &a, &b);
	printf("max=%d\n", a > b ? a : b);
	system("pause");
	return 0;
}
