#include <stdio.h>
#include <string.h>
int main(int argc, char** argv)
{
	char s[100];
	gets(s);
	int i, len = strlen(s), num = 0;
	for (i = 0; i < len; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + (s[i] - '0');
		}
	}
	printf("%d", num);
	return 0;
}