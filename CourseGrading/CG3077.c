#include <stdio.h>
#include <string.h>
int main(int argc, char** argv)
{
	char s[100];
	scanf("%s", s);
	int i = 0, j = strlen(s) - 1, flag = 0;
	while (1)
	{
		if (i == j)
		{
			flag = 1;
			break;
		}
		if (s[i] == s[j])
		{
			i++;
			j--;
		}
		else
		{
			break;
		}
	}
	if (flag)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
	return 0;
}