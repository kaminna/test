#include <stdio.h>
#include <string.h>
int main(int argc, char **argv)
{
	int n, len;
	char str[100];
	scanf("%d", &n);
	while (n--)
	{
		scanf("%s", str);
		len = strlen(str);
		if ((str[len - 1] - '0') % 2)
		{
			printf("odd\n");
		}
		else
		{
			printf("even\n");
		}
	}
	return 0;
}