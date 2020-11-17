#include<stdio.h>
void pyramid(char ch, int n)
{
	int i, j;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i; j++)
			printf(" ");
		for (j = 1; j <= 2 * i - 1; j++)
			printf("%c", ch);
		printf("\n");
	}
}
int main(void)
{
	int ch, n;
	scanf("%c%d", &ch, &n);
	pyramid(ch, n);
	return 0;
}
