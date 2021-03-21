#include <stdio.h>
#include <string.h>
int main(int argc, char** argv)
{
	int n, i, len;
	char s[100][101];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%s", s[i]);
	}
	for (i = 0; i < n; i++)
	{
		len = strlen(s[i]);
		if (s[i][len - 1] == 'K' && s[i][len - 2] == 'A')
		{
			s[i][len - 2] = '\0';
			printf("%s", s[i]);
			break;
		}
	}
	return 0;
}