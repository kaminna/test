#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i,j;
	char a='*',space=' ';
	for(i=4;i<=4&&i>=1;i--)
	{
		for(j=1;j<i;j++)
		{
			printf("%c",space);
		}
		for(j=1;j<=7;j++)
		{
			printf("%c",a);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
