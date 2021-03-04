#include <stdio.h>
#include <string.h>
int EndSenten(char c)
{
	return c == '.' || c == '!' || c == '?';
}
int f(char *str)
{
	return EndSenten(str[strlen(str) - 1]);
}
int Name(char *str)
{
	if (str[0] < 'A' || str[0] > 'Z')
	{
		return 0;
	}
	for (int i = 1; i < strlen(str); i++)
	{
		if ((str[i]<'a' || str[i]>'z') && EndSenten(str[i]) == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main(int argc, char** argv)
{
	int n, cnt;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		cnt = 0;
		char str[1000];
		do
		{
			scanf("%s", str);
			if (Name(str))
			{
				cnt++;
			}
		} while (f(str) == 0);
		printf("%d\n", cnt);
	}
	return 0;
}